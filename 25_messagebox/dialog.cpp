#include "dialog.h"
#include "ui_dialog.h"
#include <QtWidgets>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    // Info
    QMessageBox::information(this, "Title Here", "Text Here");
}

void Dialog::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Title Here", "Do you like cats?", QMessageBox::Yes | QMessageBox::No);

    if(reply == QMessageBox::Yes)
    {
        QMessageBox::information(this, "Title Here", "You love cats!");
    }
}

void Dialog::on_pushButton_3_clicked()
{
    QMessageBox::warning(this, "Title Here", "Text Here");
}

void Dialog::on_pushButton_4_clicked()
{
    QMessageBox::StandardButton reply;
    QMessageBox::question(this, "Title Here", "My Text here?", QMessageBox::YesToAll | QMessageBox::Yes | QMessageBox::No | QMessageBox::NoToAll);

    // you can do if-else as you did in on_pushButton_2_clicked()
}
