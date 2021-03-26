#include "dialog.h"
#include "ui_dialog.h"
#include <QMessageBox>

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
    ui->lineEdit->setText("hello world");
    QMessageBox::information(this, "Title", ui->lineEdit->text());
}

void Dialog::on_pushButton_2_clicked()
{
    QMessageBox::information(this, "Password", ui->lineEdit_2->text());
}
