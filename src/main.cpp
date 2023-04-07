#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsRectItem>

//#include "Player/IPlayer.h"
#include "Player/Player.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QGraphicsScene * scene = new QGraphicsScene();

    Player * player = new Player();
    //QGraphicsRectItem * player = new QGraphicsRectItem(0,0,100,100);
    player->setRect(0,0,100,100);
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();

    scene->addItem(player);
    QGraphicsView * view = new QGraphicsView(scene);

    view->show();
    return a.exec();
}
