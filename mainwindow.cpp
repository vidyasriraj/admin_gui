#include <QTimer>
#include <QPainter>
#include <QString>
#include <QDebug>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QGraphicsDropShadowEffect>
#include <QButtonGroup>
#include <QPropertyAnimation>
#include <QWidget>
#include <QRandomGenerator>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),toggleFlag(true)
{
    ui->setupUi(this);
    this->resize(900, 600);

    // initiate null pointers for active tabs
    previousPage = nullptr;
    previousPage1 = nullptr;
    previousSettings = nullptr;




    // initiate default page
    setDashBoardPage();
    ui->expandedNav->hide();
    ui->connectIcon->setIcon(QIcon(":/logos/images/connect_icon.png"));

    // signals to control navbar transitions
    connect(ui->compressedNavBtn, SIGNAL(clicked(bool)), this, SLOT(showExpandedNavbar()));
    connect(ui->connectIcon, SIGNAL(clicked(bool)), this, SLOT(connectServer()));

    // signals to control page navigation
    connect(ui->compressedDashboardBtn, SIGNAL(clicked()), this, SLOT(setDashBoardPage()));
    connect(ui->expandedDashboardBtn, SIGNAL(clicked()), this, SLOT(setDashBoardPage()));
    connect(ui->compressedLogsBtn, SIGNAL(clicked()), this, SLOT(setLogsPage()));
    connect(ui->expandedLogsBtn, SIGNAL(clicked()), this, SLOT(setLogsPage()));
    connect(ui->compressedSettingsBtn, SIGNAL(clicked()), this, SLOT(setSettingsPage()));
    connect(ui->expandedSettingsBtn, SIGNAL(clicked()), this, SLOT(setSettingsPage()));
    connect(ui->compressedInfoBtn, SIGNAL(clicked()), this, SLOT(setInfoPage()));
    connect(ui->expandedInfoBtn, SIGNAL(clicked()), this, SLOT(setInfoPage()));
    connect(ui->confBtn, SIGNAL(clicked()), this, SLOT(setConfPage()));
    connect(ui->expandedConfBtn, SIGNAL(clicked()), this, SLOT(setConfPage()));
    connect(ui->UserBtn, SIGNAL(clicked()), this, SLOT(setUserPage()));
    connect(ui->expandedUserBtn, SIGNAL(clicked()), this, SLOT(setUserPage()));

    // signals to control settings navigation
    setGeneralSettings();
    connect(ui->generalSettingsBtn, SIGNAL(clicked()), this, SLOT(setGeneralSettings()));
    connect(ui->proxySettingsBtn, SIGNAL(clicked()), this, SLOT(setProxySettings()));
    connect(ui->advancedSettingsBtn, SIGNAL(clicked()), this, SLOT(setAdvancedSettings()));


     // Replace with actual name from your UI form
    browseButton= ui->browse;
    connect(ui->browse, SIGNAL(clicked()), this, SLOT(on_browse_clicked()));

    // Replace with actual name from your UI form
    browseButton2= ui->browse_2;
    connect(ui->browse_2, SIGNAL(clicked()), this, SLOT(on_browse_2_clicked()));


    ui->option1->setChecked(true);
    QButtonGroup *buttonGroup = new QButtonGroup(this);
    buttonGroup->addButton(ui->option1);
    buttonGroup->addButton(ui->option2);
    buttonGroup->addButton(ui->man);

    applyBlurEffect(ui->op1, true);
    applyBlurEffect(ui->op2, true);
    ui->op1->setEnabled(false);
    ui->op2->setEnabled(false);
    applyBlurEffect(ui->add, true);
    applyBlurEffect(ui->add_inp, true);
    ui->add->setEnabled(false);
    ui->add_inp->setEnabled(false);
    applyBlurEffect(ui->port, true);
    applyBlurEffect(ui->port_inp, true);
    ui->port->setEnabled(false);
    ui->port_inp->setEnabled(false);
    QButtonGroup *buttonGroup2 = new QButtonGroup(this);
    buttonGroup2->addButton(ui->op1);
    buttonGroup2->addButton(ui->op2);


    // Connect the parent radio button's toggled signal to the enableSubRadioButtons function
    connect(ui->man, &QRadioButton::toggled, this, &MainWindow::on_man_toggled);


    currentUsers = new CurrentUsers(this);
    ui->widget_2->layout()->addWidget(currentUsers);

    // Connect the "Add" button to the addUser slot
    connect(ui->addbutton, &QPushButton::clicked, this, &MainWindow::addUser);
    connect(currentUsers, &CurrentUsers::userDeleted, this, &MainWindow::handleDeletedUser);
    connect(ui->mainCheckBox, &QCheckBox::toggled, this, &MainWindow::onMainCheckBoxToggled);
    connect(currentUsers, &CurrentUsers::checkBoxStateChanged, this, &MainWindow::updateMainCheckBox);
}


