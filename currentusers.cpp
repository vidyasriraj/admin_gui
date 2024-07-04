#include "currentusers.h"
#include <QIcon>
#include <QMessageBox>

CurrentUsers::CurrentUsers(QWidget *parent) : QWidget(parent)
{


    QScrollArea *scrollArea = new QScrollArea(this);
    scrollArea->setMinimumWidth(650);  // Minimum width
    scrollArea->setMaximumWidth(650);  // Maximum width
    scrollWidget = new QWidget(scrollArea);
    QFont font("Sans Serif", 12); // Specify the font family and size
    scrollWidget->setFont(font);
    scrollLayout = new QVBoxLayout(scrollWidget);
    QSpacerItem *verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Fixed, QSizePolicy::Fixed);
    scrollLayout->addItem(verticalSpacer);
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

void CurrentUsers::addUser(const QString &name, const QString &ip, QLabel *status, const QString &connectedTime)
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

    QLabel *connectedTimeLabel = new QLabel(connectedTime, this);
    QPushButton *deleteButton = new QPushButton(QIcon(":/logos/images/delete.png"), "", this);

    userLayout->addWidget(checkbox, 0, 0);
    userLayout->addWidget(nameLabel, 0, 1);
    userLayout->addWidget(ipLabel, 0, 2);
    userLayout->addWidget(status, 0, 3);
    userLayout->addWidget(connectedTimeLabel, 0, 4);
    userLayout->addWidget(deleteButton, 0, 5);

    // Set column stretch to adjust the spacing between columns
    userLayout->setColumnStretch(0, 180); // Checkbox column
    userLayout->setColumnStretch(1, 350); // Name column
    userLayout->setColumnStretch(2, 470); // IP column
    userLayout->setColumnStretch(3, 370); // Status column
    userLayout->setColumnStretch(4, 300); // Connected time column
    userLayout->setColumnStretch(5, 125); // Delete button column
    // Add user layout before the stretch (spacer)
    scrollLayout->insertLayout(0, userLayout);
    QSpacerItem *spacer = new QSpacerItem(20, 10, QSizePolicy::Fixed, QSizePolicy::Fixed);
    scrollLayout->insertItem(1, spacer);



    connect(deleteButton, &QPushButton::clicked, [=]() {
        // Create a message box for confirmation
        QMessageBox msgBox;
        msgBox.setWindowTitle("Delete User");
        msgBox.setText("Are you sure you want to delete this user?");
        msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);

        // Apply black color stylesheet
        msgBox.setStyleSheet(
            "QMessageBox {"
            "    background-color: #ffffff;"    // Dark background
            "    color: #ffffff;"               // White text
            "}"
            "QPushButton {"
            "    background-color: #333333;"    // Dark grey button
            "    color: #ffffff;"               // White text
            "    border: 1px solid #555555;"    // Border color
            "    padding: 5px 10px;"            // Button padding
            "}"
            "QPushButton:hover {"
            "    background-color: #444444;"    // Slightly lighter button on hover
            "}"
            "QPushButton:pressed {"
            "    background-color: #555555;"    // Even lighter button on press
            "}"
            );

        // Center the message box on the parent widget

        msgBox.setModal(true);

        // Execute the message box and handle the response
        if (msgBox.exec() == QMessageBox::Yes) {
            emit userDeleted(name, ip, connectedTime);

            // Remove the user layout when the delete button is clicked
            scrollLayout->removeItem(userLayout);
            delete userLayout;
            checkBoxes.removeOne(checkbox);
            delete checkbox;
            delete nameLabel;
            delete ipLabel;
            delete status;
            delete connectedTimeLabel;
            delete deleteButton;
        }
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
