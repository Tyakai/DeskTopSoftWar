#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QDialog>
#include "windows.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    dialog_vector.clear();
    QObject::connect(ui->pushButton_newWidget,&QPushButton::clicked,
                     this,&MainWindow::create_widget);
}

MainWindow::~MainWindow()
{
    for(int i=0;i<dialog_vector.count();++i)
    {
        QYTipDialog *dialog = dialog_vector.at(i);
        if(dialog)
            delete(dialog);
        dialog = nullptr;
    }
    delete ui;
}

void MainWindow::create_widget()
{
    QYTipDialog *widget = new QYTipDialog();
    if(!widget) return;
    widget->show();
    qDebug()<<QString("click");
    dialog_vector.append(widget);
}
