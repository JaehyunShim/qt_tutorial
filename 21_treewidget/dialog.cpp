#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    ui->treeWidget->setColumnCount(2);
    // ui->treeWidget->setHeaderLabel("one");
    ui->treeWidget->setHeaderLabels(QStringList() << "one" << "two");

    AddRoot("1_Hello", "World");
    AddRoot("2_Hello", "World");
    AddRoot("3_Hello", "World");
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::AddRoot(QString name, QString Description)
{
    QTreeWidgetItem *itm = new QTreeWidgetItem();
    itm->setText(0, name);
    itm->setText(1, Description);
    ui->treeWidget->addTopLevelItem((itm));

    AddChild(itm, "one", "hello");
    AddChild(itm, "two", "world");
}

void Dialog::AddChild(QTreeWidgetItem *parent, QString name, QString Description)
{
    QTreeWidgetItem *itm = new QTreeWidgetItem();
    itm->setText(0, name);
    itm->setText(1, Description);
    parent->addChild(itm);
}

void Dialog::on_pushButton_clicked()
{
    ui->treeWidget->currentItem()->setBackgroundColor(0, Qt::red);
    ui->treeWidget->currentItem()->setBackgroundColor(1, Qt::blue);
}
