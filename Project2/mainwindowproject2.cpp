#include "mainwindowproject2.h"
#include "ui_mainwindowproject2.h"

MainWindowProject2::MainWindowProject2(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindowProject2)
{
    ui->setupUi(this);
}

MainWindowProject2::~MainWindowProject2()
{
    delete ui;
}


void MainWindowProject2::on_pushButton_clicked()
{
    qDebug("Project2");
}

