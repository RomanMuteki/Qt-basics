#include "exper.h"
#include "ui_exper.h"

exper::exper(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::exper)
{
    ui->setupUi(this);
}

exper::~exper()
{
    delete ui;
}

void exper::on_pushButton_2_clicked()
{

}

