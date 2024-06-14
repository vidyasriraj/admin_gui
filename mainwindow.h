#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>

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
    void setViewPage(int index, QPushButton *clickedButton);
    void setDashBoardPage();
    void setLogsPage();
    void setSettingsPage();
    void setInfoPage();

    // changing settings
    void setSettings(int index, QPushButton *selectedSettingsBtn);
    void setGeneralSettings();
    void setProxySettings();
    void setAdvancedSettings();

private:
    Ui::MainWindow *ui;
    QPushButton *previousPage;
    QPushButton *previousSettings;

    // control opacity of the icon
    QPixmap setPixmapOpacity(const QPixmap &pixmap, qreal opacity);
};
#endif // MAINWINDOW_H