MainWindow::~MainWindow()
{
    delete ui;
}



/**
 * Toggle the navbar on clicking menu icon
 */

// method to show expanded navbar
void MainWindow::showExpandedNavbar() {
    int startX = -ui->compressedNav->width();  // Start from the 0 x-coordinate (left edge of the window)
    int endX = ui->compressedNav->width();  // End at the right edge of the compressedNav
    int startY = ui->expandedNav->y();  // Y-coordinate remains unchanged
    int height = ui->expandedNav->height();  // Height remains unchanged

    QPropertyAnimation *moveAnimation = new QPropertyAnimation(ui->expandedNav, "geometry");
    moveAnimation->setDuration(500);  // Duration of animation in milliseconds
    moveAnimation->setEasingCurve(QEasingCurve::InOutSine);  // Smooth easing curve

    if (toggleFlag) {
        // Expand the navigation bar from 0 x-coordinate
        ui->expandedNav->setGeometry(startX, startY, 0, height);  // Initial geometry with width 0
        // Make sure expandedNav is visible

        // Set start and end values for expanding animation
        moveAnimation->setStartValue(QRect(startX, startY, 0, height));
        moveAnimation->setEndValue(QRect(endX, startY, 0, height));
        ui->expandedNav->show();
        toggleFlag = false;
    } else {
        // Collapse the navigation bar back to 0 x-coordinate
        // Set start and end values for collapsing animation
        ui->expandedNav->setGeometry(startX, startY, 0, height);
        moveAnimation->setStartValue(QRect(endX, startY, 0, height));
        moveAnimation->setEndValue(QRect(startX, startY, 0, height));

        connect(moveAnimation, &QPropertyAnimation::finished, [this]() {
            ui->expandedNav->hide();  // Hide expandedNav after animation
        });

        toggleFlag = true;
    }

    moveAnimation->start(QAbstractAnimation::DeleteWhenStopped);
}









/**
 * Establish connection with the server after the user clicks the connect button
 * It perform series of steps to change the icon of the button and apply the neccessary styles to the button
 * It fetches the required data from the server and shows the stats of the connection
 */

// method to control opacity for the connected button logo
QPixmap MainWindow::setPixmapOpacity(const QPixmap &pixmap, qreal opacity) {
    QPixmap newPixmap(pixmap.size());
    newPixmap.fill(Qt::transparent);

    QPainter painter(&newPixmap);
    painter.setOpacity(opacity);
    painter.drawPixmap(0, 0, pixmap);
    painter.end();

    return newPixmap;
}

// method to change the image of connected button after connecting and disconnecting
void MainWindow::setConnectedIcon(const QPixmap &pixmap, qreal opacity) {
    QPixmap newPixmap = setPixmapOpacity(pixmap, opacity);
    ui->connectIcon->setIcon(QIcon(newPixmap));
}

