/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_4;
    QWidget *compressedNav;
    QPushButton *compressedDashboardBtn;
    QPushButton *compressedLogsBtn;
    QPushButton *compressedSettingsBtn;
    QPushButton *compressedInfoBtn;
    QPushButton *compressedNavBtn;
    QPushButton *compressedLogsBtn_2;
    QPushButton *compressedLogsBtn_3;
    QWidget *expandedNav;
    QGridLayout *gridLayout_3;
    QPushButton *expandedNavBtn;
    QPushButton *expandedInfoBtn;
    QPushButton *expandedLogsBtn;
    QPushButton *expandedDashboardBtn;
    QPushButton *expandedSettingsBtn;
    QSpacerItem *verticalSpacer_2;
    QFrame *frame_5;
    QWidget *main;
    QGridLayout *gridLayout;
    QStackedWidget *StackedMainView;
    QWidget *dashboardPage;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *logoLayout;
    QLabel *quantumLogoDashboard;
    QSpacerItem *horizontalSpacer_2;
    QLabel *userLogoDashboard;
    QPushButton *connectIcon;
    QLabel *connectText;
    QHBoxLayout *connectionStatsLayout;
    QFrame *uploadFrame;
    QVBoxLayout *verticalLayout_2;
    QPushButton *uploadIconAndText;
    QLabel *uploadSpeedvalue;
    QFrame *downloadFrame;
    QVBoxLayout *verticalLayout_3;
    QPushButton *downloadIconAndText;
    QLabel *downloadSpeedvalue;
    QFrame *upTimeFrame;
    QVBoxLayout *verticalLayout_4;
    QPushButton *upTimeIconAndText;
    QLabel *upTimeValue;
    QFrame *ipAddressFrame;
    QVBoxLayout *verticalLayout_5;
    QPushButton *ipAddressIconAndText;
    QLabel *ipAddressValue;
    QWidget *logsPage;
    QGridLayout *gridLayout_6;
    QHBoxLayout *logsBodyHorizontalLayout;
    QSpacerItem *LogsHorizontalSpacerLeft;
    QFrame *logsContainer;
    QGridLayout *gridLayout_5;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_7;
    QLabel *logsBody;
    QLabel *logsTitle;
    QSpacerItem *LogsHorizontalSpacerRight;
    QHBoxLayout *logsLogoLayout;
    QLabel *label;
    QSpacerItem *logsLogoLayoutHorizontalSpacer;
    QLabel *user;
    QWidget *settingsPage;
    QGridLayout *gridLayout_8;
    QFrame *selectSettingsFrame;
    QVBoxLayout *verticalLayout_9;
    QLabel *settingsTitle;
    QPushButton *generalSettingsBtn;
    QPushButton *proxySettingsBtn;
    QPushButton *advancedSettingsBtn;
    QSpacerItem *verticalSpacer_3;
    QStackedWidget *stackedSettingsView;
    QWidget *generalSettingsPage;
    QLabel *userInterfaceTitle;
    QLabel *languageLabel;
    QComboBox *selectLanguageInput;
    QFrame *line;
    QLabel *userInterfaceTitle_3;
    QLabel *label_8;
    QRadioButton *radioButton;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_2;
    QLabel *userInterfaceTitle_2;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QFrame *line_2;
    QCheckBox *checkBox_5;
    QWidget *proxySettingsPage;
    QGridLayout *gridLayout_12;
    QFrame *frame_6;
    QRadioButton *option1;
    QRadioButton *option2;
    QRadioButton *man;
    QRadioButton *op1;
    QRadioButton *op2;
    QLabel *add;
    QLineEdit *add_inp;
    QLabel *port;
    QLineEdit *port_inp;
    QGroupBox *groupBox;
    QWidget *advancedSettingsPage;
    QLineEdit *path;
    QPushButton *browse;
    QLineEdit *path_2;
    QPushButton *browse_2;
    QLineEdit *path_3;
    QLineEdit *path_4;
    QLineEdit *path_5;
    QLineEdit *path_6;
    QFrame *line_3;
    QFrame *line_4;
    QLabel *label_11;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_19;
    QLabel *label_13;
    QLabel *label_12;
    QLabel *label_18;
    QLabel *label_17;
    QWidget *infoPage;
    QGridLayout *gridLayout_10;
    QLabel *userLogoInfo;
    QHBoxLayout *infoContainerLayout;
    QSpacerItem *InfohorizontalSpacerLeft;
    QFrame *infoContainer;
    QGridLayout *gridLayout_9;
    QLabel *infoDescription;
    QLabel *infoTitle;
    QLabel *quantumLogoInfo;
    QSpacerItem *InfohorizontalSpacerRight;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(900, 600);
        MainWindow->setMinimumSize(QSize(900, 600));
        MainWindow->setMaximumSize(QSize(900, 600));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setMinimumSize(QSize(900, 600));
        centralwidget->setMaximumSize(QSize(900, 600));
        gridLayout_4 = new QGridLayout(centralwidget);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        compressedNav = new QWidget(centralwidget);
        compressedNav->setObjectName("compressedNav");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(compressedNav->sizePolicy().hasHeightForWidth());
        compressedNav->setSizePolicy(sizePolicy);
        compressedNav->setMinimumSize(QSize(70, 600));
        compressedNav->setMaximumSize(QSize(16777215, 600));
        compressedNav->setStyleSheet(QString::fromUtf8("background-color: rgb(23, 28, 31);"));
        compressedDashboardBtn = new QPushButton(compressedNav);
        compressedDashboardBtn->setObjectName("compressedDashboardBtn");
        compressedDashboardBtn->setGeometry(QRect(0, 64, 68, 64));
        compressedDashboardBtn->setCursor(QCursor(Qt::PointingHandCursor));
        compressedDashboardBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(23, 28, 31);\n"
"border: 2px solid transparent;\n"
"outline: none;\n"
"QPushButton::focus { background-color:rgb(217, 217, 217); }"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/logos/images/Dashboard Layout.png"), QSize(), QIcon::Normal, QIcon::Off);
        compressedDashboardBtn->setIcon(icon);
        compressedDashboardBtn->setIconSize(QSize(60, 60));
        compressedDashboardBtn->setCheckable(true);
        compressedDashboardBtn->setChecked(true);
        compressedDashboardBtn->setAutoExclusive(true);
        compressedLogsBtn = new QPushButton(compressedNav);
        compressedLogsBtn->setObjectName("compressedLogsBtn");
        compressedLogsBtn->setGeometry(QRect(0, 128, 68, 64));
        compressedLogsBtn->setCursor(QCursor(Qt::PointingHandCursor));
        compressedLogsBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(23, 28, 31);\n"
"selection-background-color: rgb(217, 217, 217);\n"
"border: 2px solid transparent;\n"
"outline: none;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/logos/images/Align Text Left.png"), QSize(), QIcon::Normal, QIcon::Off);
        compressedLogsBtn->setIcon(icon1);
        compressedLogsBtn->setIconSize(QSize(60, 60));
        compressedLogsBtn->setCheckable(true);
        compressedSettingsBtn = new QPushButton(compressedNav);
        compressedSettingsBtn->setObjectName("compressedSettingsBtn");
        compressedSettingsBtn->setGeometry(QRect(0, 472, 68, 64));
        compressedSettingsBtn->setCursor(QCursor(Qt::PointingHandCursor));
        compressedSettingsBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(23, 28, 31);\n"
"border: 2px solid transparent;\n"
"outline: none;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/logos/images/CMakeLists.txt.user"), QSize(), QIcon::Normal, QIcon::Off);
        compressedSettingsBtn->setIcon(icon2);
        compressedSettingsBtn->setIconSize(QSize(60, 60));
        compressedSettingsBtn->setCheckable(true);
        compressedInfoBtn = new QPushButton(compressedNav);
        compressedInfoBtn->setObjectName("compressedInfoBtn");
        compressedInfoBtn->setGeometry(QRect(0, 536, 68, 64));
        compressedInfoBtn->setCursor(QCursor(Qt::PointingHandCursor));
        compressedInfoBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(23, 28, 31);\n"
"border: 2px solid transparent;\n"
"outline: none;"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/logos/images/Info.png"), QSize(), QIcon::Normal, QIcon::Off);
        compressedInfoBtn->setIcon(icon3);
        compressedInfoBtn->setIconSize(QSize(60, 60));
        compressedInfoBtn->setCheckable(true);
        compressedNavBtn = new QPushButton(compressedNav);
        compressedNavBtn->setObjectName("compressedNavBtn");
        compressedNavBtn->setGeometry(QRect(0, 0, 68, 64));
        QFont font;
        font.setBold(false);
        compressedNavBtn->setFont(font);
        compressedNavBtn->setCursor(QCursor(Qt::PointingHandCursor));
        compressedNavBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(23, 28, 31);\n"
"border: 2px solid transparent;\n"
"outline: none;"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/logos/images/Menu.png"), QSize(), QIcon::Normal, QIcon::Off);
        compressedNavBtn->setIcon(icon4);
        compressedNavBtn->setIconSize(QSize(60, 60));
        compressedLogsBtn_2 = new QPushButton(compressedNav);
        compressedLogsBtn_2->setObjectName("compressedLogsBtn_2");
        compressedLogsBtn_2->setGeometry(QRect(0, 190, 68, 64));
        compressedLogsBtn_2->setCursor(QCursor(Qt::PointingHandCursor));
        compressedLogsBtn_2->setStyleSheet(QString::fromUtf8("background-color: rgb(23, 28, 31);\n"
"border: 2px solid transparent;\n"
"outline: none;"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("../../Downloads/Users.png"), QSize(), QIcon::Normal, QIcon::Off);
        compressedLogsBtn_2->setIcon(icon5);
        compressedLogsBtn_2->setIconSize(QSize(60, 60));
        compressedLogsBtn_2->setCheckable(true);
        compressedLogsBtn_3 = new QPushButton(compressedNav);
        compressedLogsBtn_3->setObjectName("compressedLogsBtn_3");
        compressedLogsBtn_3->setGeometry(QRect(0, 260, 68, 64));
        compressedLogsBtn_3->setCursor(QCursor(Qt::PointingHandCursor));
        compressedLogsBtn_3->setStyleSheet(QString::fromUtf8("background-color: rgb(23, 28, 31);\n"
"border: 2px solid transparent;\n"
"outline: none;"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("../../Downloads/Computer Support.png"), QSize(), QIcon::Normal, QIcon::Off);
        compressedLogsBtn_3->setIcon(icon6);
        compressedLogsBtn_3->setIconSize(QSize(60, 60));
        compressedLogsBtn_3->setCheckable(true);

        gridLayout_4->addWidget(compressedNav, 0, 0, 1, 1);

        expandedNav = new QWidget(centralwidget);
        expandedNav->setObjectName("expandedNav");
        expandedNav->setEnabled(true);
        sizePolicy.setHeightForWidth(expandedNav->sizePolicy().hasHeightForWidth());
        expandedNav->setSizePolicy(sizePolicy);
        expandedNav->setMinimumSize(QSize(165, 600));
        expandedNav->setMaximumSize(QSize(16777215, 16777215));
        expandedNav->setStyleSheet(QString::fromUtf8("background-color: rgb(23, 28, 31);\n"
"color: rgb(255, 255, 255);\n"
"text-align: left;\n"
"font-family: \"Roboto\";\n"
"margin: 0px;"));
        gridLayout_3 = new QGridLayout(expandedNav);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        expandedNavBtn = new QPushButton(expandedNav);
        expandedNavBtn->setObjectName("expandedNavBtn");
        expandedNavBtn->setCursor(QCursor(Qt::PointingHandCursor));
        expandedNavBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(23, 28, 31);\n"
"border: 2px solid transparent;\n"
"outline: none;\n"
"padding-left: \"17px\";\n"
"padding-right: \"17px\";"));
        expandedNavBtn->setIcon(icon4);
        expandedNavBtn->setIconSize(QSize(60, 60));

        gridLayout_3->addWidget(expandedNavBtn, 0, 0, 1, 1);

        expandedInfoBtn = new QPushButton(expandedNav);
        expandedInfoBtn->setObjectName("expandedInfoBtn");
        expandedInfoBtn->setMaximumSize(QSize(165, 16777215));
        expandedInfoBtn->setCursor(QCursor(Qt::PointingHandCursor));
        expandedInfoBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(23, 28, 31);\n"
