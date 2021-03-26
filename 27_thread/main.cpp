#include <QCoreApplication>
#include <mythread.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyThread mThread1;
    mThread1.name = "mThread1";
    MyThread mThread2;
    mThread2.name = "mThread2";
    MyThread mThread3;
    mThread3.name = "mThread3";

    // Normal run
    // mThread1.start();
    // mThread2.start();
    // mThread3.start();

    // Normal run
    // mThread1.start();
    // mThread2.start();
    // mThread3.start();

    // Priority (Should test with faster loop rate)
    // mThread1.start();
    // mThread2.start(QThread::LowestPriority);
    // mThread3.start(QThread::HighestPriority);

    // Mutex
    mThread1.start();
    mThread1.Stop = true;

    return a.exec();
}
