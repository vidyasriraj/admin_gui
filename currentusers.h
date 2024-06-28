#ifndef CURRENTUSERS_H
#define CURRENTUSERS_H

#include <QWidget>
#include <QScrollArea>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QCheckBox>
#include <QLabel>
#include <QPushButton>

class CurrentUsers : public QWidget
{
    Q_OBJECT

public:
    explicit CurrentUsers(QWidget *parent = nullptr);
    void addUser(const QString &name, const QString &ip, const QString &status, const QString &connectedTime);
    QList<QCheckBox*> getCheckBoxes() const;
    void setAllCheckBoxes(bool checked);

signals:
    void userDeleted(const QString &name, const QString &ip, const QString &status, const QString &connectedTime);
    void checkBoxStateChanged();

private:
    QScrollArea *scrollArea;
    QWidget *scrollWidget;
    QVBoxLayout *scrollLayout;
    QList<QCheckBox*> checkBoxes;
    void deleteUser();
    void onIndividualCheckBoxToggled();
};

#endif // CURRENTUSERS_H
