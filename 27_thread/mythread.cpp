#include "mythread.h"
#include <QDebug>

MyThread::MyThread() : Stop(false)
{

}

void MyThread::run()
{
    qDebug() << this->name << "Running";

    for(int i = 0; i < 1000; i++)
    {
        // Prevent multiple threads from accessing the same variable at the same time
        QMutex mutex;
        mutex.lock();
        if(this->Stop)
        {
            break;
        }
        mutex.unlock();
        this->sleep(1); // slow down so GUi can keep up with the thread speed
        qDebug() << this->name << i;
    }
}
