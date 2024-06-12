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
    void hideCompressed();
    void hideExpandeded();
    void connectServer();
    void setConnectedIcon(const QPixmap &pixmap, qreal opacity);
    void setViewPage(int index, QPushButton *clickedButton);
    void setDashBoardPage();
    void setLogsPage();
    void setSettingsPage();
    void setInfoPage();

private:
    Ui::MainWindow *ui;
    QPushButton *previousButton;
    QPixmap setPixmapOpacity(const QPixmap &pixmap, qreal opacity);
};
#endif // MAINWINDOW_H
