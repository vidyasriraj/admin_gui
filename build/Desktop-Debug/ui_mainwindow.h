/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
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
    QWidget *expandedNav;
    QGridLayout *gridLayout_3;
    QPushButton *expandedNavBtn;
    QPushButton *expandedDashboardBtn;
    QPushButton *expandedLogsBtn;
    QSpacerItem *verticalSpacer_2;
    QPushButton *expandedInfoBtn;
    QPushButton *expandedSettingsBtn;
    QWidget *compressedNav;
    QGridLayout *gridLayout_2;
    QPushButton *compressedNavBtn;
    QPushButton *compressedDashboardBtn;
    QPushButton *compressedLogsBtn;
    QSpacerItem *verticalSpacer;
    QPushButton *compressedSettingsBtn;
    QPushButton *compressedInfoBtn;
    QWidget *main;
    QGridLayout *gridLayout;
    QStackedWidget *StackedMainView;
    QWidget *dashboardPage;
    QVBoxLayout *verticalLayout;
    QPushButton *connectIcon;
    QLabel *connectText;
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton;
    QLabel *label_3;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_2;
    QLabel *label_4;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton_3;
    QLabel *label_5;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_5;
    QPushButton *pushButton_4;
    QLabel *label_2;
    QWidget *logsPage;
    QGridLayout *gridLayout_6;
    QFrame *logsContainer;
    QGridLayout *gridLayout_5;
    QLabel *logsTitle;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_7;
    QLabel *logsBody;
    QWidget *settingsPage;
    QWidget *page;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLabel *user;

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
        expandedNav = new QWidget(centralwidget);
        expandedNav->setObjectName("expandedNav");
        expandedNav->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
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
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/logos/images/Menu.png"), QSize(), QIcon::Normal, QIcon::Off);
        expandedNavBtn->setIcon(icon);
        expandedNavBtn->setIconSize(QSize(60, 60));

        gridLayout_3->addWidget(expandedNavBtn, 0, 0, 1, 1);

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
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/logos/images/Dashboard Layout.png"), QSize(), QIcon::Normal, QIcon::Off);
        expandedDashboardBtn->setIcon(icon1);
        expandedDashboardBtn->setIconSize(QSize(60, 60));
        expandedDashboardBtn->setCheckable(true);
        expandedDashboardBtn->setAutoExclusive(true);

        gridLayout_3->addWidget(expandedDashboardBtn, 1, 0, 1, 1);

        expandedLogsBtn = new QPushButton(expandedNav);
        expandedLogsBtn->setObjectName("expandedLogsBtn");
        expandedLogsBtn->setMaximumSize(QSize(165, 16777215));
        expandedLogsBtn->setCursor(QCursor(Qt::PointingHandCursor));
        expandedLogsBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(23, 28, 31);\n"
"border: 2px solid transparent;\n"
"outline: none;\n"
"padding-left: \"17px\";\n"
"padding-right: \"17px\";"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/logos/images/Align Text Left.png"), QSize(), QIcon::Normal, QIcon::Off);
        expandedLogsBtn->setIcon(icon2);
        expandedLogsBtn->setIconSize(QSize(60, 60));
        expandedLogsBtn->setCheckable(true);

        gridLayout_3->addWidget(expandedLogsBtn, 2, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 277, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 3, 0, 1, 1);

        expandedInfoBtn = new QPushButton(expandedNav);
        expandedInfoBtn->setObjectName("expandedInfoBtn");
        expandedInfoBtn->setMaximumSize(QSize(165, 16777215));
        expandedInfoBtn->setCursor(QCursor(Qt::PointingHandCursor));
        expandedInfoBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(23, 28, 31);\n"
"border: 2px solid transparent;\n"
"outline: none;\n"
"padding-left: \"17px\";\n"
"padding-right: \"17px\";"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/logos/images/Info.png"), QSize(), QIcon::Normal, QIcon::Off);
        expandedInfoBtn->setIcon(icon3);
        expandedInfoBtn->setIconSize(QSize(60, 60));
        expandedInfoBtn->setCheckable(true);

        gridLayout_3->addWidget(expandedInfoBtn, 5, 0, 1, 1);

        expandedSettingsBtn = new QPushButton(expandedNav);
        expandedSettingsBtn->setObjectName("expandedSettingsBtn");
        expandedSettingsBtn->setMaximumSize(QSize(165, 16777215));
        expandedSettingsBtn->setCursor(QCursor(Qt::PointingHandCursor));
        expandedSettingsBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(23, 28, 31);\n"
