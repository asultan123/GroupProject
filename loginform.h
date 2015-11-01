#ifndef LOGINFORM_H
#define LOGINFORM_H

#include <QWidget>
#include "hashtable.h"
#include "mainwindow.h"

namespace Ui {
class LoginForm;
}

class LoginForm : public QWidget
{
    Q_OBJECT

public:
    explicit LoginForm(QWidget *parent = 0);
    ~LoginForm();

private slots:
    void on_LoginButton_clicked();

    void on_PasswordEdit_returnPressed();

private:
    Ui::LoginForm *ui;
    MainWindow* parentFrame;
    hashTable<QString,QString> database;
};

#endif // LOGINFORM_H
