#include "uberlator.h"
#include "qregularexpression.h"
#include "ui_uberlator.h"
#include <QGridLayout>
#include <QPushButton>
#include <QLabel>
#include <QMessageBox>

uberlator::uberlator(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::uberlator)
{
    display = new QLineEdit(this);
    display->setReadOnly(true);
    display->setAlignment(Qt::AlignCenter);
    display->setFixedHeight(30);

    QGridLayout *layout = new QGridLayout(this);
    layout->addWidget(display, 0, 0, 1, 4);

    const QString buttonTexts[4][4] = {
        {"7", "8", "9", "/"},
        {"4", "5", "6", "*"},
        {"1", "2", "3", "-"},
        {"0", "C", "=", "+"}
    };

    for (int row = 0; row < 4; ++row) {
        for (int col = 0; col < 4; ++col) {
            QPushButton *button = new QPushButton(buttonTexts[row][col], this);
            layout->addWidget(button, row + 1, col);
            if (buttonTexts[row][col] == "C") {
                connect(button, &QPushButton::clicked, this, &uberlator::clear);
            } else if (buttonTexts[row][col] == "=") {
                connect(button, &QPushButton::clicked, this, &uberlator::calculate);
            } else if (buttonTexts[row][col].contains(QRegularExpression("[*/+-]"))) {
                connect(button, &QPushButton::clicked, this, &uberlator::operatorClicked);
            } else {
                connect(button, &QPushButton::clicked, this, &uberlator::numberClicked);
            }
        }
    }

    setLayout(layout);
    setWindowTitle("überлятор");
    setMinimumSize(250, 200);
}

uberlator::~uberlator()
{
    delete ui;
}

void uberlator::numberClicked() {
    QPushButton *button = qobject_cast<QPushButton *>(sender());
    if (button) {
        if (waitingForOperand) {
            display->clear();
            waitingForOperand = false;
        }
        display->setText(display->text() + button->text());
    }
}

void uberlator::operatorClicked() {
    QPushButton *button = qobject_cast<QPushButton *>(sender());
    if (button) {
        if (!waitingForOperand) {
            firstNumber = display->text().toDouble();
            currentOperation = button->text();
            waitingForOperand = true;
        }
    }
}

void uberlator::calculate() {
    if (waitingForOperand) return;

    double secondNumber = display->text().toDouble();
    double result = 0;

    if (currentOperation == "+") {
        result = firstNumber + secondNumber;
    } else if (currentOperation == "-") {
        result = firstNumber - secondNumber;
    } else if (currentOperation == "*") {
        result = firstNumber * secondNumber;
    } else if (currentOperation == "/") {
        if (secondNumber == 0) {
            QMessageBox::warning(this, "Ошибка", "Деление на ноль!");
            return;
        }
        result = firstNumber / secondNumber;
    }

    display->setText(QString::number(result));
    waitingForOperand = true;
}

void uberlator::clear() {
    display->clear();
    firstNumber = 0;
    currentOperation.clear();
    waitingForOperand = true;
}
