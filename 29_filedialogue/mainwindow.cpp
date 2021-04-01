#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QDir>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    // To give absolute path
    // QString file_name = QFileDialog::getOpenFileName(this, "Open a file", "/home/robotis");

    // To give home path
    // QString file_name = QFileDialog::getOpenFileName(this, "Open a file", QDir::homePath());

    // To get existing directoy path
    QString file_name = QFileDialog::getExistingDirectory(this, "Get existing directory", QDir::homePath());

    QMessageBox::information(this, "File path", file_name);
}
