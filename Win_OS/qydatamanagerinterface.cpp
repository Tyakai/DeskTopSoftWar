#include "qydatamanagerinterface.h"
#include "qyxmlmanager.h"
QYDataManagerInterface::QYDataManagerInterface()
{

}

QYDataManagerInterface *QYDataManagerInterface::CreateObject(EM_DataSource data)
{
    switch (data) {
    case XMLDATA:
        return QYXMLManager::Instance();

    default:
        return nullptr;
    }
}
