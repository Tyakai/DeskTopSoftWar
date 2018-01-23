#include "qyxmlmanager.h"


QYXMLManager* QYXMLManager::xml_manager = nullptr;
QYXMLManager *QYXMLManager::Instance()
{
    if(!xml_manager)
        xml_manager = new QYXMLManager;
    return xml_manager;
}

QYXMLManager::QYXMLManager()
{

}
