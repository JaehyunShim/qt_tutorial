#include "mythread.h"
#include <QtCore>

MyThread::MyThread(QObject *parent)
    : QThread(parent), Stop(false)
{

}

void MyThread::run()
{
    for(int i = 0; i < 10000; i++)
    {
        QMutex mutex;
        mutex.lock();
        if(this->Stop) break;
        mutex.unlock();
        this->msleep(100); // slow down so GUi can keep up with the thread speed

        emit NumberChanged(i);
    }
}
