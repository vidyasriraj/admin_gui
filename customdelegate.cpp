#include "customdelegate.h"
#include <QPainter>

CustomDelegate::CustomDelegate(QObject *parent)
    : QStyledItemDelegate(parent) {}

void CustomDelegate::paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const {
    QStyledItemDelegate::paint(painter, option, index);

    // Draw a horizontal line below each row
    int lineWidth = option.rect.width();  // Width of the line matches the cell width
    int lineHeight = 2;  // Height of the line
    int x = option.rect.x();  // X position starts from the left edge of the cell
    int y = option.rect.bottom();  // Y position is at the bottom of the cell

    painter->save();
    painter->setPen(QPen(Qt::gray, lineHeight));  // Set the color and thickness of the line
    painter->drawLine(x, y, x + lineWidth, y);  // Draw the line
    painter->restore();
}
