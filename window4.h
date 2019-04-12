#ifndef WINDOW4_H
#define WINDOW4_H

#include <QDialog>

namespace Ui {
class window4;
}

class window4 : public QDialog
{
    Q_OBJECT

public:
    explicit window4(QWidget *parent = 0);
    ~window4();

private:
    Ui::window4 *ui;
};

#endif // WINDOW4_H
