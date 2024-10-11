#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "uberlator.h"
#include "auth.h"
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_callauthclicked();
    void on_uberlatorcallclicked();

private:
    Ui::MainWindow *ui;
    uberlator *uberlator;
    Auth *auth;
    QPushButton *call_calc;
    QPushButton *call_auth;
};
#endif // MAINWINDOW_H
