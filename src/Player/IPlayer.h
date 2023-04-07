#pragma once

#include <QGraphicsRectItem>
#include <QPoint>
#include <QKeyEvent>
#include <QDebug>

class IPlayer : public QGraphicsRectItem
{
public:
    IPlayer(QGraphicsItem *parent = nullptr);
    virtual ~IPlayer();

    virtual void ChangePosition(const QPoint point) = 0;

protected:
    QPoint position;

    void keyPressEvent(QKeyEvent *event);
};
