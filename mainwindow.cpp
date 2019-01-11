#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string.h>
#include <QMessageBox>
#include <QDebug> //for print some information to console



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

    QString strQ = "And you hello!";
       //attention! Objects can added to UI not right away
        // if u can see any created objects - build project

    ui->label->setText(strQ);

}

void MainWindow::on_pushButton_2_clicked()
{
    //create variable "Standart button"
    QMessageBox::StandardButton testButton = QMessageBox::question
            (this,"Window", "Do u want to close the application? ", QMessageBox::Yes | QMessageBox::No);
    if(testButton == QMessageBox::Yes)
    {QApplication::quit();}
    else
    {
        qDebug() << "Botton was pressed";
    }
}
