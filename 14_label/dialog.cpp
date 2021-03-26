#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->label_2->setText("<b>Hello</b> everyone");
}

Dialog::~Dialog()
{
    delete ui;
}
