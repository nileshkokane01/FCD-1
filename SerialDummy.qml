import QtQuick 2.1

FocusScope{
    focus: true
    Keys.onSpacePressed:cluster.dummySerialselect=!cluster.dummySerialselect
}