"border: 2px solid transparent;\n"
"outline: none;\n"
"padding-left: \"17px\";\n"
"padding-right: \"17px\";"));
        expandedInfoBtn->setIcon(icon3);
        expandedInfoBtn->setIconSize(QSize(60, 60));
        expandedInfoBtn->setCheckable(true);

        gridLayout_3->addWidget(expandedInfoBtn, 5, 0, 1, 1);

        expandedLogsBtn = new QPushButton(expandedNav);
        expandedLogsBtn->setObjectName("expandedLogsBtn");
        expandedLogsBtn->setMaximumSize(QSize(165, 16777215));
        expandedLogsBtn->setCursor(QCursor(Qt::PointingHandCursor));
        expandedLogsBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(23, 28, 31);\n"
"border: 2px solid transparent;\n"
"outline: none;\n"
"padding-left: \"17px\";\n"
"padding-right: \"17px\";"));
        expandedLogsBtn->setIcon(icon1);
        expandedLogsBtn->setIconSize(QSize(60, 60));
        expandedLogsBtn->setCheckable(true);

        gridLayout_3->addWidget(expandedLogsBtn, 2, 0, 1, 1);

        expandedDashboardBtn = new QPushButton(expandedNav);
        expandedDashboardBtn->setObjectName("expandedDashboardBtn");
        sizePolicy.setHeightForWidth(expandedDashboardBtn->sizePolicy().hasHeightForWidth());
        expandedDashboardBtn->setSizePolicy(sizePolicy);
        expandedDashboardBtn->setMaximumSize(QSize(165, 16777215));
        expandedDashboardBtn->setCursor(QCursor(Qt::PointingHandCursor));
        expandedDashboardBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(23, 28, 31);\n"
"border: 2px solid transparent;\n"
"outline: none;\n"
"padding-left: \"17px\";\n"
"padding-right: \"17px\";"));
        expandedDashboardBtn->setIcon(icon);
        expandedDashboardBtn->setIconSize(QSize(60, 60));
        expandedDashboardBtn->setCheckable(true);
        expandedDashboardBtn->setAutoExclusive(true);

        gridLayout_3->addWidget(expandedDashboardBtn, 1, 0, 1, 1);

        expandedSettingsBtn = new QPushButton(expandedNav);
        expandedSettingsBtn->setObjectName("expandedSettingsBtn");
        expandedSettingsBtn->setMaximumSize(QSize(165, 16777215));
        expandedSettingsBtn->setCursor(QCursor(Qt::PointingHandCursor));
        expandedSettingsBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(23, 28, 31);\n"
"border: 2px solid transparent;\n"
"outline: none;\n"
"padding-left: \"17px\";\n"
"padding-right: \"17px\";"));
        expandedSettingsBtn->setIcon(icon2);
        expandedSettingsBtn->setIconSize(QSize(60, 60));
        expandedSettingsBtn->setCheckable(true);

        gridLayout_3->addWidget(expandedSettingsBtn, 4, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 277, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 3, 0, 1, 1);

        frame_5 = new QFrame(expandedNav);
        frame_5->setObjectName("frame_5");
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);

        gridLayout_3->addWidget(frame_5, 2, 1, 1, 1);


        gridLayout_4->addWidget(expandedNav, 0, 1, 1, 1);

        main = new QWidget(centralwidget);
        main->setObjectName("main");
        main->setStyleSheet(QString::fromUtf8("background: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0 #3E3F40, stop:0.95 #1F363D);\n"
""));
        gridLayout = new QGridLayout(main);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        StackedMainView = new QStackedWidget(main);
        StackedMainView->setObjectName("StackedMainView");
        StackedMainView->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: 2px solid transparent;\n"
"outline: none;\n"
"\n"
"/* Individual pages inside the stacked widget */\n"
"QWidget {\n"
"    background-color: transparent;\n"
"    opacity: 1; /* Initially fully opaque */\n"
"}\n"
"\n"
"/* Hidden state for pages */\n"
"QWidget[hidden=\"true\"] {\n"
"    opacity: 0; /* Hidden pages are fully transparent */\n"
"}\n"
""));
        dashboardPage = new QWidget();
        dashboardPage->setObjectName("dashboardPage");
        dashboardPage->setMinimumSize(QSize(0, 582));
        dashboardPage->setMaximumSize(QSize(16777215, 16777215));
        dashboardPage->setStyleSheet(QString::fromUtf8("color: #ffffff;\n"
""));
        verticalLayout = new QVBoxLayout(dashboardPage);
        verticalLayout->setObjectName("verticalLayout");
        logoLayout = new QHBoxLayout();
        logoLayout->setObjectName("logoLayout");
        quantumLogoDashboard = new QLabel(dashboardPage);
        quantumLogoDashboard->setObjectName("quantumLogoDashboard");
        quantumLogoDashboard->setMaximumSize(QSize(90, 90));
        quantumLogoDashboard->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: 2px solid transparent;\n"
"outline: none;\n"
""));
        quantumLogoDashboard->setPixmap(QPixmap(QString::fromUtf8(":/logos/images/qaig_logo.png")));
        quantumLogoDashboard->setScaledContents(true);

        logoLayout->addWidget(quantumLogoDashboard);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Minimum);

        logoLayout->addItem(horizontalSpacer_2);

        userLogoDashboard = new QLabel(dashboardPage);
        userLogoDashboard->setObjectName("userLogoDashboard");
        userLogoDashboard->setMaximumSize(QSize(80, 80));
        userLogoDashboard->setCursor(QCursor(Qt::PointingHandCursor));
        userLogoDashboard->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: 2px solid transparent;\n"
