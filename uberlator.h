#ifndef UBERLATOR_H
#define UBERLATOR_H

#include <QDialog>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QGridLayout>
#include <QVBoxLayout>

namespace Ui {
class uberlator;
}

class uberlator : public QDialog
{
    Q_OBJECT

public:
    uberlator(QWidget *parent = nullptr);
    ~uberlator();

private:
    Ui::uberlator *ui;
    /*QPushButton *addButton;
    QPushButton *subsButton;
    QPushButton *divButton;
    QPushButton *multButton;
    QPushButton *delButton;
    QPushButton *doitButton;

    QPushButton *b0;
    QPushButton *b1;
    QPushButton *b2;
    QPushButton *b3;
    QPushButton *b4;
    QPushButton *b5;
    QPushButton *b6;
    QPushButton *b7;
    QPushButton *b8;
    QPushButton *b9;

    QLabel *num1;
    QLabel *num2;
    QLabel *action;
    QLabel *result;*/
    QLineEdit *display;
    QString currentOperation;
    double firstNumber;
    bool waitingForOperand;

private slots:
    void numberClicked();
    void operatorClicked();
    void calculate();
    void clear();
};

#endif // UBERLATOR_H
