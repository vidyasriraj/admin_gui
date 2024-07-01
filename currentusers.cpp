#include "currentusers.h"
#include <QIcon>

CurrentUsers::CurrentUsers(QWidget *parent) : QWidget(parent)
{


    QScrollArea *scrollArea = new QScrollArea(this);
    scrollArea->setMinimumWidth(650);  // Minimum width
    scrollArea->setMaximumWidth(650);  // Maximum width
    scrollWidget = new QWidget(scrollArea);

    scrollLayout = new QVBoxLayout(scrollWidget);

    // Add a spacer at the bottom to push everything to the top
    scrollLayout->addStretch();
    scrollWidget->setMinimumWidth(530);  // Minimum width
    scrollWidget->setMaximumWidth(530);  // Maximum width
    scrollArea->setStyleSheet(
        "QScrollBar:vertical {"
        "    background: transparent;"
        "    width: 10px;"
        "    margin: 0px 0px 0px 0px;"
        "}"
        "QScrollBar::handle:vertical {"
        "    background: #D9D9D9;"
        "    min-height: 20px;"
        "    border-radius: 5px;"
        "}"
        "QScrollBar::add-line:vertical, QScrollBar::sub-line:vertical {"
        "    background: none;"
        "    height: 0px;"
        "    subcontrol-position: none;"
        "}"
        "QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {"
        "    background: none;"
        "}"
        "QScrollBar:horizontal {"
        "    background: transparent;"
        "    height: 10px;"
        "    margin: 0px 0px 0px 0px;"
        "}"
        "QScrollBar::handle:horizontal {"
        "    background: #D9D9D9;"
        "    min-width: 20px;"
        "    border-radius: 5px;"
        "}"
        "QScrollBar::add-line:horizontal, QScrollBar::sub-line:horizontal {"
        "    background: none;"
        "    width: 0px;"
        "    subcontrol-position: none;"
        "}"
        "QScrollBar::add-page:horizontal, QScrollBar::sub-page:horizontal {"
        "    background: none;"
        "}"
        "QScrollCorner {"
        "    background: transparent;"
        "    border: none;"
        "}"
        );


    scrollArea->setWidgetResizable(true);
    scrollArea->setWidget(scrollWidget);
    scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);


    // Align scroll area to the top-right corner


    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    mainLayout->addWidget(scrollArea);
    mainLayout->setAlignment(Qt::AlignTop | Qt::AlignRight);

}

void CurrentUsers::addUser(const QString &name, const QString &ip, const QString &status, const QString &connectedTime)
{
    QGridLayout *userLayout = new QGridLayout();

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
    QPushButton *deleteButton = new QPushButton(QIcon(":/logos/images/delete.png"), "", this);

    userLayout->addWidget(checkbox, 0, 0);
    userLayout->addWidget(nameLabel, 0, 1);
    userLayout->addWidget(ipLabel, 0, 2);
    userLayout->addWidget(statusLabel, 0, 3);
    userLayout->addWidget(connectedTimeLabel, 0, 4);
    userLayout->addWidget(deleteButton, 0, 5);

    // Set column stretch to adjust the spacing between columns
    userLayout->setColumnStretch(0, 160); // Checkbox column
    userLayout->setColumnStretch(1, 290); // Name column
    userLayout->setColumnStretch(2, 530); // IP column
    userLayout->setColumnStretch(3, 350); // Status column
    userLayout->setColumnStretch(4, 310); // Connected time column
    userLayout->setColumnStretch(5, 100); // Delete button column
    // Add user layout before the stretch (spacer)
    scrollLayout->insertLayout(scrollLayout->count() - 1, userLayout);


    connect(deleteButton, &QPushButton::clicked, [=]() {
        emit userDeleted(name, ip, status, connectedTime);
        // Remove the user layout when the delete button is clicked
        scrollLayout->removeItem(userLayout);
        delete userLayout;
        checkBoxes.removeOne(checkbox);
        delete checkbox;
        delete nameLabel;
        delete ipLabel;
        delete statusLabel;
        delete connectedTimeLabel;
        delete deleteButton;
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