// method to establish connection with the server
void MainWindow::connectServer() {
    QPixmap pixmap;
    QString connectText;
    if (ui->connectIcon->isChecked()) {
        connectText = "Connected";
        pixmap = QPixmap(":/logos/images/connected_icon.png");
    } else {
        connectText = "Connect";
        pixmap = QPixmap(":/logos/images/connect_icon.png");
    }

    qreal opacity = 0.3;
    QPixmap newPixmap = setPixmapOpacity(pixmap, opacity);
    ui->connectIcon->setIcon(QIcon(newPixmap));

    for (int i = 0; i <= 7; ++i) {
        QTimer::singleShot(60 * i, this, [this, pixmap, opacity, i]() {
            setConnectedIcon(pixmap, opacity + 0.1 * i);
        });
    }
    ui->connectText->setText(connectText);
    ui->connectText->setAlignment(Qt::AlignCenter);
}



/**
 * Code to navigate between different pages in navbar and apply neccessary styles
 * After successful selection it changes the current page to selected page
 */

// method to apply common stylings and set selected page for navigation between the pages
void MainWindow::setViewPage(int index, QPushButton *clickedButton,QPushButton *clickedButton1) {
    ui->StackedMainView->setCurrentIndex(index);

    if (clickedButton != nullptr && clickedButton1 != nullptr) {
        clickedButton->setStyleSheet("background-color: #2D3233; border: 2px solid transparent; outline: none;");
        clickedButton1->setStyleSheet("background-color: #2D3233; border: 2px solid transparent; outline: none;");
    }

    if (previousPage != nullptr && previousPage != clickedButton && previousPage != clickedButton1 ) {
        previousPage->setStyleSheet("background-color: rgb(23, 28, 31); border: 2px solid transparent; outline: none;");
        previousPage1->setStyleSheet("background-color: rgb(23, 28, 31); border: 2px solid transparent; outline: none;");
    }

    previousPage = clickedButton;
    previousPage1 = clickedButton1;

}

// method to display dashboard page
void MainWindow::setDashBoardPage() {
    setViewPage(0, ui->expandedDashboardBtn,ui->compressedDashboardBtn);
}

// method to display logs page
void MainWindow::setLogsPage() {
    setViewPage(1, ui->expandedLogsBtn,ui->compressedLogsBtn);
    // apply drop shadow effects to the logs container
    QGraphicsDropShadowEffect *shadowEffect = new QGraphicsDropShadowEffect(this);
    shadowEffect->setBlurRadius(10);
    shadowEffect->setOffset(5, 5);
    // you can change the color of shadow here
    shadowEffect->setColor(QColor(0, 0, 0, 100));
    ui->logsContainer->setGraphicsEffect(shadowEffect);
}

// method to display settings page
void MainWindow::setSettingsPage() {
    setViewPage(2, ui->expandedSettingsBtn,ui->compressedSettingsBtn);
}

// method to display info page
void MainWindow::setInfoPage() {
    setViewPage(3, ui->expandedInfoBtn,ui->compressedInfoBtn);

    // apply drop shadow effects to the info container
    QGraphicsDropShadowEffect *shadowEffect = new QGraphicsDropShadowEffect(this);
    shadowEffect->setBlurRadius(10);
    shadowEffect->setOffset(5, 5);
    // you can change the color of shadow here
    shadowEffect->setColor(QColor(0, 0, 0, 100));
    ui->infoContainer->setGraphicsEffect(shadowEffect);
}
void MainWindow::setConfPage() {
    setViewPage(5, ui->expandedConfBtn ,ui->confBtn);
}
void MainWindow::setUserPage() {
    setViewPage(4, ui->expandedUserBtn ,ui->UserBtn);
}



/**
* Code to navigate between different settings and apply neccessary styles
* After successful selection it changes the current active settings to selected settings
*/

// method to apply common stylings and set selected settings for navigation between the settings
void MainWindow::setSettings(int index, QPushButton *selectedSettingsBtn) {
    ui->stackedSettingsView->setCurrentIndex(index);

    if (selectedSettingsBtn != nullptr) {
        selectedSettingsBtn->setStyleSheet("background-color: rgba(45, 50, 51, 1); padding-left: 8px;");
    }

    if (previousSettings != nullptr && previousSettings != selectedSettingsBtn) {
        previousSettings->setStyleSheet("background-color: transparent; padding-left: 8px;");
    }

    previousSettings = selectedSettingsBtn;
}

