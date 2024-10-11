#include "auth.h"
#include "ui_auth.h"
#include <QLabel>
#include <QLineEdit>
#include <QGridLayout>
#include <QPushButton>
#include <QMessageBox>

Auth::Auth(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Auth)
{
    ui->setupUi(this);

    setWindowTitle("Authentification");
    setMinimumSize(200, 120);

    QLabel *login_lab = new QLabel("Login:", this);
    QLabel *passw_lab = new QLabel("Password:", this);
    login_inp = new QLineEdit(this);
    passw_inp = new QLineEdit(this);
    QPushButton *confirm = new QPushButton("Log in", this);

    QGridLayout *layout = new QGridLayout;
    layout->addWidget(login_lab, 0, 0);
    layout->addWidget(passw_lab, 1, 0);
    layout->addWidget(login_inp, 0, 1);
    layout->addWidget(passw_inp, 1, 1);
    layout->addWidget(confirm, 2, 0, 2, 2);

    window()->setLayout(layout);

    QObject::connect(confirm, SIGNAL(clicked()), this, SLOT(confirm_isclicked()));

}

Auth::~Auth()
{
    delete ui;
}

void Auth::confirm_isclicked(){
    if (passw_inp->text() == "admin" && passw_inp->text() == "admin"){
        emit authentificated(true);
        QMessageBox success;
        success.about(this, "Введён верный пароль", "Можете открывать überлятор");
        accept();
    }
    else{
        QMessageBox fail;
        fail.warning(this, "Введён неверный пароль", "Все ваши данные будут удалены через одну минуту.");
    }
}
