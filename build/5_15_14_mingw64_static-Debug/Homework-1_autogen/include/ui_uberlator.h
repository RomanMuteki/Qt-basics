/********************************************************************************
** Form generated from reading UI file 'uberlator.ui'
**
** Created by: Qt User Interface Compiler version 5.15.14
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UBERLATOR_H
#define UI_UBERLATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_uberlator
{
public:

    void setupUi(QDialog *uberlator)
    {
        if (uberlator->objectName().isEmpty())
            uberlator->setObjectName(QString::fromUtf8("uberlator"));
        uberlator->resize(400, 300);

        retranslateUi(uberlator);

        QMetaObject::connectSlotsByName(uberlator);
    } // setupUi

    void retranslateUi(QDialog *uberlator)
    {
        uberlator->setWindowTitle(QCoreApplication::translate("uberlator", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class uberlator: public Ui_uberlator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UBERLATOR_H
