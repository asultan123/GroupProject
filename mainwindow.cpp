#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <iostream>
#include <QFont>


using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->AdminFrame->setVisible(false);
    ui->MainFrame->setVisible(false);
    ui->Login->setVisible(true);
    ui->Login->setEnabled(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionOpen_triggered()
{
    QUrl filePath = QFileDialog::getOpenFileUrl(this,tr("Select a file"),QDir::homePath());
    if(filePath.toString()!=""){
        ui->DirectoryLabel->setText((QString)"Current directory: "
                                ""+filePath.toString());
        QFont font;
        font.setBold(true);
        ui->DirectoryLabel->setFont(font);
    }
}

void MainWindow::on_actionQuit_triggered()
{
      qApp->quit();
}

void MainWindow::on_LoginButton_clicked()
{
    ui->AdminFrame->setVisible(true);
    ui->MainFrame->setVisible(true);
    ui->Login->setVisible(false);
}
