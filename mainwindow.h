#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include <QPushButton>
#include <QFileDialog>
#include <QGraphicsBlurEffect>
#include <QPropertyAnimation>
#include <QParallelAnimationGroup>


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    // control navbar menu
    void showExpandedNavbar();
    void showCompressedNavbar();

    // connect to the server
    void connectServer();
    void setConnectedIcon(const QPixmap &pixmap, qreal opacity);

    // changing navigations function
    void setViewPage(int index, QPushButton *clickedButton,QPushButton *clickedButton1);
    void setDashBoardPage();
    void setLogsPage();
    void setSettingsPage();
    void setInfoPage();

    // changing settings
    void setSettings(int index, QPushButton *selectedSettingsBtn);
    void setGeneralSettings();
    void setProxySettings();
    void setAdvancedSettings();
    void on_browse_clicked();
    void on_browse_2_clicked();

    void on_man_toggled(bool checked);
    void applyBlurEffect(QWidget* widget, bool apply) {
        if (apply) {
            QGraphicsBlurEffect* blurEffect = new QGraphicsBlurEffect(this);
            blurEffect->setBlurRadius(1.6);
            widget->setGraphicsEffect(blurEffect);
        } else {
            widget->setGraphicsEffect(nullptr);
        }
    }


private:
    Ui::MainWindow *ui;
    QPushButton *previousPage;
    QPushButton *previousPage1;
    QPushButton *previousSettings;

    QPushButton *browseButton;

    QPushButton *browseButton2;
    // control opacity of the icon
    QPixmap setPixmapOpacity(const QPixmap &pixmap, qreal opacity);
};
#endif // MAINWINDOW_H
