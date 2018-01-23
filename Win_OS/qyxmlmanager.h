#ifndef QYXMLMANAGER_H
#define QYXMLMANAGER_H

#include "qydatamanagerinterface.h"
class QYXMLManager:public QYDataManagerInterface
{
public:
    static QYXMLManager* Instance();
private:
    QYXMLManager();
    static QYXMLManager* xml_manager;


};

#endif // QYXMLMANAGER_H
