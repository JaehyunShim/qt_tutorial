#include <QCoreApplication>
#include <QFile>
#include <QString>
#include <QDebug>
#include <QTextStream>
#include <QResource>

void Read(QString Filename)
{
    QFile mFile(Filename);

    if(!mFile.open(QFile::ReadOnly | QFile::Text))
    {
        qDebug() << "Could not open file for reading";
        return;
    }

    QTextStream in(&mFile);
    QString mText = in.readAll();

    qDebug() << mText ;

    mFile.close();

}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Read(":/MyFiles/13_resource_file.pro");

    return a.exec();
}
