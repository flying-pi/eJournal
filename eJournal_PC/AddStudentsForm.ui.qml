import QtQuick 2.4
import QtQuick.Layouts 1.3
import QtQuick.Controls 2.0
import com.hpi.ejournal 1.0



Item {
    height: 700

    property alias saveBtn: saveBtn
    property alias createStudentObject: createStudentObject

    CreateStudentForm {
        id: createStudentObject
        firstName: firstName.text
        secondName: secondName.text
        fatherName: fatherName.text
    }

    Button {
        id: saveBtn
        text: qsTr("Зберегти результати")
        anchors.right: grid1.right
        anchors.rightMargin: 0
        anchors.top: grid1.bottom
        anchors.topMargin: 15
    }

    Button {
        id: cancelBtn
        text: qsTr("Відмінити")
        anchors.right: saveBtn.left
        anchors.rightMargin: 10
        anchors.top: saveBtn.top
        anchors.topMargin: 0
    }

    Grid {
        id: grid1
        property int labelSize: 14
        verticalItemAlignment: Grid.AlignVCenter
        spacing: 5
        columns: 2
        anchors.left: parent.left
        anchors.leftMargin: 10
        anchors.top: parent.top
        anchors.topMargin: 10

        Text {
            id: secondNameLabel
            text: qsTr("Фамілія")
            transformOrigin: Item.Center
            wrapMode: Text.WordWrap
            opacity: 0.9
            font.pixelSize: grid1.labelSize
        }

        TextField {
            id: secondName
            width: 300
            antialiasing: true
            transformOrigin: Item.Left
            placeholderText:qsTr("Фамілія")
            font.pixelSize: 0

        }

        Text {
            id: firstNameLabel
            text: qsTr("Ім'я")
            wrapMode: Text.WordWrap
            opacity: 0.9
            font.pixelSize: grid1.labelSize
        }

        TextField {
            id: firstName
            width: 300
            font.pixelSize: grid1.labelSize
            placeholderText:qsTr("Ім'я")
        }


        Text {
            id: fatherNameLabel
            text: qsTr("Побатькові")
            wrapMode: Text.WordWrap
            opacity: 0.9
            font.pixelSize: grid1.labelSize
        }

        TextField {
            id: fatherName
            width: 300
            font.pixelSize: grid1.labelSize
            placeholderText:qsTr("Побатькові")
        }

        Text {
            id: formLabel
            text: qsTr("Форма навчання")
            font.pixelSize: grid1.labelSize
            wrapMode: Text.WordWrap
            opacity: 0.9
        }
        RowLayout {
            height: 20
            transformOrigin: Item.Left
            spacing: 0
            scale: 0.55
            RadioButton {
                x: 0
                width: 127
                font.pixelSize: 30
                height: 20
                text: "Денна"
                antialiasing: true
                leftPadding: 0
                spacing: 6
                Layout.preferredHeight: 20
                Layout.maximumHeight: 20
                checked: true
            }
            RadioButton {
                font.pixelSize: 30
                height: 20
                text: "Заочна"
                Layout.preferredHeight: 20
                Layout.maximumHeight: 20
                bottomPadding: 0
                rightPadding: 0
                leftPadding: 6
                topPadding: 0
            }
        }
        Text {
            text: qsTr("Залікова книжка")
            transformOrigin: Item.Center
            wrapMode: Text.WordWrap
            opacity: 0.9
            font.pixelSize: grid1.labelSize
        }

        TextField {
            id: recordBookID
            width: 300
            antialiasing: true
            transformOrigin: Item.Left
            placeholderText:qsTr("Залікова книжка")
            font.pixelSize: 0

        }

        Text {
            text: qsTr("Номер курсу")
            transformOrigin: Item.Center
            wrapMode: Text.WordWrap
            opacity: 0.9
            font.pixelSize: grid1.labelSize
        }

        TextField {
            id: cource
            width: 300
            antialiasing: true
            transformOrigin: Item.Left
            placeholderText:qsTr("Залікова книжка")
            font.pixelSize: 0

        }
        Text {
            text: qsTr("Назва факультету")
            transformOrigin: Item.Center
            wrapMode: Text.WordWrap
            opacity: 0.9
            font.pixelSize: grid1.labelSize
        }

        TextField {
            id: department
            width: 300
            antialiasing: true
            transformOrigin: Item.Left
            placeholderText:qsTr("Назва факультету")
            font.pixelSize: 0
        }
        Text {
            text: qsTr("Група")
            transformOrigin: Item.Center
            wrapMode: Text.WordWrap
            opacity: 0.9
            font.pixelSize: grid1.labelSize
        }

        TextField {
            id: group
            width: 300
            antialiasing: true
            transformOrigin: Item.Left
            placeholderText:qsTr("Група")
            font.pixelSize: 0
        }

        Text {
            text: qsTr("День народження")
            transformOrigin: Item.Center
            wrapMode: Text.WordWrap
            opacity: 0.9
            font.pixelSize: grid1.labelSize
        }

        TextField {
            id: birthday
            width: 300
            antialiasing: true
            transformOrigin: Item.Left
            placeholderText:qsTr("День народження в форматі день.місяць.рік")
            font.pixelSize: 0
        }

        Text {
            text: qsTr("Меодогляд")
            transformOrigin: Item.Center
            wrapMode: Text.WordWrap
            opacity: 0.9
            font.pixelSize: grid1.labelSize
        }

        TextField {
            id: bodyCheck
            width: 300
            antialiasing: true
            transformOrigin: Item.Left
            placeholderText:qsTr("медичний огляд")
            font.pixelSize: 0
        }

        Text {
            text: qsTr("Стать")
            transformOrigin: Item.Center
            wrapMode: Text.WordWrap
            opacity: 0.9
            font.pixelSize: grid1.labelSize
        }

        RowLayout {
            height: 20
            transformOrigin: Item.Left
            spacing: 0
            scale: 0.55
            RadioButton {
                x: 0
                width: 127
                font.pixelSize: 30
                height: 20
                text: "Чоловіча"
                antialiasing: true
                leftPadding: 0
                spacing: 6
                Layout.preferredHeight: 20
                Layout.maximumHeight: 20
                checked: true
            }
            RadioButton {
                font.pixelSize: 30
                height: 20
                text: "Жіноча"
                Layout.preferredHeight: 20
                Layout.maximumHeight: 20
                bottomPadding: 0
                rightPadding: 0
                leftPadding: 6
                topPadding: 0
            }
        }
        Text {
            text: qsTr("Спортивний розряд")
            transformOrigin: Item.Center
            wrapMode: Text.WordWrap
            opacity: 0.9
            font.pixelSize: grid1.labelSize
        }

        ComboBox {
            id: sports_category
            transformOrigin: Item.Left
            scale: 1
            model: [ "Відсутній", "Мастер спорут", "Кандидат в майтсри спорту","Перший розряж","Другий розряд","Третій розряд" ]
        }


    }



}
