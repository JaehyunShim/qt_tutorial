#include <QApplication>
#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget *window = new QWidget;
    window->setWindowTitle("My App");

    QGridLayout *layout =new QGridLayout;

    QLabel *label = new QLabel("Name:");
    QLineEdit *txtName = new QLineEdit;

    QLabel *label2 = new QLabel("Name:");
    QLineEdit *txtName2 = new QLineEdit;

    QPushButton *button =new QPushButton("OK");

    layout->addWidget(label,0,0);
    layout->addWidget(txtName,0,1);

    layout->addWidget(label2,1,0);
    layout->addWidget(txtName2,1,1);

    layout->addWidget(button,2,0,1,2);

    window->setLayout(layout);

    window->show();
    return app.exec();
}
