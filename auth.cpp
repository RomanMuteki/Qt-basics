#include "auth.h"
#include "ui_auth.h"
#include <QLabel>
#include <QLineEdit>
#include <QGridLayout>
#include <QPushButton>

Auth::Auth(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Auth)
{
    ui->setupUi(this);

    setWindowTitle("Authentification");
    setMinimumSize(200, 120);

    QLabel *login_lab = new QLabel("Login:");
    QLabel *passw_lab = new QLabel("Password:");
    QLineEdit *login_inp = new QLineEdit();
    QLineEdit *passw_inp = new QLineEdit();
    QPushButton *confirm = new QPushButton("Log in");

    QGridLayout *layout = new QGridLayout;
    layout->addWidget(login_lab, 0, 0);
    layout->addWidget(passw_lab, 1, 0);
    layout->addWidget(login_inp, 0, 1);
    layout->addWidget(passw_inp, 1, 1);
    layout->addWidget(confirm, 2, 0, 2, 2);

    window()->setLayout(layout);
}

Auth::~Auth()
{
    delete ui;
}
