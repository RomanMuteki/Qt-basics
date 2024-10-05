/********************************************************************************
** Form generated from reading UI file 'exper.ui'
**
** Created by: Qt User Interface Compiler version 5.15.14
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPER_H
#define UI_EXPER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_exper
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *exper)
    {
        if (exper->objectName().isEmpty())
            exper->setObjectName(QString::fromUtf8("exper"));
        exper->resize(400, 300);
        gridLayoutWidget = new QWidget(exper);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 401, 301));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1, Qt::AlignmentFlag::AlignHCenter);

        lineEdit_2 = new QLineEdit(gridLayoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);

        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1, Qt::AlignmentFlag::AlignVCenter);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1, Qt::AlignmentFlag::AlignHCenter);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 2, 1, 1, 1, Qt::AlignmentFlag::AlignHCenter);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 2, 0, 1, 1);


        retranslateUi(exper);

        QMetaObject::connectSlotsByName(exper);
    } // setupUi

    void retranslateUi(QDialog *exper)
    {
        exper->setWindowTitle(QCoreApplication::translate("exper", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("exper", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        label->setText(QCoreApplication::translate("exper", "\320\230\320\274\321\217", nullptr));
        pushButton_2->setText(QCoreApplication::translate("exper", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        pushButton->setText(QCoreApplication::translate("exper", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class exper: public Ui_exper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPER_H
