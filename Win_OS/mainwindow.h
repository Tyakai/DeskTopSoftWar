#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSystemTrayIcon>
#include <qytipdialog.h>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
private:
    Ui::MainWindow *ui;
    QVector<QYTipDialog*> dialog_vector;
private slots:
    void create_widget();
};


#endif // MAINWINDOW_H