"outline: none;\n"
""));
        userLogoDashboard->setPixmap(QPixmap(QString::fromUtf8(":/logos/images/Group 10.png")));
        userLogoDashboard->setScaledContents(true);
        userLogoDashboard->setMargin(10);

        logoLayout->addWidget(userLogoDashboard);


        verticalLayout->addLayout(logoLayout);

        connectIcon = new QPushButton(dashboardPage);
        connectIcon->setObjectName("connectIcon");
        connectIcon->setMinimumSize(QSize(220, 220));
        connectIcon->setMaximumSize(QSize(220, 220));
        connectIcon->setCursor(QCursor(Qt::PointingHandCursor));
        connectIcon->setStyleSheet(QString::fromUtf8("image: url(:/logos/images/connect.png);"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/logos/images/Frame 13.png"), QSize(), QIcon::Normal, QIcon::Off);
        connectIcon->setIcon(icon7);
        connectIcon->setIconSize(QSize(220, 220));
        connectIcon->setCheckable(true);

        verticalLayout->addWidget(connectIcon, 0, Qt::AlignHCenter);

        connectText = new QLabel(dashboardPage);
        connectText->setObjectName("connectText");
        connectText->setMinimumSize(QSize(182, 0));
        connectText->setMaximumSize(QSize(250, 80));
        QFont font1;
        font1.setPointSize(30);
        font1.setBold(true);
        connectText->setFont(font1);
        connectText->setStyleSheet(QString::fromUtf8("text-align: center;"));
        connectText->setWordWrap(false);

        verticalLayout->addWidget(connectText, 0, Qt::AlignHCenter);

        connectionStatsLayout = new QHBoxLayout();
        connectionStatsLayout->setObjectName("connectionStatsLayout");
        uploadFrame = new QFrame(dashboardPage);
        uploadFrame->setObjectName("uploadFrame");
        uploadFrame->setMaximumSize(QSize(16777215, 130));
        uploadFrame->setStyleSheet(QString::fromUtf8("background-color: \"#545759\";\n"
"border-radius: \"12px\";\n"
"text-align: center;"));
        uploadFrame->setFrameShape(QFrame::StyledPanel);
        uploadFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(uploadFrame);
        verticalLayout_2->setObjectName("verticalLayout_2");
        uploadIconAndText = new QPushButton(uploadFrame);
        uploadIconAndText->setObjectName("uploadIconAndText");
        sizePolicy.setHeightForWidth(uploadIconAndText->sizePolicy().hasHeightForWidth());
        uploadIconAndText->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setPointSize(16);
        font2.setWeight(QFont::Black);
        uploadIconAndText->setFont(font2);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/logos/images/upload.png"), QSize(), QIcon::Normal, QIcon::Off);
        uploadIconAndText->setIcon(icon8);
        uploadIconAndText->setIconSize(QSize(30, 30));

        verticalLayout_2->addWidget(uploadIconAndText, 0, Qt::AlignHCenter);

        uploadSpeedvalue = new QLabel(uploadFrame);
        uploadSpeedvalue->setObjectName("uploadSpeedvalue");
        QFont font3;
        font3.setPointSize(14);
        font3.setWeight(QFont::DemiBold);
        uploadSpeedvalue->setFont(font3);
        uploadSpeedvalue->setStyleSheet(QString::fromUtf8("text-align: center;"));

        verticalLayout_2->addWidget(uploadSpeedvalue, 0, Qt::AlignHCenter);


        connectionStatsLayout->addWidget(uploadFrame);

        downloadFrame = new QFrame(dashboardPage);
        downloadFrame->setObjectName("downloadFrame");
        downloadFrame->setMaximumSize(QSize(16777215, 130));
        downloadFrame->setStyleSheet(QString::fromUtf8("background-color: \"#545759\";\n"
"border-radius: \"12px\";\n"
"text-align: center;"));
        downloadFrame->setFrameShape(QFrame::StyledPanel);
        downloadFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(downloadFrame);
        verticalLayout_3->setObjectName("verticalLayout_3");
        downloadIconAndText = new QPushButton(downloadFrame);
        downloadIconAndText->setObjectName("downloadIconAndText");
        sizePolicy.setHeightForWidth(downloadIconAndText->sizePolicy().hasHeightForWidth());
        downloadIconAndText->setSizePolicy(sizePolicy);
        downloadIconAndText->setFont(font2);
        downloadIconAndText->setIcon(icon8);
        downloadIconAndText->setIconSize(QSize(30, 30));

        verticalLayout_3->addWidget(downloadIconAndText, 0, Qt::AlignHCenter);

        downloadSpeedvalue = new QLabel(downloadFrame);
        downloadSpeedvalue->setObjectName("downloadSpeedvalue");
        downloadSpeedvalue->setFont(font3);
        downloadSpeedvalue->setStyleSheet(QString::fromUtf8("text-align: center;"));

        verticalLayout_3->addWidget(downloadSpeedvalue, 0, Qt::AlignHCenter);


        connectionStatsLayout->addWidget(downloadFrame);

        upTimeFrame = new QFrame(dashboardPage);
        upTimeFrame->setObjectName("upTimeFrame");
        upTimeFrame->setMaximumSize(QSize(16777215, 130));
        upTimeFrame->setStyleSheet(QString::fromUtf8("background-color: \"#545759\";\n"
"border-radius: \"12px\";\n"
"text-align: center;"));
        upTimeFrame->setFrameShape(QFrame::StyledPanel);
        upTimeFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(upTimeFrame);
        verticalLayout_4->setObjectName("verticalLayout_4");
        upTimeIconAndText = new QPushButton(upTimeFrame);
        upTimeIconAndText->setObjectName("upTimeIconAndText");
        sizePolicy.setHeightForWidth(upTimeIconAndText->sizePolicy().hasHeightForWidth());
        upTimeIconAndText->setSizePolicy(sizePolicy);
        upTimeIconAndText->setFont(font2);
        upTimeIconAndText->setIcon(icon8);
        upTimeIconAndText->setIconSize(QSize(30, 30));

        verticalLayout_4->addWidget(upTimeIconAndText, 0, Qt::AlignHCenter);

        upTimeValue = new QLabel(upTimeFrame);
        upTimeValue->setObjectName("upTimeValue");
        upTimeValue->setFont(font3);
        upTimeValue->setStyleSheet(QString::fromUtf8("text-align: center;"));

        verticalLayout_4->addWidget(upTimeValue, 0, Qt::AlignHCenter);


        connectionStatsLayout->addWidget(upTimeFrame);

        ipAddressFrame = new QFrame(dashboardPage);
        ipAddressFrame->setObjectName("ipAddressFrame");
        ipAddressFrame->setMaximumSize(QSize(16777215, 130));
        ipAddressFrame->setStyleSheet(QString::fromUtf8("background-color: \"#545759\";\n"
"border-radius: \"12px\";\n"
"text-align: center;"));
        ipAddressFrame->setFrameShape(QFrame::StyledPanel);
        ipAddressFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(ipAddressFrame);
        verticalLayout_5->setObjectName("verticalLayout_5");
        ipAddressIconAndText = new QPushButton(ipAddressFrame);
        ipAddressIconAndText->setObjectName("ipAddressIconAndText");
        sizePolicy.setHeightForWidth(ipAddressIconAndText->sizePolicy().hasHeightForWidth());
        ipAddressIconAndText->setSizePolicy(sizePolicy);
        ipAddressIconAndText->setFont(font2);
        ipAddressIconAndText->setIcon(icon8);
        ipAddressIconAndText->setIconSize(QSize(30, 30));

        verticalLayout_5->addWidget(ipAddressIconAndText, 0, Qt::AlignHCenter);

        ipAddressValue = new QLabel(ipAddressFrame);
        ipAddressValue->setObjectName("ipAddressValue");
        QFont font4;
        font4.setPointSize(15);
        font4.setWeight(QFont::DemiBold);
        ipAddressValue->setFont(font4);
        ipAddressValue->setStyleSheet(QString::fromUtf8("text-align: center;"));

        verticalLayout_5->addWidget(ipAddressValue, 0, Qt::AlignHCenter);


        connectionStatsLayout->addWidget(ipAddressFrame);


        verticalLayout->addLayout(connectionStatsLayout);

        StackedMainView->addWidget(dashboardPage);
        logsPage = new QWidget();
        logsPage->setObjectName("logsPage");
        logsPage->setStyleSheet(QString::fromUtf8("color: #ffffff;\n"
"\n"
"/* Individual pages inside the stacked widget */\n"
"QWidget {\n"
"    background-color: transparent;\n"
"    opacity: 1; /* Initially fully opaque */\n"
"}\n"
"\n"
"/* Hidden state for pages */\n"
"QWidget[hidden=\"true\"] {\n"
"    opacity: 0; /* Hidden pages are fully transparent */\n"
"}\n"
""));
        gridLayout_6 = new QGridLayout(logsPage);
        gridLayout_6->setObjectName("gridLayout_6");
        gridLayout_6->setContentsMargins(9, 9, 9, 19);
        logsBodyHorizontalLayout = new QHBoxLayout();
        logsBodyHorizontalLayout->setSpacing(6);
        logsBodyHorizontalLayout->setObjectName("logsBodyHorizontalLayout");
        LogsHorizontalSpacerLeft = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        logsBodyHorizontalLayout->addItem(LogsHorizontalSpacerLeft);

        logsContainer = new QFrame(logsPage);
        logsContainer->setObjectName("logsContainer");
        logsContainer->setSizeIncrement(QSize(0, 0));
        logsContainer->setStyleSheet(QString::fromUtf8("background-color: rgb(121, 121, 121);\n"
"border-radius: \"20px\";\n"
""));
        logsContainer->setFrameShape(QFrame::StyledPanel);
        logsContainer->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(logsContainer);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setHorizontalSpacing(20);
        gridLayout_5->setVerticalSpacing(15);
        gridLayout_5->setContentsMargins(15, 15, 15, 15);
        scrollArea = new QScrollArea(logsContainer);
        scrollArea->setObjectName("scrollArea");
        scrollArea->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        scrollArea->setStyleSheet(QString::fromUtf8("QScrollBar:vertical {\n"
"    background: transparent;\n"
"    width: 10px;\n"
"    margin: 0px 0px 0px 0px;  \n"
"}\n"
"\n"
"QScrollBar::handle:vertical {\n"
"    background: #D9D9D9;\n"
"    min-height: 20px;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical, QScrollBar::sub-line:vertical {\n"
"    background: none;\n"
"    height: 0px;\n"
"    subcontrol-position: none;\n"
"}\n"
"\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {\n"
"    background: none;\n"
"}\n"
"\n"
"QScrollBar:horizontal {\n"
"    background: transparent;\n"
"    height: 10px;\n"
"    margin: 0px 0px 0px 0px;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal {\n"
"    background: #D9D9D9;\n"
"    min-width: 20px;\n"
"    border-radius: 5px;  /* Optional: Rounded corners */\n"
"}\n"
"\n"
"QScrollBar::add-line:horizontal, QScrollBar::sub-line:horizontal {\n"
"    background: none;\n"
"    width: 0px;\n"
"    subcontrol-position: none;\n"
"}\n"
"\n"
"QScrollBar::add-page:horizontal, QScrollBar::sub-page:h"
                        "orizontal {\n"
"    background: none;\n"
"}\n"
"\n"
"QScrollCorner {\n"
"    background: transparent;\n"
"    border: none;\n"
"}\n"
""));
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 848, 5170));
        gridLayout_7 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_7->setObjectName("gridLayout_7");
        logsBody = new QLabel(scrollAreaWidgetContents);
        logsBody->setObjectName("logsBody");
        logsBody->setFrameShape(QFrame::Box);

        gridLayout_7->addWidget(logsBody, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_5->addWidget(scrollArea, 3, 0, 1, 1);

        logsTitle = new QLabel(logsContainer);
        logsTitle->setObjectName("logsTitle");
        logsTitle->setMaximumSize(QSize(16777215, 50));
        QFont font5;
        font5.setPointSize(20);
        font5.setWeight(QFont::ExtraBold);
        logsTitle->setFont(font5);

        gridLayout_5->addWidget(logsTitle, 0, 0, 1, 1);


        logsBodyHorizontalLayout->addWidget(logsContainer);

        LogsHorizontalSpacerRight = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        logsBodyHorizontalLayout->addItem(LogsHorizontalSpacerRight);


        gridLayout_6->addLayout(logsBodyHorizontalLayout, 2, 0, 1, 1);

        logsLogoLayout = new QHBoxLayout();
        logsLogoLayout->setObjectName("logsLogoLayout");
        logsLogoLayout->setContentsMargins(-1, 8, -1, 0);
        label = new QLabel(logsPage);
        label->setObjectName("label");
        label->setMaximumSize(QSize(90, 90));
        label->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: 2px solid transparent;\n"
"outline: none;\n"
""));
        label->setPixmap(QPixmap(QString::fromUtf8(":/logos/images/qaig_logo.png")));
        label->setScaledContents(true);

        logsLogoLayout->addWidget(label);

        logsLogoLayoutHorizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Minimum);

        logsLogoLayout->addItem(logsLogoLayoutHorizontalSpacer);

        user = new QLabel(logsPage);
        user->setObjectName("user");
        user->setMaximumSize(QSize(80, 80));
        user->setCursor(QCursor(Qt::PointingHandCursor));
        user->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: 2px solid transparent;\n"
