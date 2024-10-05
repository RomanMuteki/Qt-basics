#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QGridLayout>
#include <QTextEdit>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("SemiBase window");
    setMinimumSize(300, 250);

    QPushButton *call_auth = new QPushButton("Авторизоваться", this);
    call_auth->setGeometry(120, 120, 120, 36);
    call_auth->show();

}

MainWindow::~MainWindow()
{
    delete ui;
}
