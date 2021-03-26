#include "mytimer.h"

MyTimer::MyTimer()
{
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(MySlot()));

    timer->start(1000);  // call the callback function every 1000[ms]
}

void MyTimer::MySlot()
{
    qDebug() << "Timer executed";
}