"outline: none;\n"
""));
        user->setPixmap(QPixmap(QString::fromUtf8(":/logos/images/Group 10.png")));
        user->setScaledContents(true);
        user->setMargin(10);

        logsLogoLayout->addWidget(user);


        gridLayout_6->addLayout(logsLogoLayout, 1, 0, 1, 1);

        StackedMainView->addWidget(logsPage);
        settingsPage = new QWidget();
        settingsPage->setObjectName("settingsPage");
        settingsPage->setStyleSheet(QString::fromUtf8("\n"
"/* Individual pages inside the stacked widget */\n"
"QWidget {\n"
"    background-color: transparent;\n"
"    opacity: 1; /* Initially fully opaque */\n"
"}\n"
"\n"
"/* Hidden state for pages */\n"
"QWidget[hidden=\"true\"] {\n"
"    opacity: 0; /* Hidden pages are fully transparent */\n"
"}\n"
""));
        gridLayout_8 = new QGridLayout(settingsPage);
        gridLayout_8->setSpacing(0);
        gridLayout_8->setObjectName("gridLayout_8");
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        selectSettingsFrame = new QFrame(settingsPage);
        selectSettingsFrame->setObjectName("selectSettingsFrame");
        selectSettingsFrame->setMinimumSize(QSize(200, 0));
        selectSettingsFrame->setMaximumSize(QSize(16777215, 16777215));
        selectSettingsFrame->setStyleSheet(QString::fromUtf8("background-color: rgba(23, 28, 31, 0.56);\n"
"color: rgb(255, 255, 255);\n"
"text-align: left;\n"
""));
        selectSettingsFrame->setFrameShape(QFrame::StyledPanel);
        selectSettingsFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_9 = new QVBoxLayout(selectSettingsFrame);
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(0, 10, 0, 0);
        settingsTitle = new QLabel(selectSettingsFrame);
        settingsTitle->setObjectName("settingsTitle");
        QFont font6;
        font6.setPointSize(14);
        font6.setWeight(QFont::ExtraBold);
        settingsTitle->setFont(font6);
        settingsTitle->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"margin: \"10px\";"));

        verticalLayout_9->addWidget(settingsTitle, 0, Qt::AlignHCenter);

        generalSettingsBtn = new QPushButton(selectSettingsFrame);
        generalSettingsBtn->setObjectName("generalSettingsBtn");
        generalSettingsBtn->setMinimumSize(QSize(0, 40));
        QFont font7;
        font7.setPointSize(13);
        font7.setWeight(QFont::DemiBold);
        generalSettingsBtn->setFont(font7);
        generalSettingsBtn->setCursor(QCursor(Qt::PointingHandCursor));
        generalSettingsBtn->setStyleSheet(QString::fromUtf8("background-color: rgba(45, 50, 51, 1);\n"
"padding-left: \"8px\";\n"
""));
        generalSettingsBtn->setCheckable(true);

        verticalLayout_9->addWidget(generalSettingsBtn);

        proxySettingsBtn = new QPushButton(selectSettingsFrame);
        proxySettingsBtn->setObjectName("proxySettingsBtn");
        proxySettingsBtn->setMinimumSize(QSize(0, 40));
        proxySettingsBtn->setFont(font7);
        proxySettingsBtn->setCursor(QCursor(Qt::PointingHandCursor));
        proxySettingsBtn->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"padding-left: \"8px\";"));
        proxySettingsBtn->setCheckable(true);

        verticalLayout_9->addWidget(proxySettingsBtn);

        advancedSettingsBtn = new QPushButton(selectSettingsFrame);
        advancedSettingsBtn->setObjectName("advancedSettingsBtn");
        advancedSettingsBtn->setMinimumSize(QSize(0, 40));
        advancedSettingsBtn->setFont(font7);
        advancedSettingsBtn->setCursor(QCursor(Qt::PointingHandCursor));
        advancedSettingsBtn->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"padding-left: \"8px\";"));
        advancedSettingsBtn->setCheckable(true);

        verticalLayout_9->addWidget(advancedSettingsBtn);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_3);


        gridLayout_8->addWidget(selectSettingsFrame, 0, 1, 1, 1);

        stackedSettingsView = new QStackedWidget(settingsPage);
        stackedSettingsView->setObjectName("stackedSettingsView");
        QFont font8;
        font8.setFamilies({QString::fromUtf8("Sans Serif")});
        font8.setPointSize(15);
        stackedSettingsView->setFont(font8);
        stackedSettingsView->setCursor(QCursor(Qt::PointingHandCursor));
        stackedSettingsView->setStyleSheet(QString::fromUtf8("background: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0 #404040, stop:1 #1F363D);\n"
"color: rgb(255, 255, 255);\n"
"\n"
"\n"
"/* Individual pages inside the stacked widget */\n"
"QWidget {\n"
"    background-color: transparent;\n"
"    opacity: 1; /* Initially fully opaque */\n"
"}\n"
"\n"
"/* Hidden state for pages */\n"
"QWidget[hidden=\"true\"] {\n"
"    opacity: 0; /* Hidden pages are fully transparent */\n"
"}\n"
""));
        generalSettingsPage = new QWidget();
        generalSettingsPage->setObjectName("generalSettingsPage");
        generalSettingsPage->setStyleSheet(QString::fromUtf8("\n"
"/* Individual pages inside the stacked widget */\n"
"QWidget {\n"
"    background-color: transparent;\n"
"    opacity: 1; /* Initially fully opaque */\n"
"}\n"
"\n"
"/* Hidden state for pages */\n"
"QWidget[hidden=\"true\"] {\n"
"    opacity: 0; /* Hidden pages are fully transparent */\n"
"}\n"
""));
        userInterfaceTitle = new QLabel(generalSettingsPage);
        userInterfaceTitle->setObjectName("userInterfaceTitle");
        userInterfaceTitle->setGeometry(QRect(15, 15, 167, 33));
        QFont font9;
        font9.setFamilies({QString::fromUtf8("Sans Serif")});
        font9.setPointSize(16);
        font9.setBold(true);
        userInterfaceTitle->setFont(font9);
        userInterfaceTitle->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        languageLabel = new QLabel(generalSettingsPage);
        languageLabel->setObjectName("languageLabel");
        languageLabel->setGeometry(QRect(15, 66, 123, 25));
        QFont font10;
        font10.setFamilies({QString::fromUtf8("Sans Serif")});
        languageLabel->setFont(font10);
        languageLabel->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"margin-left: \"40px\";"));
        selectLanguageInput = new QComboBox(generalSettingsPage);
        selectLanguageInput->addItem(QString());
        selectLanguageInput->addItem(QString());
        selectLanguageInput->addItem(QString());
        selectLanguageInput->addItem(QString());
        selectLanguageInput->addItem(QString());
        selectLanguageInput->setObjectName("selectLanguageInput");
        selectLanguageInput->setGeometry(QRect(261, 66, 149, 27));
        sizePolicy.setHeightForWidth(selectLanguageInput->sizePolicy().hasHeightForWidth());
        selectLanguageInput->setSizePolicy(sizePolicy);
        selectLanguageInput->setMinimumSize(QSize(131, 0));
        selectLanguageInput->setMaximumSize(QSize(16777215, 30));
        selectLanguageInput->setFont(font10);
        selectLanguageInput->setContextMenuPolicy(Qt::NoContextMenu);
        selectLanguageInput->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    border: 1px solid gray;\n"
"    border-radius: 3px;\n"
"    padding: 1px 18px 1px 3px;\n"
"    min-width: 6em;\n"
"    background-color: rgba(180,180,180,200); \n"
"    color: white; /* Text color */\n"
"    \n"
"	selection-background-color: rgba(79, 158, 164,100);\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 20px;\n"
"    border-left: none; /* No left border for the drop-down arrow */\n"
"   background-color: rgba(180,180,180,200); \n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    border: 1px solid gray;\n"
"    background-color: rgba(180,180,180,200); \n"
"    color: white; /* Text color */\n"
"    selection-background-color: rgba(79, 158, 164,100);\n"
"}\n"
""));
        selectLanguageInput->setLocale(QLocale(QLocale::French, QLocale::France));
        selectLanguageInput->setEditable(false);
        selectLanguageInput->setFrame(true);
        line = new QFrame(generalSettingsPage);
        line->setObjectName("line");
        line->setGeometry(QRect(15, 117, 427, 3));
        QFont font11;
        font11.setStyleStrategy(QFont::PreferDefault);
        line->setFont(font11);
        line->setAutoFillBackground(false);
        line->setStyleSheet(QString::fromUtf8("background-color: \"#474748\";\n"
"\n"
""));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        userInterfaceTitle_3 = new QLabel(generalSettingsPage);
        userInterfaceTitle_3->setObjectName("userInterfaceTitle_3");
        userInterfaceTitle_3->setGeometry(QRect(15, 261, 141, 43));
        userInterfaceTitle_3->setFont(font9);
        userInterfaceTitle_3->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"margin-bottom: \"10px\";"));
        label_8 = new QLabel(generalSettingsPage);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(15, 420, 231, 37));
        label_8->setFont(font3);
        label_8->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"margin-left: \"40px\";\n"
"margin-top: \"10px\";"));
        radioButton = new QRadioButton(generalSettingsPage);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(85, 465, 173, 23));
        radioButton->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"    background-color: transparent;\n"
"    color: #ffffff;\n"
"    padding: 5px;\n"
"    border: none;\n"
"}\n"
"\n"
"QRadioButton::indicator {\n"
"    width: 8px;\n"
"    height: 8px;\n"
"    border-radius: 8px;\n"
"    border: 2px solid #ffffff;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked {\n"
"    background-color: #ffffff;\n"
"}\n"
""));
        radioButton_3 = new QRadioButton(generalSettingsPage);
        radioButton_3->setObjectName("radioButton_3");
        radioButton_3->setGeometry(QRect(85, 490, 136, 23));
        radioButton_3->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"    background-color: transparent;\n"
"    color: #ffffff;\n"
"    padding: 5px;\n"
"    border: none;\n"
"}\n"
"\n"
"QRadioButton::indicator {\n"
"    width: 8px;\n"
"    height: 8px;\n"
"    border-radius: 8px;\n"
"    border: 2px solid #ffffff;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked {\n"
"    background-color: #ffffff;\n"
"}\n"
""));
        radioButton_2 = new QRadioButton(generalSettingsPage);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setGeometry(QRect(85, 515, 246, 23));
        radioButton_2->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"    background-color: transparent;\n"
"    color: #ffffff;\n"
"    padding: 5px;\n"
"    border: none;\n"
"}\n"
"\n"
"QRadioButton::indicator {\n"
"    width: 8px;\n"
"    height: 8px;\n"
"    border-radius: 8px;\n"
"    border: 2px solid #ffffff;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked {\n"
"    background-color: #ffffff;\n"
"}\n"
""));
        userInterfaceTitle_2 = new QLabel(generalSettingsPage);
        userInterfaceTitle_2->setObjectName("userInterfaceTitle_2");
        userInterfaceTitle_2->setGeometry(QRect(15, 126, 96, 43));
        userInterfaceTitle_2->setFont(font9);
        userInterfaceTitle_2->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"margin-top: \"10px\";"));
        checkBox_2 = new QCheckBox(generalSettingsPage);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setGeometry(QRect(15, 190, 291, 23));
        checkBox_2->setAutoFillBackground(false);
        checkBox_2->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"    background-color: transparent; \n"
"    color: white;\n"
"	margin-left: \"40px\";\n"
"   \n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    border: 1px solid white; \n"
"border-radius: 3px;\n"
"    width: 15px; \n"
"    height: 15px;\n"
"    background-color: transparent;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"    image: url(:/logos/images/new.png); \n"
"    background-color: transparent; \n"
"    border: 1px solid white;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked {\n"
"    background-color: transparent;\n"
"    border: 1px solid white;\n"
"}\n"
""));
        checkBox_2->setIconSize(QSize(5, 5));
        checkBox_2->setChecked(false);
        checkBox_2->setTristate(false);
        checkBox_3 = new QCheckBox(generalSettingsPage);
        checkBox_3->setObjectName("checkBox_3");
        checkBox_3->setGeometry(QRect(15, 310, 203, 23));
        checkBox_3->setAutoFillBackground(false);
        checkBox_3->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"    background-color: transparent; \n"
"    color: white;\n"
"	margin-left: \"40px\";\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    border: 1px solid white; \n"
"border-radius: 3px;\n"
"    width: 15px; \n"
"    height: 15px;\n"
"    background-color: transparent;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"    image: url(:/logos/images/new.png); \n"
"    background-color: transparent; \n"
"    border: 1px solid white;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked {\n"
"    background-color: transparent;\n"
"    border: 1px solid white;\n"
"}\n"
""));
        checkBox_3->setIconSize(QSize(5, 5));
        checkBox_3->setChecked(false);
        checkBox_3->setTristate(false);
        checkBox_4 = new QCheckBox(generalSettingsPage);
        checkBox_4->setObjectName("checkBox_4");
        checkBox_4->setGeometry(QRect(15, 345, 231, 23));
        checkBox_4->setAutoFillBackground(false);
        checkBox_4->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"    background-color: transparent; \n"