"border: 2px solid transparent;\n"
"outline: none;\n"
"padding-left: \"17px\";\n"
"padding-right: \"17px\";"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/logos/images/CMakeLists.txt.user"), QSize(), QIcon::Normal, QIcon::Off);
        expandedSettingsBtn->setIcon(icon4);
        expandedSettingsBtn->setIconSize(QSize(60, 60));
        expandedSettingsBtn->setCheckable(true);

        gridLayout_3->addWidget(expandedSettingsBtn, 4, 0, 1, 1);


        gridLayout_4->addWidget(expandedNav, 0, 1, 1, 1);

        compressedNav = new QWidget(centralwidget);
        compressedNav->setObjectName("compressedNav");
        sizePolicy.setHeightForWidth(compressedNav->sizePolicy().hasHeightForWidth());
        compressedNav->setSizePolicy(sizePolicy);
        compressedNav->setMinimumSize(QSize(70, 600));
        compressedNav->setMaximumSize(QSize(16777215, 600));
        compressedNav->setStyleSheet(QString::fromUtf8("background-color: rgb(23, 28, 31);"));
        gridLayout_2 = new QGridLayout(compressedNav);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        compressedNavBtn = new QPushButton(compressedNav);
        compressedNavBtn->setObjectName("compressedNavBtn");
        QFont font;
        font.setBold(false);
        compressedNavBtn->setFont(font);
        compressedNavBtn->setCursor(QCursor(Qt::PointingHandCursor));
        compressedNavBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(23, 28, 31);\n"
"border: 2px solid transparent;\n"
"outline: none;"));
        compressedNavBtn->setIcon(icon);
        compressedNavBtn->setIconSize(QSize(60, 60));

        gridLayout_2->addWidget(compressedNavBtn, 0, 0, 1, 1);

        compressedDashboardBtn = new QPushButton(compressedNav);
        compressedDashboardBtn->setObjectName("compressedDashboardBtn");
        compressedDashboardBtn->setCursor(QCursor(Qt::PointingHandCursor));
        compressedDashboardBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(23, 28, 31);\n"
"border: 2px solid transparent;\n"
"outline: none;"));
        compressedDashboardBtn->setIcon(icon1);
        compressedDashboardBtn->setIconSize(QSize(60, 60));
        compressedDashboardBtn->setCheckable(true);
        compressedDashboardBtn->setChecked(true);
        compressedDashboardBtn->setAutoExclusive(true);

        gridLayout_2->addWidget(compressedDashboardBtn, 1, 0, 1, 1);

        compressedLogsBtn = new QPushButton(compressedNav);
        compressedLogsBtn->setObjectName("compressedLogsBtn");
        compressedLogsBtn->setCursor(QCursor(Qt::PointingHandCursor));
        compressedLogsBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(23, 28, 31);\n"
"border: 2px solid transparent;\n"
"outline: none;"));
        compressedLogsBtn->setIcon(icon2);
        compressedLogsBtn->setIconSize(QSize(60, 60));
        compressedLogsBtn->setCheckable(true);

        gridLayout_2->addWidget(compressedLogsBtn, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 229, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 3, 0, 1, 1);

        compressedSettingsBtn = new QPushButton(compressedNav);
        compressedSettingsBtn->setObjectName("compressedSettingsBtn");
        compressedSettingsBtn->setCursor(QCursor(Qt::PointingHandCursor));
        compressedSettingsBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(23, 28, 31);\n"
"border: 2px solid transparent;\n"
"outline: none;"));
        compressedSettingsBtn->setIcon(icon4);
        compressedSettingsBtn->setIconSize(QSize(60, 60));
        compressedSettingsBtn->setCheckable(true);

        gridLayout_2->addWidget(compressedSettingsBtn, 4, 0, 1, 1);

        compressedInfoBtn = new QPushButton(compressedNav);
        compressedInfoBtn->setObjectName("compressedInfoBtn");
        compressedInfoBtn->setCursor(QCursor(Qt::PointingHandCursor));
        compressedInfoBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(23, 28, 31);\n"
