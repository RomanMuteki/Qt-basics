#include "mainwindow.h"
#include "auth.h"
#include "uberlator.h"
#include "./ui_mainwindow.h"
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    setWindowTitle("SemiBase window");
    setMinimumSize(200, 150);

    call_auth = new QPushButton("Авторизоваться", this);
    call_calc = new QPushButton("Активировать überлятор", this);
    call_calc->setEnabled(false);

    QObject::connect(call_auth, SIGNAL(clicked()), this, SLOT(on_callauthclicked()));
    QObject::connect(call_calc, SIGNAL(clicked()), this, SLOT(on_uberlatorcallclicked()));

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(call_auth);
    layout->addWidget(call_calc);

    QWidget *centralWidget = new QWidget(this);
    centralWidget->setLayout(layout);
    setCentralWidget(centralWidget);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_callauthclicked(){
    Auth auth;
    auth.setModal(true);
    QObject::connect(&auth, SIGNAL(authentificated(bool)), call_calc, SLOT(setEnabled(bool)));
    auth.exec();
}
void MainWindow::on_uberlatorcallclicked(){
    class uberlator uberlator;
    uberlator.setModal(true);
    uberlator.exec();
}
