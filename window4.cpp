#include "window4.h"
#include "ui_window4.h"

window4::window4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::window4)
{
    ui->setupUi(this);
}

window4::~window4()
{
    delete ui;
}
