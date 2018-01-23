#include "qytipdialog.h"
#include "ui_qytipdialog.h"
#include <QEvent>
#include <QHideEvent>
#include <QDebug>
#include "windows.h"
#include "qwindowdefs_win.h"

QYTipDialog::QYTipDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QYTipDialog)
{
    ui->setupUi(this);
//    setWindowFlag(Qt::FramelessWindowHint,true);
    setWindowFlag(Qt::Sheet,true);
    setWindowFlag(Qt::WindowStaysOnBottomHint,true);
    setWindowFlag(Qt::WindowCloseButtonHint,false);
}

QYTipDialog::~QYTipDialog()
{
    delete ui;
}

void QYTipDialog::hideEvent(QHideEvent *event)
{
    return;
}




