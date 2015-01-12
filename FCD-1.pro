TEMPLATE = app

QT += qml quick gui serialport widgets

SOURCES += main.cpp \
    serial.cpp \
    console.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)

HEADERS += \
    serial.h \
    console.h
