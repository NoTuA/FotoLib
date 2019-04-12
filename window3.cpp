#include "window3.h"
#include "window4.h"
#include "ui_window3.h"
#include <QApplication>

window3::window3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::window3)
{
    ui->setupUi(this);
    QListWidgetItem *item_1 = new QListWidgetItem(QIcon(":/res/exit_filled-100.png"),"1");
    ui->listWidget->addItem(item_1);
    QListWidgetItem *item_2 = new QListWidgetItem(QIcon(":/res/camera-96.png"),"2");
    ui->listWidget->addItem(item_2);
    QListWidgetItem *item_3 = new QListWidgetItem(QIcon(":/res/delete.png"),"3");
    ui->listWidget->addItem(item_3);
    QListWidgetItem *item_4 = new QListWidgetItem(QIcon(":/res/Home.png"),"4");
    ui->listWidget->addItem(item_4);

}

window3::~window3()
{
    delete ui;
}

void window3::on_pushButton_clicked()
{
    window4 wind4;
    wind4.setModal(true);
    wind4.exec();
}
