#include "currentusers.h"
#include <QIcon>

CurrentUsers::CurrentUsers(QWidget *parent) : QWidget(parent)
{
    scrollArea = new QScrollArea(this);
    scrollWidget = new QWidget(scrollArea);
    scrollWidget->setFixedSize(600,578);
    scrollLayout = new QVBoxLayout(scrollWidget);

    scrollArea->setWidgetResizable(true);
    scrollArea->setWidget(scrollWidget);

    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    mainLayout->addWidget(scrollArea);
}

void CurrentUsers::addUser(const QString &name, const QString &ip, const QString &status, const QString &connectedTime)
{
    QHBoxLayout *userLayout = new QHBoxLayout();

    QCheckBox *checkbox = new QCheckBox(this);
    checkbox->setStyleSheet(
        "QCheckBox {"
        "    background-color: transparent;"
        "    color: white;"
        "    margin-left: 40px;"
        "}"
        "QCheckBox::indicator {"
        "    border: 1px solid white;"
        "    border-radius: 3px;"
        "    width: 15px;"
        "    height: 15px;"
        "    background-color: transparent;"
        "}"
        "QCheckBox::indicator:checked {"
        "    image: url(:/logos/images/new.png);"
        "    background-color: transparent;"
        "    border: 1px solid white;"
        "}"
        "QCheckBox::indicator:unchecked {"
        "    background-color: transparent;"
        "    border: 1px solid white;"
        "}"
       );
    checkBoxes.append(checkbox);
    connect(checkbox, &QCheckBox::toggled, this, &CurrentUsers::onIndividualCheckBoxToggled);
    QLabel *nameLabel = new QLabel(name, this);
    QLabel *ipLabel = new QLabel(ip, this);
    QLabel *statusLabel = new QLabel(status, this);
    QLabel *connectedTimeLabel = new QLabel(connectedTime, this);
    QPushButton *deleteButton = new QPushButton(QIcon(":/logos/images/delete.png"), "delete", this);

    userLayout->addWidget(checkbox);
    userLayout->addWidget(nameLabel);
    userLayout->addWidget(ipLabel);
    userLayout->addWidget(statusLabel);
    userLayout->addWidget(connectedTimeLabel);
    userLayout->addWidget(deleteButton);

    scrollLayout->addLayout(userLayout);

    QWidget *userWidget = new QWidget(this);


    scrollLayout->addWidget(userWidget);

    connect(deleteButton, &QPushButton::clicked, [=]() {
        emit userDeleted(name, ip, status, connectedTime);

    });


}
QList<QCheckBox*> CurrentUsers::getCheckBoxes() const
{
    return checkBoxes;
}
void CurrentUsers::setAllCheckBoxes(bool checked)
{
    for (QCheckBox* checkbox : checkBoxes) {
        checkbox->setChecked(checked);
    }
}
void CurrentUsers::onIndividualCheckBoxToggled()
{
    emit checkBoxStateChanged();
}
