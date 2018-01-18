#ifndef QYSYSTEMTRAYICON_H
#define QYSYSTEMTRAYICON_H

#include <QObject>
#include <QSystemTrayIcon>

enum EM_TrayIconEvent
{
    em_TrayIconEvent_ShowWindow,
    em_TrayIconEvent_HideWindow,
    em_TrayIconEvent_Quit
};


class QYSystemTrayIcon : public QObject
{
    Q_OBJECT
public:
    explicit QYSystemTrayIcon(QObject *parent = nullptr);

signals:
    void tray_icon_event(int nType);
public slots:
    void tray_icon_active(QSystemTrayIcon::ActivationReason reason);
    void tray_icon_menu_triggered(QAction *action);
private:
    QSystemTrayIcon *tray_icon;
};

#endif // QYSYSTEMTRAYICON_H
