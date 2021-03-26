#include <QCoreApplication>
#include <QDebug>
#include <QDir>
#include <QFileInfo>
#include <QString>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QDir mDir;
    QString mPath = "/home/robotis/test";
    if(!mDir.exists(mPath))
    {
        mDir.mkdir(mPath);
        qDebug() << "Created";
    }
    else
    {
        qDebug() << "Already exists";
    }

    QDir mDir2(mPath);
    foreach(QFileInfo mitm, mDir2.entryInfoList())
    {
        if(mitm.isDir()) qDebug() << "Dir: " << mitm.absoluteFilePath();
        if(mitm.isFile()) qDebug() << "File: " << mitm.absoluteFilePath();
    }

    return a.exec();
}