"    color: white;\n"
"	margin-left: \"40px\";\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    border: 1px solid white; \n"
"    width: 15px; \n"
"border-radius: 3px;\n"
"    height: 15px;\n"
"    background-color: transparent;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"    image: url(:/logos/images/new.png); \n"
"    background-color: transparent; \n"
"    border: 1px solid white;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked {\n"
"    background-color: transparent;\n"
"    border: 1px solid white;\n"
"}\n"
""));
        checkBox_4->setIconSize(QSize(5, 5));
        checkBox_4->setChecked(false);
        checkBox_4->setTristate(false);
        line_2 = new QFrame(generalSettingsPage);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(15, 240, 427, 3));
        line_2->setStyleSheet(QString::fromUtf8("background-color: \"#474748\";"));
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        checkBox_5 = new QCheckBox(generalSettingsPage);
        checkBox_5->setObjectName("checkBox_5");
        checkBox_5->setGeometry(QRect(15, 380, 231, 23));
        checkBox_5->setAutoFillBackground(false);
        checkBox_5->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"    background-color: transparent; \n"
"    color: white;\n"
"	margin-left: \"40px\";\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    border: 1px solid white; \n"
"    width: 15px; \n"
"border-radius: 3px;\n"
"    height: 15px;\n"
"    background-color: transparent;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"    image: url(:/logos/images/new.png); \n"
"    background-color: transparent; \n"
"    border: 1px solid white;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked {\n"
"    background-color: transparent;\n"
"    border: 1px solid white;\n"
"}\n"
""));
        checkBox_5->setIconSize(QSize(5, 5));
        checkBox_5->setChecked(false);
        checkBox_5->setTristate(false);
        stackedSettingsView->addWidget(generalSettingsPage);
        proxySettingsPage = new QWidget();
        proxySettingsPage->setObjectName("proxySettingsPage");
        proxySettingsPage->setStyleSheet(QString::fromUtf8("\n"
"/* Individual pages inside the stacked widget */\n"
"QWidget {\n"
"    background-color: transparent;\n"
"    opacity: 1; /* Initially fully opaque */\n"
"}\n"
"\n"
"/* Hidden state for pages */\n"
"QWidget[hidden=\"true\"] {\n"
"    opacity: 0; /* Hidden pages are fully transparent */\n"
"}\n"
""));
        gridLayout_12 = new QGridLayout(proxySettingsPage);
        gridLayout_12->setObjectName("gridLayout_12");
        frame_6 = new QFrame(proxySettingsPage);
        frame_6->setObjectName("frame_6");
        frame_6->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"color: rgb(255, 255, 255);"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        option1 = new QRadioButton(frame_6);
        option1->setObjectName("option1");
        option1->setGeometry(QRect(11, 20, 281, 29));
        option1->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"    background-color: transparent;\n"
"    color: #ffffff;\n"
"    padding: 5px;\n"
"    border: none;\n"
"}\n"
"\n"
"QRadioButton::indicator {\n"
"    width: 8px;\n"
"    height: 8px;\n"
"    border-radius: 8px;\n"
"    border: 2px solid #ffffff;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked {\n"
"    background-color: #ffffff;\n"
"}\n"
""));
        option2 = new QRadioButton(frame_6);
        option2->setObjectName("option2");
        option2->setGeometry(QRect(11, 50, 251, 29));
        option2->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"    background-color: transparent;\n"
"    color: #ffffff;\n"
"    padding: 5px;\n"
"    border: none;\n"
"}\n"
"\n"
"QRadioButton::indicator {\n"
"    width: 8px;\n"
"    height: 8px;\n"
"    border-radius: 8px;\n"
"    border: 2px solid #ffffff;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked {\n"
"    background-color: #ffffff;\n"
"}\n"
""));
        man = new QRadioButton(frame_6);
        man->setObjectName("man");
        man->setGeometry(QRect(11, 80, 231, 29));
        man->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"    background-color: transparent;\n"
"    color: #ffffff;\n"
"    padding: 5px;\n"
"    border: none;\n"
"}\n"
"\n"
"QRadioButton::indicator {\n"
"    width: 8px;\n"
"    height: 8px;\n"
"    border-radius: 8px;\n"
"    border: 2px solid #ffffff;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked {\n"
"    background-color: #ffffff;\n"
"}\n"
""));
        op1 = new QRadioButton(frame_6);
        op1->setObjectName("op1");
        op1->setEnabled(true);
        op1->setGeometry(QRect(30, 150, 121, 31));
        op1->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"    background-color: transparent;\n"
"    color: #ffffff;\n"
"    padding: 5px;\n"
"    border: none;\n"
"}\n"
"\n"
"QRadioButton::indicator {\n"
"    width: 8px;\n"
"    height: 8px;\n"
"    border-radius: 8px;\n"
"    border: 2px solid #ffffff;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked {\n"
"    background-color: #ffffff;\n"
"}\n"
""));
        op2 = new QRadioButton(frame_6);
        op2->setObjectName("op2");
        op2->setEnabled(true);
        op2->setGeometry(QRect(200, 150, 131, 31));
        op2->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"    background-color: transparent;\n"
"    color: #ffffff;\n"
"    padding: 5px;\n"
"    border: none;\n"
"}\n"
"\n"
"QRadioButton::indicator {\n"
"    width: 8px;\n"
"    height: 8px;\n"
"    border-radius: 8px;\n"
"    border: 2px solid #ffffff;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked {\n"
"    background-color: #ffffff;\n"
"}\n"
""));
        add = new QLabel(frame_6);
        add->setObjectName("add");
        add->setEnabled(true);
        add->setGeometry(QRect(30, 190, 66, 18));
        add_inp = new QLineEdit(frame_6);
        add_inp->setObjectName("add_inp");
        add_inp->setEnabled(true);
        add_inp->setGeometry(QRect(100, 190, 151, 20));
        add_inp->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,50);"));
        port = new QLabel(frame_6);
        port->setObjectName("port");
        port->setEnabled(true);
        port->setGeometry(QRect(270, 190, 41, 18));
        port_inp = new QLineEdit(frame_6);
        port_inp->setObjectName("port_inp");
        port_inp->setEnabled(true);
        port_inp->setGeometry(QRect(320, 190, 81, 20));
        port_inp->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,50);"));
        groupBox = new QGroupBox(frame_6);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 130, 441, 131));
        groupBox->setStyleSheet(QString::fromUtf8("border: 3px solid \"#474748\""));
        groupBox->raise();
        option1->raise();
        option2->raise();
        man->raise();
        op1->raise();
        op2->raise();
        add->raise();
        add_inp->raise();
        port->raise();
        port_inp->raise();

        gridLayout_12->addWidget(frame_6, 0, 0, 1, 1);

        stackedSettingsView->addWidget(proxySettingsPage);
        advancedSettingsPage = new QWidget();
        advancedSettingsPage->setObjectName("advancedSettingsPage");
        advancedSettingsPage->setStyleSheet(QString::fromUtf8("\n"
"/* Individual pages inside the stacked widget */\n"
"QWidget {\n"
"    background-color: transparent;\n"
"    opacity: 1; /* Initially fully opaque */\n"
"}\n"
"\n"
"/* Hidden state for pages */\n"
"QWidget[hidden=\"true\"] {\n"
"    opacity: 0; /* Hidden pages are fully transparent */\n"
"}\n"
""));
        path = new QLineEdit(advancedSettingsPage);
        path->setObjectName("path");
        path->setGeometry(QRect(102, 50, 300, 20));
        path->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,50);"));
        browse = new QPushButton(advancedSettingsPage);
        browse->setObjectName("browse");
        browse->setGeometry(QRect(420, 50, 92, 20));
        browse->setStyleSheet(QString::fromUtf8("background-color: rgb(121, 121, 121);"));
        path_2 = new QLineEdit(advancedSettingsPage);
        path_2->setObjectName("path_2");
        path_2->setGeometry(QRect(102, 170, 300, 20));
        path_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,50);"));
        browse_2 = new QPushButton(advancedSettingsPage);
        browse_2->setObjectName("browse_2");
        browse_2->setGeometry(QRect(420, 170, 92, 20));
        browse_2->setStyleSheet(QString::fromUtf8("background-color: rgb(121, 121, 121);"));
        path_3 = new QLineEdit(advancedSettingsPage);
        path_3->setObjectName("path_3");
        path_3->setGeometry(QRect(102, 80, 50, 20));
        path_3->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,50);"));
        path_4 = new QLineEdit(advancedSettingsPage);
        path_4->setObjectName("path_4");
        path_4->setGeometry(QRect(220, 269, 50, 20));
        path_4->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,50);"));
        path_5 = new QLineEdit(advancedSettingsPage);
        path_5->setObjectName("path_5");
        path_5->setGeometry(QRect(220, 297, 50, 20));
        path_5->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,50);"));
        path_6 = new QLineEdit(advancedSettingsPage);
        path_6->setObjectName("path_6");
        path_6->setGeometry(QRect(220, 325, 50, 20));
        path_6->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,50);"));
        line_3 = new QFrame(advancedSettingsPage);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(14, 120, 527, 3));
        line_3->setFont(font11);
        line_3->setAutoFillBackground(false);
        line_3->setStyleSheet(QString::fromUtf8("background-color: \"#474748\";\n"
"\n"
""));
        line_3->setFrameShape(QFrame::Shape::HLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);
        line_4 = new QFrame(advancedSettingsPage);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(14, 220, 527, 3));
        line_4->setFont(font11);
        line_4->setAutoFillBackground(false);
        line_4->setStyleSheet(QString::fromUtf8("background-color: \"#474748\";\n"
"\n"
""));
        line_4->setFrameShape(QFrame::Shape::HLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);
        label_11 = new QLabel(advancedSettingsPage);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(16, 16, 231, 31));
        QFont font12;
        font12.setPointSize(16);
        font12.setBold(true);
        label_11->setFont(font12);
        label_11->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"color: rgb(255, 255, 255);"));
        label_14 = new QLabel(advancedSettingsPage);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(16, 130, 121, 31));
        label_14->setFont(font12);
        label_14->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"color: rgb(255, 255, 255);"));
        label_15 = new QLabel(advancedSettingsPage);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(16, 170, 56, 22));
        label_15->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"color: rgb(255, 255, 255);"));
        label_16 = new QLabel(advancedSettingsPage);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(16, 230, 201, 31));
        label_16->setFont(font12);
        label_16->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"color: rgb(255, 255, 255);"));
        label_19 = new QLabel(advancedSettingsPage);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(16, 325, 185, 22));
        label_19->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"color: rgb(255, 255, 255);"));
        label_13 = new QLabel(advancedSettingsPage);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(18, 80, 79, 22));
        label_13->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"color: rgb(255, 255, 255);"));
        label_12 = new QLabel(advancedSettingsPage);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(18, 50, 56, 22));
        label_12->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"color: rgb(255, 255, 255);"));
        label_18 = new QLabel(advancedSettingsPage);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(16, 297, 167, 22));
        label_18->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"color: rgb(255, 255, 255);"));
        label_17 = new QLabel(advancedSettingsPage);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(16, 269, 192, 22));
        label_17->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"color: rgb(255, 255, 255);"));
        stackedSettingsView->addWidget(advancedSettingsPage);

        gridLayout_8->addWidget(stackedSettingsView, 0, 2, 1, 1);

        StackedMainView->addWidget(settingsPage);
        infoPage = new QWidget();
        infoPage->setObjectName("infoPage");
        infoPage->setStyleSheet(QString::fromUtf8("\n"
"/* Individual pages inside the stacked widget */\n"
"QWidget {\n"
"    background-color: transparent;\n"
"    opacity: 1; /* Initially fully opaque */\n"
"}\n"
"\n"
"/* Hidden state for pages */\n"
"QWidget[hidden=\"true\"] {\n"
"    opacity: 0; /* Hidden pages are fully transparent */\n"
"}\n"
""));
        gridLayout_10 = new QGridLayout(infoPage);
        gridLayout_10->setObjectName("gridLayout_10");
        gridLayout_10->setContentsMargins(-1, -1, -1, 20);
        userLogoInfo = new QLabel(infoPage);
        userLogoInfo->setObjectName("userLogoInfo");
        userLogoInfo->setMaximumSize(QSize(100, 100));
        userLogoInfo->setCursor(QCursor(Qt::PointingHandCursor));
        userLogoInfo->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: 2px solid transparent;\n"
