#include "IPlayer.h"

IPlayer::IPlayer(QGraphicsItem *parent)
    : QGraphicsRectItem(parent)
{
}

IPlayer::~IPlayer()
{

}

void IPlayer::keyPressEvent(QKeyEvent *event)
{
    qWarning() << "You need to implement this method.";
}
