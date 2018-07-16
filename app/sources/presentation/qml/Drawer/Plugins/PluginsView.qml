import QtQuick 2.6
import QtQuick.Layouts 1.3

import "qrc:/Controls" as Controls

ColumnLayout {
    id: root
    spacing: sizings.spacing

    Controls.Label {
        text: qsTr("Plugins")
        Layout.alignment: Qt.AlignHCenter
    }
}