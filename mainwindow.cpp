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

    previousButton = nullptr;
    previousSettings = nullptr;

    setDashBoardPage();
    ui->expandedNav->hide();
    ui->connectIcon->setIcon(QIcon(":/logos/images/connect_icon.png"));

    connect(ui->compressedNavBtn, SIGNAL(clicked(bool)), this, SLOT(hideCompressed()));
    connect(ui->expandedNavBtn, SIGNAL(clicked(bool)), this, SLOT(hideExpandeded()));
    connect(ui->connectIcon, SIGNAL(clicked(bool)), this, SLOT(connectServer()));

    // page navigation signals
    connect(ui->compressedDashboardBtn, SIGNAL(clicked()), this, SLOT(setDashBoardPage()));
    connect(ui->expandedDashboardBtn, SIGNAL(clicked()), this, SLOT(setDashBoardPage()));
    connect(ui->compressedLogsBtn, SIGNAL(clicked()), this, SLOT(setLogsPage()));
    connect(ui->expandedLogsBtn, SIGNAL(clicked()), this, SLOT(setLogsPage()));
    connect(ui->compressedSettingsBtn, SIGNAL(clicked()), this, SLOT(setSettingsPage()));
    connect(ui->expandedSettingsBtn, SIGNAL(clicked()), this, SLOT(setSettingsPage()));
    connect(ui->compressedInfoBtn, SIGNAL(clicked()), this, SLOT(setInfoPage()));
    connect(ui->expandedInfoBtn, SIGNAL(clicked()), this, SLOT(setInfoPage()));

    // settings navigation signals
    setGeneralSettings();

    connect(ui->generalSettingsBtn, SIGNAL(clicked()), this, SLOT(setGeneralSettings()));
    connect(ui->proxySettingsBtn, SIGNAL(clicked()), this, SLOT(setProxySettings()));
    connect(ui->advancedSettingsBtn, SIGNAL(clicked()), this, SLOT(setAdvancedSettings()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::hideCompressed() {
    ui->compressedNav->hide();
    ui->expandedNav->show();
}

void MainWindow::hideExpandeded() {
    ui->compressedNav->show();
    ui->expandedNav->hide();
}

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

QPixmap MainWindow::setPixmapOpacity(const QPixmap &pixmap, qreal opacity) {
    QPixmap newPixmap(pixmap.size());
    newPixmap.fill(Qt::transparent);

    QPainter painter(&newPixmap);
    painter.setOpacity(opacity);
    painter.drawPixmap(0, 0, pixmap);
    painter.end();

    return newPixmap;
}

void MainWindow::setConnectedIcon(const QPixmap &pixmap, qreal opacity) {
    QPixmap newPixmap = setPixmapOpacity(pixmap, opacity);
    ui->connectIcon->setIcon(QIcon(newPixmap));
}

void MainWindow::setDashBoardPage() {
    setViewPage(0, ui->expandedDashboardBtn);
}

void MainWindow::setLogsPage() {
    setViewPage(1, ui->expandedLogsBtn);

    QGraphicsDropShadowEffect *shadowEffect = new QGraphicsDropShadowEffect(this);
    shadowEffect->setBlurRadius(10);
    shadowEffect->setOffset(5, 5);
    shadowEffect->setColor(Qt::black);
    ui->logsContainer->setGraphicsEffect(shadowEffect);
}

void MainWindow::setSettingsPage() {
    setViewPage(2, ui->expandedSettingsBtn);
}

void MainWindow::setInfoPage() {
    setViewPage(3, ui->expandedInfoBtn);

    QGraphicsDropShadowEffect *shadowEffect = new QGraphicsDropShadowEffect(this);
    shadowEffect->setBlurRadius(10);
    shadowEffect->setOffset(5, 5);
    shadowEffect->setColor(Qt::black);
    ui->infoContainer->setGraphicsEffect(shadowEffect);
}

void MainWindow::setViewPage(int index, QPushButton *clickedButton) {
    ui->StackedMainView->setCurrentIndex(index);

    if (clickedButton != nullptr) {
        clickedButton->setStyleSheet("background-color: #2D3233; border: 2px solid transparent; outline: none; padding-left: 17px; padding-right: 17px;");
    }

    if (previousButton != nullptr && previousButton != clickedButton) {
        previousButton->setStyleSheet("background-color: rgb(23, 28, 31); border: 2px solid transparent; outline: none; padding-left: 17px; padding-right: 17px;");
    }

    previousButton = clickedButton;
}


// set settings

void MainWindow:: setGeneralSettings() {
    setSettings(0, ui->generalSettingsBtn);
}

void MainWindow:: setProxySettings() {
    setSettings(1, ui->proxySettingsBtn);
}

void MainWindow:: setAdvancedSettings() {
    setSettings(2, ui->advancedSettingsBtn);
}

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
