#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QApplication"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    liczniki = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->label_2->setText(QString::number(++liczniki));
}


void MainWindow::on_pushButton_clicked()
{
   close();
}


void MainWindow::on_actionZamknij_triggered()
{
   close();
}


void MainWindow::on_actionO_Qt_triggered()
{
   QApplication::aboutQt();
}


