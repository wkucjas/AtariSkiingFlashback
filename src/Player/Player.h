#pragma once

#include "IPlayer.h"
#include <QPoint>
#include <QKeyEvent>

class Player :  public IPlayer
{
public:
    Player(QGraphicsItem *parent = nullptr);

private:
    QPoint position;
    void ChangePosition(QPoint point);
    void keyPressEvent(QKeyEvent * event);
};

