#include "Player.h"
#include <QDebug>


Player::Player(QGraphicsItem *parent)
    : IPlayer(parent)
{

}

void Player::ChangePosition(QPoint point)

{
    position = point;
    this->setRect(position.x(),position.y(),100,100);
    this->update();
}

void Player::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Left )
    {
        ChangePosition(QPoint(position.x() + 100, position.y()));
        qDebug() << "Left";
    }else{
        ChangePosition(QPoint(position.x() - 100, position.y()));
        qDebug() << "Right";
    }

}
