#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>
#include "window3.h"
#include "window4.h"




MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/res/Home.png");
    int w = ui->pic->width();
    int h = ui->pic->height();

    ui->pic->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString login = ui->login->text();
    QString password = ui->pas->text();

    if(login == "Codi" && password == "test") {
        //QMessageBox::information(this, "Регистрация","Вы успешло зарегистрировались!");
        ui->statusBar->showMessage("Вы успешло зарегистрировались!");
    }
       else {
        //QMessageBox::warning(this, "Регистрация","Вы не зарегистрировались!");
        ui->statusBar->showMessage("Вы не зарегистрировались!");
    }

}

void MainWindow::on_mwind_clicked()
{
    window3 wind;
    wind.setModal(true);
    wind.exec();
}

void MainWindow::on_action_triggered()
{
    /*window4 wind4;
    wind4.setModal(true);
    wind4.exec();*/
}

void MainWindow::on_action_2_triggered()
{
/*    window5 wind5;
    wind5.setModal(true);
    wind5.exec();
*/}

void MainWindow::on_action_3_triggered()
{

}

void MainWindow::on_action_4_triggered()
{

}

void MainWindow::on_action_5_triggered()
{

}

void MainWindow::on_action_6_triggered()
{

}

void MainWindow::on_action_7_triggered()
{
     QApplication::quit();
}
