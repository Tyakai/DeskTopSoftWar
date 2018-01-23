#ifndef QYTIPDIALOG_H
#define QYTIPDIALOG_H

#include <QDialog>
#include <QEvent>
#include "windows.h"

namespace Ui {
class QYTipDialog;
}

class QYTipDialog : public QDialog
{
    Q_OBJECT

public:
    explicit QYTipDialog(QWidget *parent = 0);
    ~QYTipDialog();
protected:
    void hideEvent(QHideEvent *event);

private:
//    BOOL enumUserWindowsCB(HWND hwnd,LPARAM lParam);
//    HWND findDesktopIconWnd();
//    void set_parent();//寻找桌面ID
    Ui::QYTipDialog *ui;
};

#endif // QYTIPDIALOG_H
