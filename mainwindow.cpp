#include <QTimer>
#include <QPainter>
#include <QString>
#include <QDebug>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QGraphicsDropShadowEffect>

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
    shadowEffect->setColor(Qt::black);
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
    shadowEffect->setColor(Qt::black);
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

