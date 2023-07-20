#ifndef MAINWINDOWPROJECT2_H
#define MAINWINDOWPROJECT2_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindowProject2; }
QT_END_NAMESPACE

class MainWindowProject2 : public QMainWindow
{
    Q_OBJECT

public:
    MainWindowProject2(QWidget *parent = nullptr);
    ~MainWindowProject2();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindowProject2 *ui;
};
#endif // MAINWINDOWPROJECT2_H
