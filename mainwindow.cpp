#include <QTimer>
#include <QPainter>
#include <QString>
#include <QDebug>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QGraphicsDropShadowEffect>
#include <QButtonGroup>
#include <QPropertyAnimation>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->resize(900, 600);

    // initiate null pointers for active tabs
    previousPage = nullptr;
    previousSettings = nullptr;




    // initiate default page
    setDashBoardPage();
    ui->expandedNav->hide();
    ui->connectIcon->setIcon(QIcon(":/logos/images/connect_icon.png"));

    // signals to control navbar transitions
    connect(ui->compressedNavBtn, SIGNAL(clicked(bool)), this, SLOT(showExpandedNavbar()));
    connect(ui->expandedNavBtn, SIGNAL(clicked(bool)), this, SLOT(showCompressedNavbar()));
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

    // signals to control settings navigation
    setGeneralSettings();
    connect(ui->generalSettingsBtn, SIGNAL(clicked()), this, SLOT(setGeneralSettings()));
    connect(ui->proxySettingsBtn, SIGNAL(clicked()), this, SLOT(setProxySettings()));
    connect(ui->advancedSettingsBtn, SIGNAL(clicked()), this, SLOT(setAdvancedSettings()));


    directoryLineEdit = ui->path;  // Replace with actual name from your UI form
    browseButton= ui->browse;
    connect(ui->browse, SIGNAL(clicked()), this, SLOT(on_browse_clicked()));

    directoryLineEdit2 = ui->path_2;  // Replace with actual name from your UI form
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
    ui->compressedNav->hide();
    ui->expandedNav->show();
}

// method to show compressed navbar
void MainWindow::showCompressedNavbar() {
    ui->compressedNav->show();
    ui->expandedNav->hide();
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
void MainWindow::setViewPage(int index, QPushButton *clickedButton) {
    ui->StackedMainView->setCurrentIndex(index);

    if (clickedButton != nullptr) {
        clickedButton->setStyleSheet("background-color: #2D3233; border: 2px solid transparent; outline: none; padding-left: 17px; padding-right: 17px;");
    }

    if (previousPage != nullptr && previousPage != clickedButton) {
        previousPage->setStyleSheet("background-color: rgb(23, 28, 31); border: 2px solid transparent; outline: none; padding-left: 17px; padding-right: 17px;");
    }

    previousPage = clickedButton;
}

// method to display dashboard page
void MainWindow::setDashBoardPage() {
    setViewPage(0, ui->expandedDashboardBtn);
}

// method to display logs page
void MainWindow::setLogsPage() {
   setViewPage(1, ui->expandedLogsBtn);
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
    setViewPage(2, ui->expandedSettingsBtn);
}

// method to display info page
void MainWindow::setInfoPage() {
    setViewPage(3, ui->expandedInfoBtn);

    // apply drop shadow effects to the info container
    QGraphicsDropShadowEffect *shadowEffect = new QGraphicsDropShadowEffect(this);
    shadowEffect->setBlurRadius(10);
    shadowEffect->setOffset(5, 5);
    // you can change the color of shadow here
    shadowEffect->setColor(QColor(0, 0, 0, 100));
    ui->infoContainer->setGraphicsEffect(shadowEffect);
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
        directoryLineEdit->setText(directory);
    }
}


void MainWindow::on_browse_2_clicked()
{

    QString directory1 = QFileDialog::getExistingDirectory(this, "Select Directory");
    if (!directory1.isEmpty()) {
        directoryLineEdit2->setText(directory1);
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




