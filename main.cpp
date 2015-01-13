#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <qqmlcontext.h>
#include <QtQml>


#include <QApplication>
#include "serial.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);


    qmlRegisterType<SerialLog>("serial", 1, 0, "serialdata");



    QStringList dataList;
    dataList.append("Pointer");
    dataList.append("Skin");
    dataList.append("Dial");
    dataList.append("Calander");
    dataList.append("Rear Camera");
    dataList.append("Maps");
    dataList.append("Serial Input");
    dataList.append("Dummy Input");

    QQmlApplicationEngine engine;

    QQmlContext *ctxt1 =engine.rootContext();
    ctxt1->setContextProperty("myMenu", QVariant::fromValue(dataList));

    QApplication a(argc, argv);
    SerialLog w;
    engine.rootContext()->setContextProperty("w", &w);
    w.show();


    engine.load(QUrl(QStringLiteral("qrc:///main.qml")));


    return app.exec();
}