"border: 2px solid transparent;\n"
"outline: none;"));
        compressedInfoBtn->setIcon(icon3);
        compressedInfoBtn->setIconSize(QSize(60, 60));
        compressedInfoBtn->setCheckable(true);

        gridLayout_2->addWidget(compressedInfoBtn, 5, 0, 1, 1);


        gridLayout_4->addWidget(compressedNav, 0, 0, 1, 1);

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
""));
        dashboardPage = new QWidget();
        dashboardPage->setObjectName("dashboardPage");
        dashboardPage->setMinimumSize(QSize(0, 452));
        dashboardPage->setMaximumSize(QSize(16777215, 452));
        dashboardPage->setStyleSheet(QString::fromUtf8("color: #ffffff;\n"
""));
        verticalLayout = new QVBoxLayout(dashboardPage);
        verticalLayout->setObjectName("verticalLayout");
        connectIcon = new QPushButton(dashboardPage);
        connectIcon->setObjectName("connectIcon");
        connectIcon->setMinimumSize(QSize(220, 220));
        connectIcon->setMaximumSize(QSize(220, 220));
        connectIcon->setCursor(QCursor(Qt::PointingHandCursor));
        connectIcon->setStyleSheet(QString::fromUtf8("image: url(:/logos/images/connect.png);"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/logos/images/Frame 13.png"), QSize(), QIcon::Normal, QIcon::Off);
        connectIcon->setIcon(icon5);
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

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(15);
        horizontalLayout->setObjectName("horizontalLayout");
        frame = new QFrame(dashboardPage);
        frame->setObjectName("frame");
        frame->setStyleSheet(QString::fromUtf8("background-color: \"#545759\";\n"
"border-radius: \"12px\";\n"
"text-align: center;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName("verticalLayout_2");
        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setPointSize(16);
        font2.setWeight(QFont::Black);
        pushButton->setFont(font2);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/logos/images/upload.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon6);
        pushButton->setIconSize(QSize(30, 30));

        verticalLayout_2->addWidget(pushButton, 0, Qt::AlignHCenter);

        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        QFont font3;
        font3.setPointSize(14);
        font3.setWeight(QFont::DemiBold);
        label_3->setFont(font3);
        label_3->setStyleSheet(QString::fromUtf8("text-align: center;"));

        verticalLayout_2->addWidget(label_3, 0, Qt::AlignHCenter);


        horizontalLayout->addWidget(frame);

        frame_4 = new QFrame(dashboardPage);
        frame_4->setObjectName("frame_4");
        frame_4->setStyleSheet(QString::fromUtf8("background-color: \"#545759\";\n"
"border-radius: \"12px\";\n"
"text-align: center;"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_4);
        verticalLayout_3->setObjectName("verticalLayout_3");
        pushButton_2 = new QPushButton(frame_4);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setFont(font2);
        pushButton_2->setIcon(icon6);
        pushButton_2->setIconSize(QSize(30, 30));

        verticalLayout_3->addWidget(pushButton_2, 0, Qt::AlignHCenter);

        label_4 = new QLabel(frame_4);
        label_4->setObjectName("label_4");
        label_4->setFont(font3);
        label_4->setStyleSheet(QString::fromUtf8("text-align: center;"));

        verticalLayout_3->addWidget(label_4, 0, Qt::AlignHCenter);


        horizontalLayout->addWidget(frame_4);

        frame_3 = new QFrame(dashboardPage);
        frame_3->setObjectName("frame_3");
        frame_3->setStyleSheet(QString::fromUtf8("background-color: \"#545759\";\n"
"border-radius: \"12px\";\n"
"text-align: center;"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_3);
        verticalLayout_4->setObjectName("verticalLayout_4");
        pushButton_3 = new QPushButton(frame_3);
        pushButton_3->setObjectName("pushButton_3");
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setFont(font2);
        pushButton_3->setIcon(icon6);
        pushButton_3->setIconSize(QSize(30, 30));

        verticalLayout_4->addWidget(pushButton_3, 0, Qt::AlignHCenter);

        label_5 = new QLabel(frame_3);
        label_5->setObjectName("label_5");
        label_5->setFont(font3);
        label_5->setStyleSheet(QString::fromUtf8("text-align: center;"));

        verticalLayout_4->addWidget(label_5, 0, Qt::AlignHCenter);


        horizontalLayout->addWidget(frame_3);

        frame_2 = new QFrame(dashboardPage);
        frame_2->setObjectName("frame_2");
        frame_2->setStyleSheet(QString::fromUtf8("background-color: \"#545759\";\n"
"border-radius: \"12px\";\n"
"text-align: center;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_2);
        verticalLayout_5->setObjectName("verticalLayout_5");
        pushButton_4 = new QPushButton(frame_2);
        pushButton_4->setObjectName("pushButton_4");
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setFont(font2);
        pushButton_4->setIcon(icon6);
        pushButton_4->setIconSize(QSize(30, 30));

        verticalLayout_5->addWidget(pushButton_4, 0, Qt::AlignHCenter);

        label_2 = new QLabel(frame_2);
        label_2->setObjectName("label_2");
        QFont font4;
        font4.setPointSize(15);
        font4.setWeight(QFont::DemiBold);
        label_2->setFont(font4);
        label_2->setStyleSheet(QString::fromUtf8("text-align: center;"));

        verticalLayout_5->addWidget(label_2, 0, Qt::AlignHCenter);


        horizontalLayout->addWidget(frame_2);


        verticalLayout->addLayout(horizontalLayout);

        StackedMainView->addWidget(dashboardPage);
        logsPage = new QWidget();
        logsPage->setObjectName("logsPage");
        logsPage->setStyleSheet(QString::fromUtf8("color: #ffffff;\n"
""));
        gridLayout_6 = new QGridLayout(logsPage);
        gridLayout_6->setObjectName("gridLayout_6");
        gridLayout_6->setContentsMargins(50, 50, 50, 50);
        logsContainer = new QFrame(logsPage);
        logsContainer->setObjectName("logsContainer");
        logsContainer->setStyleSheet(QString::fromUtf8("background-color: rgb(121, 121, 121);\n"
"border-radius: \"20px\";"));
        logsContainer->setFrameShape(QFrame::StyledPanel);
        logsContainer->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(logsContainer);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setContentsMargins(15, 15, 15, 15);
        logsTitle = new QLabel(logsContainer);
        logsTitle->setObjectName("logsTitle");
        logsTitle->setMaximumSize(QSize(16777215, 50));
        QFont font5;
        font5.setPointSize(20);
        font5.setWeight(QFont::ExtraBold);
        logsTitle->setFont(font5);

        gridLayout_5->addWidget(logsTitle, 0, 0, 1, 1);

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
        scrollAreaWidgetContents->setGeometry(QRect(0, -1380, 848, 5170));
        gridLayout_7 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_7->setObjectName("gridLayout_7");
        logsBody = new QLabel(scrollAreaWidgetContents);
        logsBody->setObjectName("logsBody");
        logsBody->setFrameShape(QFrame::Box);

        gridLayout_7->addWidget(logsBody, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_5->addWidget(scrollArea, 3, 0, 1, 1);


        gridLayout_6->addWidget(logsContainer, 0, 0, 1, 1);

        StackedMainView->addWidget(logsPage);
        settingsPage = new QWidget();
        settingsPage->setObjectName("settingsPage");
        StackedMainView->addWidget(settingsPage);
        page = new QWidget();
        page->setObjectName("page");
        StackedMainView->addWidget(page);

        gridLayout->addWidget(StackedMainView, 1, 0, 1, 3);

        label = new QLabel(main);
        label->setObjectName("label");
        label->setMaximumSize(QSize(120, 120));
        label->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: 2px solid transparent;\n"
"outline: none;\n"
""));
        label->setPixmap(QPixmap(QString::fromUtf8(":/logos/images/qaig_logo.png")));
        label->setScaledContents(true);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        user = new QLabel(main);
        user->setObjectName("user");
        user->setMaximumSize(QSize(100, 100));
        user->setCursor(QCursor(Qt::PointingHandCursor));
        user->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: 2px solid transparent;\n"
"outline: none;\n"
""));
        user->setPixmap(QPixmap(QString::fromUtf8(":/logos/images/Group 10.png")));
        user->setScaledContents(true);
        user->setMargin(10);

        gridLayout->addWidget(user, 0, 2, 1, 1);


        gridLayout_4->addWidget(main, 0, 2, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        StackedMainView->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        expandedNavBtn->setText(QString());
        expandedDashboardBtn->setText(QCoreApplication::translate("MainWindow", "Dashboard", nullptr));
        expandedLogsBtn->setText(QCoreApplication::translate("MainWindow", "Logs", nullptr));
        expandedInfoBtn->setText(QCoreApplication::translate("MainWindow", "Info", nullptr));
        expandedSettingsBtn->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        compressedNavBtn->setText(QString());
        compressedDashboardBtn->setText(QString());
        compressedLogsBtn->setText(QString());
        compressedSettingsBtn->setText(QString());
        compressedInfoBtn->setText(QString());
        connectIcon->setText(QString());
        connectText->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Upload", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "0.00 mb/s", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Download", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "0.00 mb/s", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Up Time", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "00:00:00", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "IP Address", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "0.0.0.0", nullptr));
        logsTitle->setText(QCoreApplication::translate("MainWindow", "Logs", nullptr));
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
        label->setText(QString());
        user->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
