#ifndef EXPER_H
#define EXPER_H

#include <QDialog>

namespace Ui {
class exper;
}

class exper : public QDialog
{
    Q_OBJECT

public:
    explicit exper(QWidget *parent = nullptr);
    ~exper();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::exper *ui;
};

#endif // EXPER_H