// set general settings
void MainWindow:: setGeneralSettings() {
    setSettings(0, ui->generalSettingsBtn);
}

// set proxy settings
void MainWindow:: setProxySettings() {
    setSettings(1, ui->proxySettingsBtn);
}

// set advanced settings
void MainWindow:: setAdvancedSettings() {
    setSettings(2, ui->advancedSettingsBtn);
}


void MainWindow::on_browse_clicked()
{
    QString directory = QFileDialog::getExistingDirectory(this, "Select Directory");

    if (!directory.isEmpty()) {
        ui->path->setText(directory);
    }
}


void MainWindow::on_browse_2_clicked()
{

    QString directory1 = QFileDialog::getExistingDirectory(this, "Select Directory");
    if (!directory1.isEmpty()) {
        ui->path_2->setText(directory1);
    }
}




void MainWindow::on_man_toggled(bool checked)
{
    applyBlurEffect(ui->op1, !checked);
    applyBlurEffect(ui->op2, !checked);
    applyBlurEffect(ui->add, !checked);
    applyBlurEffect(ui->port, !checked);
    applyBlurEffect(ui->add_inp, !checked);
    applyBlurEffect(ui->port_inp, !checked);
    ui->op1->setEnabled(checked);
    ui->op2->setEnabled(checked);
    ui->add->setEnabled(checked);
    ui->add_inp->setEnabled(checked);
    ui->port->setEnabled(checked);
    ui->port_inp->setEnabled(checked);

}

void MainWindow::addUser()
{
    // This is just an example. In a real application, you'd get this information from user input or a network connection.
    QString name = "User " + QString::number(QRandomGenerator::global()->bounded(100));
    QString ip = QString::number(QRandomGenerator::global()->bounded(256)) + "." +
                 QString::number(QRandomGenerator::global()->bounded(256)) + "." +
                 QString::number(QRandomGenerator::global()->bounded(256)) + "." +
                 QString::number(QRandomGenerator::global()->bounded(256));
    QString status = (QRandomGenerator::global()->bounded(2) == 0) ? "Online" : "Offline";
    QString connectedTime = QString::number(QRandomGenerator::global()->bounded(24)) + ":" +
                            QString("%1").arg(QRandomGenerator::global()->bounded(60), 2, 10, QChar('0'));

    currentUsers->addUser(name, ip, status, connectedTime);
}

void MainWindow::handleDeletedUser(const QString &name, const QString &ip, const QString &status, const QString &connectedTime)
{
    qDebug() << "Deleted user details:";
    qDebug() << "Name:" << name;
    qDebug() << "IP:" << ip;
    qDebug() << "Status:" << status;
    qDebug() << "Connected Time:" << connectedTime;

    // You can add more code here to handle the deleted user information as needed
}
void MainWindow::processCheckBoxes()
{
    QList<QCheckBox*> checkBoxes = currentUsers->getCheckBoxes();
    for (int i = 0; i < checkBoxes.size(); ++i) {
        QCheckBox *checkbox = checkBoxes[i];
        qDebug() << "Checkbox" << i + 1 << "is" << (checkbox->isChecked() ? "checked" : "unchecked");
    }
}
void MainWindow::onMainCheckBoxToggled(bool checked)
{
    currentUsers->setAllCheckBoxes(checked);
}

void MainWindow::updateMainCheckBox()
{
    QList<QCheckBox*> checkBoxes = currentUsers->getCheckBoxes();
    bool allChecked = true;
    bool anyChecked = false;

    for (QCheckBox* checkbox : checkBoxes) {
        if (checkbox->isChecked()) {
            anyChecked = true;
        } else {
            allChecked = false;
        }
    }

    // Block signals to prevent recursive calls
    ui->mainCheckBox->blockSignals(true);
    if (allChecked) {
        ui->mainCheckBox->setCheckState(Qt::Checked);
    } else if (anyChecked) {
        ui->mainCheckBox->setCheckState(Qt::Unchecked);
    } else {
        ui->mainCheckBox->setCheckState(Qt::Unchecked);
    }
    ui->mainCheckBox->blockSignals(false);
}