"outline: none;\n"
""));
        userLogoInfo->setPixmap(QPixmap(QString::fromUtf8(":/logos/images/Group 10.png")));
        userLogoInfo->setScaledContents(true);
        userLogoInfo->setMargin(10);

        gridLayout_10->addWidget(userLogoInfo, 0, 0, 1, 1, Qt::AlignRight);

        infoContainerLayout = new QHBoxLayout();
        infoContainerLayout->setObjectName("infoContainerLayout");
        InfohorizontalSpacerLeft = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        infoContainerLayout->addItem(InfohorizontalSpacerLeft);

        infoContainer = new QFrame(infoPage);
        infoContainer->setObjectName("infoContainer");
        infoContainer->setSizeIncrement(QSize(0, 0));
        infoContainer->setStyleSheet(QString::fromUtf8("background-color: rgb(121, 121, 121);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: \"20px\";\n"
""));
        infoContainer->setFrameShape(QFrame::StyledPanel);
        infoContainer->setFrameShadow(QFrame::Raised);
        gridLayout_9 = new QGridLayout(infoContainer);
        gridLayout_9->setSpacing(15);
        gridLayout_9->setObjectName("gridLayout_9");
        gridLayout_9->setContentsMargins(15, 15, 15, 15);
        infoDescription = new QLabel(infoContainer);
        infoDescription->setObjectName("infoDescription");
        QFont font13;
        font13.setFamilies({QString::fromUtf8("Sans Serif")});
        font13.setWeight(QFont::Medium);
        infoDescription->setFont(font13);
        infoDescription->setWordWrap(true);

        gridLayout_9->addWidget(infoDescription, 2, 0, 1, 1);

        infoTitle = new QLabel(infoContainer);
        infoTitle->setObjectName("infoTitle");
        infoTitle->setMaximumSize(QSize(16777215, 50));
        QFont font14;
        font14.setFamilies({QString::fromUtf8("Sans Serif")});
        font14.setPointSize(15);
        font14.setWeight(QFont::ExtraBold);
        infoTitle->setFont(font14);

        gridLayout_9->addWidget(infoTitle, 0, 0, 1, 1);

        quantumLogoInfo = new QLabel(infoContainer);
        quantumLogoInfo->setObjectName("quantumLogoInfo");
        quantumLogoInfo->setMaximumSize(QSize(120, 120));
        quantumLogoInfo->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: 2px solid transparent;\n"
