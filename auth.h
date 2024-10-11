#ifndef AUTH_H
#define AUTH_H

#include <QDialog>
#include <QLineEdit>

namespace Ui {
class Auth;
}

class Auth : public QDialog
{
    Q_OBJECT

public:
    explicit Auth(QWidget *parent = nullptr);
    ~Auth();

signals:
    void authentificated(bool);

private slots:
    void confirm_isclicked();

private:
    Ui::Auth *ui;
    QLineEdit *passw_inp;
    QLineEdit *login_inp;
};

#endif // AUTH_H