"outline: none;\n"
""));
        quantumLogoInfo->setPixmap(QPixmap(QString::fromUtf8(":/logos/images/qaig_logo.png")));
        quantumLogoInfo->setScaledContents(true);

        gridLayout_9->addWidget(quantumLogoInfo, 3, 0, 1, 1, Qt::AlignRight);


        infoContainerLayout->addWidget(infoContainer);

        InfohorizontalSpacerRight = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        infoContainerLayout->addItem(InfohorizontalSpacerRight);


        gridLayout_10->addLayout(infoContainerLayout, 2, 0, 2, 1);

        StackedMainView->addWidget(infoPage);

        gridLayout->addWidget(StackedMainView, 0, 0, 1, 1);


        gridLayout_4->addWidget(main, 0, 2, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        StackedMainView->setCurrentIndex(2);
        stackedSettingsView->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        compressedDashboardBtn->setText(QString());
        compressedLogsBtn->setText(QString());
        compressedSettingsBtn->setText(QString());
        compressedInfoBtn->setText(QString());
        compressedNavBtn->setText(QString());
        compressedLogsBtn_2->setText(QString());
        compressedLogsBtn_3->setText(QString());
        expandedNavBtn->setText(QString());
        expandedInfoBtn->setText(QCoreApplication::translate("MainWindow", "Info", nullptr));
        expandedLogsBtn->setText(QCoreApplication::translate("MainWindow", "Logs", nullptr));
        expandedDashboardBtn->setText(QCoreApplication::translate("MainWindow", "Dashboard", nullptr));
        expandedSettingsBtn->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        quantumLogoDashboard->setText(QString());
        userLogoDashboard->setText(QString());
        connectIcon->setText(QString());
        connectText->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        uploadIconAndText->setText(QCoreApplication::translate("MainWindow", "Upload", nullptr));
        uploadSpeedvalue->setText(QCoreApplication::translate("MainWindow", "0.00 mb/s", nullptr));
        downloadIconAndText->setText(QCoreApplication::translate("MainWindow", "Download", nullptr));
        downloadSpeedvalue->setText(QCoreApplication::translate("MainWindow", "0.00 mb/s", nullptr));
        upTimeIconAndText->setText(QCoreApplication::translate("MainWindow", "Up Time", nullptr));
        upTimeValue->setText(QCoreApplication::translate("MainWindow", "00:00:00", nullptr));
        ipAddressIconAndText->setText(QCoreApplication::translate("MainWindow", "IP Address", nullptr));
        ipAddressValue->setText(QCoreApplication::translate("MainWindow", "0.0.0.0", nullptr));
        logsBody->setText(QCoreApplication::translate("MainWindow", "Wed Jun 12 14:36:43 2024 us=610539 TUN READ [75]\n"
"Wed Jun 12 14:36:43 2024 us=610539 UDP WRITE [99] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=98\n"
"Wed Jun 12 14:36:43 2024 us=611813 TUN READ [75]\n"
"Wed Jun 12 14:36:43 2024 us=611813 UDP WRITE [99] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=98\n"
"Wed Jun 12 14:36:43 2024 us=630964 TUN READ [52]\n"
"Wed Jun 12 14:36:43 2024 us=630964 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:43 2024 us=630964 TUN READ [52]\n"
"Wed Jun 12 14:36:43 2024 us=630964 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:43 2024 us=630964 TUN READ [52]\n"
"Wed Jun 12 14:36:43 2024 us=630964 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:43 2024 us=630964 TUN READ [52]\n"
"Wed Jun 12 14:36:43 2024 us=630964 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:43 202"
                        "4 us=630964 TUN READ [52]\n"
"Wed Jun 12 14:36:43 2024 us=630964 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:43 2024 us=630964 TUN READ [52]\n"
"Wed Jun 12 14:36:43 2024 us=630964 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:43 2024 us=630964 TUN READ [52]\n"
"Wed Jun 12 14:36:43 2024 us=630964 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:43 2024 us=740952 TUN READ [48]\n"
"Wed Jun 12 14:36:43 2024 us=740952 UDP WRITE [72] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=71\n"
"Wed Jun 12 14:36:43 2024 us=740952 TUN READ [48]\n"
"Wed Jun 12 14:36:43 2024 us=740952 UDP WRITE [72] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=71\n"
"Wed Jun 12 14:36:43 2024 us=742349 TUN READ [48]\n"
"Wed Jun 12 14:36:43 2024 us=742349 UDP WRITE [72] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=71\n"
"Wed Jun 12 14:36:43 2024 us=742349 TUN READ [4"
                        "8]\n"
"Wed Jun 12 14:36:43 2024 us=742349 UDP WRITE [72] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=71\n"
"Wed Jun 12 14:36:43 2024 us=742349 TUN READ [48]\n"
"Wed Jun 12 14:36:43 2024 us=742349 UDP WRITE [72] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=71\n"
"Wed Jun 12 14:36:43 2024 us=742349 TUN READ [48]\n"
"Wed Jun 12 14:36:43 2024 us=742349 UDP WRITE [72] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=71\n"
"Wed Jun 12 14:36:43 2024 us=742349 TUN READ [48]\n"
"Wed Jun 12 14:36:43 2024 us=742349 UDP WRITE [72] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=71\n"
"Wed Jun 12 14:36:43 2024 us=742349 TUN READ [48]\n"
"Wed Jun 12 14:36:43 2024 us=742349 UDP WRITE [72] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=71\n"
"Wed Jun 12 14:36:43 2024 us=742349 TUN READ [48]\n"
"Wed Jun 12 14:36:43 2024 us=742349 UDP WRITE [72] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=71\n"
"Wed Jun 12 14:36:43 2024 us=742349 TUN READ [48]\n"
"Wed Jun 12 14:36"
                        ":43 2024 us=742349 UDP WRITE [72] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=71\n"
"Wed Jun 12 14:36:43 2024 us=742349 TUN READ [48]\n"
"Wed Jun 12 14:36:43 2024 us=742349 UDP WRITE [72] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=71\n"
"Wed Jun 12 14:36:43 2024 us=742349 TUN READ [48]\n"
"Wed Jun 12 14:36:43 2024 us=742349 UDP WRITE [72] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=71\n"
"Wed Jun 12 14:36:43 2024 us=883518 TUN READ [52]\n"
"Wed Jun 12 14:36:43 2024 us=883518 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:44 2024 us=26992 TUN READ [75]\n"
"Wed Jun 12 14:36:44 2024 us=26992 UDP WRITE [99] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=98\n"
"Wed Jun 12 14:36:44 2024 us=26992 TUN READ [75]\n"
"Wed Jun 12 14:36:44 2024 us=26992 UDP WRITE [99] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=98\n"
"Wed Jun 12 14:36:44 2024 us=390975 TUN READ [52]\n"
"Wed Jun 12 14:36:44 2024 us=390975 UDP WRIT"
                        "E [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:44 2024 us=415439 TUN READ [52]\n"
"Wed Jun 12 14:36:44 2024 us=415439 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:44 2024 us=534043 TUN READ [52]\n"
"Wed Jun 12 14:36:44 2024 us=534043 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:44 2024 us=598663 TUN READ [81]\n"
"Wed Jun 12 14:36:44 2024 us=598663 UDP WRITE [105] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=104\n"
"Wed Jun 12 14:36:44 2024 us=601234 TUN READ [81]\n"
"Wed Jun 12 14:36:44 2024 us=601234 UDP WRITE [105] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=104\n"
"Wed Jun 12 14:36:44 2024 us=613484 TUN READ [81]\n"
"Wed Jun 12 14:36:44 2024 us=613484 UDP WRITE [105] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=104\n"
"Wed Jun 12 14:36:44 2024 us=613484 TUN READ [81]\n"
"Wed Jun 12 14:36:44 2024 us=613484 UDP WRITE [105] to [AF_IN"
                        "ET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=104\n"
"Wed Jun 12 14:36:44 2024 us=756015 TUN READ [52]\n"
"Wed Jun 12 14:36:44 2024 us=756015 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:45 2024 us=247694 TUN READ [52]\n"
"Wed Jun 12 14:36:45 2024 us=247694 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:45 2024 us=421590 TUN READ [52]\n"
"Wed Jun 12 14:36:45 2024 us=421590 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:45 2024 us=579183 TUN READ [145]\n"
"Wed Jun 12 14:36:45 2024 us=579183 UDP WRITE [169] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=168\n"
"Wed Jun 12 14:36:45 2024 us=579183 TUN READ [145]\n"
"Wed Jun 12 14:36:45 2024 us=580406 UDP WRITE [169] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=168\n"
"Wed Jun 12 14:36:45 2024 us=769153 TUN READ [48]\n"
"Wed Jun 12 14:36:45 2024 us=769153 UDP WRITE [72] to [AF_INET]100.25.183.23"
                        ":1194: P_DATA_V2 kid=0 DATA len=71\n"
"Wed Jun 12 14:36:45 2024 us=770076 TUN READ [52]\n"
"Wed Jun 12 14:36:45 2024 us=770076 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:45 2024 us=770076 TUN READ [48]\n"
"Wed Jun 12 14:36:45 2024 us=770076 UDP WRITE [72] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=71\n"
"Wed Jun 12 14:36:45 2024 us=770076 TUN READ [48]\n"
"Wed Jun 12 14:36:45 2024 us=770076 UDP WRITE [72] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=71\n"
"Wed Jun 12 14:36:45 2024 us=770076 TUN READ [48]\n"
"Wed Jun 12 14:36:45 2024 us=770076 UDP WRITE [72] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=71\n"
"Wed Jun 12 14:36:45 2024 us=770807 TUN READ [48]\n"
"Wed Jun 12 14:36:45 2024 us=770807 UDP WRITE [72] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=71\n"
"Wed Jun 12 14:36:45 2024 us=770807 TUN READ [48]\n"
"Wed Jun 12 14:36:45 2024 us=770807 UDP WRITE [72] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 "
                        "DATA len=71\n"
"Wed Jun 12 14:36:45 2024 us=896686 TUN READ [52]\n"
"Wed Jun 12 14:36:45 2024 us=896686 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:45 2024 us=896686 TUN READ [52]\n"
"Wed Jun 12 14:36:45 2024 us=896686 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:46 2024 us=322117 TUN READ [52]\n"
"Wed Jun 12 14:36:46 2024 us=322117 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:46 2024 us=434425 TUN READ [52]\n"
"Wed Jun 12 14:36:46 2024 us=434425 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:46 2024 us=594421 TUN READ [145]\n"
"Wed Jun 12 14:36:46 2024 us=594421 UDP WRITE [169] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=168\n"
"Wed Jun 12 14:36:46 2024 us=594421 TUN READ [145]\n"
"Wed Jun 12 14:36:46 2024 us=594421 UDP WRITE [169] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=168\n"
"W"
                        "ed Jun 12 14:36:46 2024 us=657406 TUN READ [52]\n"
"Wed Jun 12 14:36:46 2024 us=657406 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:47 2024 us=324183 TUN READ [52]\n"
"Wed Jun 12 14:36:47 2024 us=324183 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:47 2024 us=324183 TUN READ [52]\n"
"Wed Jun 12 14:36:47 2024 us=324183 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:47 2024 us=435516 TUN READ [52]\n"
"Wed Jun 12 14:36:47 2024 us=435516 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:47 2024 us=435516 TUN READ [52]\n"
"Wed Jun 12 14:36:47 2024 us=435516 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:47 2024 us=546481 UDP READ [40] from [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=39\n"
"Wed Jun 12 14:36:47 2024 us=640921 TUN READ [52]\n"
"Wed Jun 12 14:36:47 202"
                        "4 us=640921 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:47 2024 us=783046 TUN READ [52]\n"
"Wed Jun 12 14:36:47 2024 us=783046 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:48 2024 us=590222 TUN READ [145]\n"
"Wed Jun 12 14:36:48 2024 us=590222 UDP WRITE [169] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=168\n"
"Wed Jun 12 14:36:48 2024 us=590222 TUN READ [145]\n"
"Wed Jun 12 14:36:48 2024 us=590222 UDP WRITE [169] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=168\n"
"Wed Jun 12 14:36:49 2024 us=224599 TUN READ [52]\n"
"Wed Jun 12 14:36:49 2024 us=224599 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:49 2024 us=336173 TUN READ [52]\n"
"Wed Jun 12 14:36:49 2024 us=336173 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:49 2024 us=447982 TUN READ [52]\n"
"Wed Jun 12 14:36:49 2024 us=447982 UDP W"
                        "RITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:49 2024 us=463196 TUN READ [52]\n"
"Wed Jun 12 14:36:49 2024 us=463196 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:49 2024 us=636371 TUN READ [52]\n"
"Wed Jun 12 14:36:49 2024 us=636371 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:49 2024 us=636371 TUN READ [52]\n"
"Wed Jun 12 14:36:49 2024 us=636371 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:49 2024 us=636371 TUN READ [52]\n"
"Wed Jun 12 14:36:49 2024 us=636371 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:49 2024 us=636371 TUN READ [52]\n"
"Wed Jun 12 14:36:49 2024 us=636371 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:49 2024 us=636371 TUN READ [52]\n"
"Wed Jun 12 14:36:49 2024 us=636371 UDP WRITE [76] to [AF_INET]1"
                        "00.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:49 2024 us=636371 TUN READ [52]\n"
"Wed Jun 12 14:36:49 2024 us=636371 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:49 2024 us=636371 TUN READ [52]\n"
"Wed Jun 12 14:36:49 2024 us=636371 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:49 2024 us=636371 TUN READ [52]\n"
"Wed Jun 12 14:36:49 2024 us=636371 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:49 2024 us=636371 TUN READ [52]\n"
"Wed Jun 12 14:36:49 2024 us=636371 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:49 2024 us=636371 TUN READ [52]\n"
"Wed Jun 12 14:36:49 2024 us=636371 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:49 2024 us=636371 TUN READ [52]\n"
"Wed Jun 12 14:36:49 2024 us=636371 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DA"
                        "TA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:49 2024 us=636371 TUN READ [52]\n"
"Wed Jun 12 14:36:49 2024 us=636371 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:49 2024 us=764237 TUN READ [52]\n"
"Wed Jun 12 14:36:49 2024 us=764237 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:49 2024 us=904869 TUN READ [52]\n"
"Wed Jun 12 14:36:49 2024 us=904869 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:50 2024 us=79256 TUN READ [52]\n"
"Wed Jun 12 14:36:50 2024 us=79256 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:50 2024 us=333168 TUN READ [52]\n"
"Wed Jun 12 14:36:50 2024 us=333168 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:50 2024 us=428050 TUN READ [52]\n"
"Wed Jun 12 14:36:50 2024 us=428050 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
""
                        "Wed Jun 12 14:36:50 2024 us=475086 TUN READ [143]\n"
"Wed Jun 12 14:36:50 2024 us=475086 UDP WRITE [167] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=166\n"
"Wed Jun 12 14:36:50 2024 us=570821 TUN READ [145]\n"
"Wed Jun 12 14:36:50 2024 us=570821 UDP WRITE [169] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=168\n"
"Wed Jun 12 14:36:50 2024 us=570821 TUN READ [145]\n"
"Wed Jun 12 14:36:50 2024 us=570821 UDP WRITE [169] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=168\n"
"Wed Jun 12 14:36:50 2024 us=570821 TUN READ [131]\n"
"Wed Jun 12 14:36:50 2024 us=570821 UDP WRITE [155] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=154\n"
"Wed Jun 12 14:36:50 2024 us=746366 TUN READ [52]\n"
"Wed Jun 12 14:36:50 2024 us=746366 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:51 2024 us=441238 TUN READ [52]\n"
"Wed Jun 12 14:36:51 2024 us=441238 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 "
                        "14:36:51 2024 us=569484 TUN READ [52]\n"
"Wed Jun 12 14:36:51 2024 us=569484 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:51 2024 us=585529 TUN READ [131]\n"
"Wed Jun 12 14:36:51 2024 us=585529 UDP WRITE [155] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=154\n"
"Wed Jun 12 14:36:51 2024 us=585529 TUN READ [145]\n"
"Wed Jun 12 14:36:51 2024 us=585529 UDP WRITE [169] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=168\n"
"Wed Jun 12 14:36:51 2024 us=585529 TUN READ [145]\n"
"Wed Jun 12 14:36:51 2024 us=585529 UDP WRITE [169] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=168\n"
"Wed Jun 12 14:36:51 2024 us=616812 TUN READ [52]\n"
"Wed Jun 12 14:36:51 2024 us=616812 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:51 2024 us=632439 TUN READ [52]\n"
"Wed Jun 12 14:36:51 2024 us=632439 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:51 2024 "
                        "us=632439 TUN READ [52]\n"
"Wed Jun 12 14:36:51 2024 us=632439 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:51 2024 us=632439 TUN READ [52]\n"
"Wed Jun 12 14:36:51 2024 us=632439 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:51 2024 us=632439 TUN READ [52]\n"
"Wed Jun 12 14:36:51 2024 us=632439 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:51 2024 us=632439 TUN READ [52]\n"
"Wed Jun 12 14:36:51 2024 us=632439 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:51 2024 us=632439 TUN READ [52]\n"
"Wed Jun 12 14:36:51 2024 us=632439 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:51 2024 us=632439 TUN READ [52]\n"
"Wed Jun 12 14:36:51 2024 us=632439 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:51 2024 us=791303 TUN READ [52]"
                        "\n"
"Wed Jun 12 14:36:51 2024 us=791303 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:51 2024 us=965805 TUN READ [52]\n"
"Wed Jun 12 14:36:51 2024 us=965805 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:52 2024 us=537345 TUN READ [52]\n"
"Wed Jun 12 14:36:52 2024 us=537345 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:52 2024 us=571002 TUN READ [131]\n"
"Wed Jun 12 14:36:52 2024 us=571002 UDP WRITE [155] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=154\n"
"Wed Jun 12 14:36:52 2024 us=632279 TUN READ [52]\n"
"Wed Jun 12 14:36:52 2024 us=632279 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:52 2024 us=981622 TUN READ [52]\n"
"Wed Jun 12 14:36:52 2024 us=981622 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:53 2024 us=345169 TUN READ [52]\n"
"Wed Jun 12 14:3"
                        "6:53 2024 us=345169 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:53 2024 us=455775 TUN READ [52]\n"
"Wed Jun 12 14:36:53 2024 us=455775 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:53 2024 us=604222 TUN READ [145]\n"
"Wed Jun 12 14:36:53 2024 us=604222 UDP WRITE [169] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=168\n"
"Wed Jun 12 14:36:54 2024 us=204555 TUN READ [76]\n"
"Wed Jun 12 14:36:54 2024 us=204555 UDP WRITE [100] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=99\n"
"Wed Jun 12 14:36:54 2024 us=276829 TUN READ [76]\n"
"Wed Jun 12 14:36:54 2024 us=276829 UDP WRITE [100] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=99\n"
"Wed Jun 12 14:36:54 2024 us=279906 TUN READ [76]\n"
"Wed Jun 12 14:36:54 2024 us=279906 UDP WRITE [100] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=99\n"
"Wed Jun 12 14:36:54 2024 us=307193 TUN READ [76]\n"
"Wed Jun 12 14:36:54 2024 us=3071"
                        "93 UDP WRITE [100] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=99\n"
"Wed Jun 12 14:36:54 2024 us=400601 TUN READ [76]\n"
"Wed Jun 12 14:36:54 2024 us=400601 UDP WRITE [100] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=99\n"
"Wed Jun 12 14:36:54 2024 us=637399 TUN READ [52]\n"
"Wed Jun 12 14:36:54 2024 us=637399 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:54 2024 us=983874 TUN READ [52]\n"
"Wed Jun 12 14:36:54 2024 us=983874 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:55 2024 us=599424 TUN READ [131]\n"
"Wed Jun 12 14:36:55 2024 us=599424 UDP WRITE [155] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=154\n"
"Wed Jun 12 14:36:55 2024 us=599424 TUN READ [131]\n"
"Wed Jun 12 14:36:55 2024 us=599424 UDP WRITE [155] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=154\n"
"Wed Jun 12 14:36:55 2024 us=599424 TUN READ [131]\n"
"Wed Jun 12 14:36:55 2024 us=599424 UDP WRITE ["
                        "155] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=154\n"
"Wed Jun 12 14:36:55 2024 us=599424 TUN READ [131]\n"
"Wed Jun 12 14:36:55 2024 us=602930 UDP WRITE [155] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=154\n"
"Wed Jun 12 14:36:55 2024 us=602930 TUN READ [131]\n"
"Wed Jun 12 14:36:55 2024 us=603629 UDP WRITE [155] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=154\n"
"Wed Jun 12 14:36:55 2024 us=603629 TUN READ [237]\n"
"Wed Jun 12 14:36:55 2024 us=603629 UDP WRITE [261] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=260\n"
"Wed Jun 12 14:36:55 2024 us=603629 TUN READ [256]\n"
"Wed Jun 12 14:36:55 2024 us=603629 UDP WRITE [280] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=279\n"
"Wed Jun 12 14:36:55 2024 us=605608 TUN READ [239]\n"
"Wed Jun 12 14:36:55 2024 us=605608 UDP WRITE [263] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=262\n"
"Wed Jun 12 14:36:55 2024 us=605608 TUN READ [237]\n"
"Wed Jun 12 14:36:55 2024 us=605608 UDP WRITE [261] "
                        "to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=260\n"
"Wed Jun 12 14:36:55 2024 us=634721 TUN READ [52]\n"
"Wed Jun 12 14:36:55 2024 us=634721 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:55 2024 us=634721 TUN READ [48]\n"
"Wed Jun 12 14:36:55 2024 us=634721 UDP WRITE [72] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=71\n"
"Wed Jun 12 14:36:55 2024 us=634721 TUN READ [48]\n"
"Wed Jun 12 14:36:55 2024 us=634721 UDP WRITE [72] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=71\n"
"Wed Jun 12 14:36:55 2024 us=634721 TUN READ [52]\n"
"Wed Jun 12 14:36:55 2024 us=634721 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:55 2024 us=634721 TUN READ [48]\n"
"Wed Jun 12 14:36:55 2024 us=634721 UDP WRITE [72] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=71\n"
"Wed Jun 12 14:36:55 2024 us=634721 TUN READ [52]\n"
"Wed Jun 12 14:36:55 2024 us=634721 UDP WRITE [76] to [AF_INET]100.25.183"
                        ".23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:55 2024 us=634721 TUN READ [48]\n"
"Wed Jun 12 14:36:55 2024 us=634721 UDP WRITE [72] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=71\n"
"Wed Jun 12 14:36:55 2024 us=634721 TUN READ [52]\n"
"Wed Jun 12 14:36:55 2024 us=634721 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:55 2024 us=634721 TUN READ [48]\n"
"Wed Jun 12 14:36:55 2024 us=634721 UDP WRITE [72] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=71\n"
"Wed Jun 12 14:36:55 2024 us=634721 TUN READ [52]\n"
"Wed Jun 12 14:36:55 2024 us=634721 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:55 2024 us=634721 TUN READ [48]\n"
"Wed Jun 12 14:36:55 2024 us=634721 UDP WRITE [72] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=71\n"
"Wed Jun 12 14:36:55 2024 us=634721 TUN READ [52]\n"
"Wed Jun 12 14:36:55 2024 us=634721 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid"
                        "=0 DATA len=75\n"
"Wed Jun 12 14:36:55 2024 us=634721 TUN READ [48]\n"
"Wed Jun 12 14:36:55 2024 us=634721 UDP WRITE [72] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=71\n"
"Wed Jun 12 14:36:55 2024 us=634721 TUN READ [52]\n"
"Wed Jun 12 14:36:55 2024 us=634721 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:55 2024 us=634721 TUN READ [48]\n"
"Wed Jun 12 14:36:55 2024 us=634721 UDP WRITE [72] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=71\n"
"Wed Jun 12 14:36:55 2024 us=634721 TUN READ [52]\n"
"Wed Jun 12 14:36:55 2024 us=634721 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed Jun 12 14:36:55 2024 us=634721 TUN READ [48]\n"
"Wed Jun 12 14:36:55 2024 us=634721 UDP WRITE [72] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=71\n"
"Wed Jun 12 14:36:55 2024 us=634721 TUN READ [52]\n"
"Wed Jun 12 14:36:55 2024 us=634721 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"Wed "
                        "Jun 12 14:36:55 2024 us=634721 TUN READ [48]\n"
"Wed Jun 12 14:36:55 2024 us=634721 UDP WRITE [72] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=71\n"
"Wed Jun 12 14:36:55 2024 us=634721 TUN READ [52]\n"
"Wed Jun 12 14:36:55 2024 us=634721 UDP WRITE [76] to [AF_INET]100.25.183.23:1194: P_DATA_V2 kid=0 DATA len=75\n"
"", nullptr));
        logsTitle->setText(QCoreApplication::translate("MainWindow", "Logs", nullptr));
        label->setText(QString());
        user->setText(QString());
        settingsTitle->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        generalSettingsBtn->setText(QCoreApplication::translate("MainWindow", "General", nullptr));
        proxySettingsBtn->setText(QCoreApplication::translate("MainWindow", "Proxy", nullptr));
        advancedSettingsBtn->setText(QCoreApplication::translate("MainWindow", "Advanced", nullptr));
        userInterfaceTitle->setText(QCoreApplication::translate("MainWindow", "User Interface", nullptr));
        languageLabel->setText(QCoreApplication::translate("MainWindow", "Language", nullptr));
        selectLanguageInput->setItemText(0, QCoreApplication::translate("MainWindow", "English", nullptr));
        selectLanguageInput->setItemText(1, QCoreApplication::translate("MainWindow", "French", nullptr));
        selectLanguageInput->setItemText(2, QCoreApplication::translate("MainWindow", "Spanish", nullptr));
        selectLanguageInput->setItemText(3, QCoreApplication::translate("MainWindow", "Chinese", nullptr));
        selectLanguageInput->setItemText(4, QCoreApplication::translate("MainWindow", "Italian", nullptr));

        selectLanguageInput->setCurrentText(QCoreApplication::translate("MainWindow", "English", nullptr));
        userInterfaceTitle_3->setText(QCoreApplication::translate("MainWindow", "Preferences", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Show Balloon", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "On connect", nullptr));
        radioButton_3->setText(QCoreApplication::translate("MainWindow", "Never", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "On connect/reconnect", nullptr));
        userInterfaceTitle_2->setText(QCoreApplication::translate("MainWindow", "Startup", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "Launch on Windows Startup", nullptr));
        checkBox_3->setText(QCoreApplication::translate("MainWindow", "Append to log", nullptr));
        checkBox_4->setText(QCoreApplication::translate("MainWindow", "Show script window", nullptr));
        checkBox_5->setText(QCoreApplication::translate("MainWindow", "Silent Connection", nullptr));
        option1->setText(QCoreApplication::translate("MainWindow", "Default", nullptr));
        option2->setText(QCoreApplication::translate("MainWindow", "Use System Proxy Settings", nullptr));
        man->setText(QCoreApplication::translate("MainWindow", "Manual Configuration", nullptr));
        op1->setText(QCoreApplication::translate("MainWindow", "HTTP Proxy", nullptr));
        op2->setText(QCoreApplication::translate("MainWindow", "SOCKS Proxy", nullptr));
        add->setText(QCoreApplication::translate("MainWindow", "Address", nullptr));
        port->setText(QCoreApplication::translate("MainWindow", "Port", nullptr));
        groupBox->setTitle(QString());
        browse->setText(QCoreApplication::translate("MainWindow", "Browse", nullptr));
        browse_2->setText(QCoreApplication::translate("MainWindow", "Browse", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Configuration Files", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Log Files", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Folder", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Script Timeout", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Disconnect script timeout", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Extension", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Folder", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Connect script timeout", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Preconnect Script Timeout", nullptr));
        userLogoInfo->setText(QString());
        infoDescription->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>OpenVPN GUIv11.15\343\200\2010.0 -A Windows GUI for OpenVPN<br/>Copyright (C) 2004-2005 Mathias Sundman &lt;info@openvpn.se&gt; <br/>Copyright (C) 2008-2014 Heiko Hund &lt;heikoh@users.sf.net&gt;<br/>Copyright (C)2012-2018 OpenVPN GUI contributors <br/>https://github.com/OpenVPN/openvpn-gui/ <br/><br/>OpenVPN-An application to securely tunnel lP networks over a single CP/UDP port with support for SSL/TLS-based session authentic ation and key exchange. packet encryption, packet authentication. and packet compression.<br/>Copyright (C) 2002-2018 OpenVPN Technologies. Inc &lt;info@openvpn.net&gt; https://openvpn.net</p></body></html>", nullptr));
        infoTitle->setText(QCoreApplication::translate("MainWindow", "About Us", nullptr));
        quantumLogoInfo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
