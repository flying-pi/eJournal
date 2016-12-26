import QtQuick 2.4
import QtQuick.Layouts 1.3
import QtQuick.Controls 1.4
import com.hpi.ejournal.AllStudentTable 1.0
import QtQuick.Controls.Styles 1.4


Item {
    width: 400
    height: 400

    property var itemView;


    TableView {
        id: tableView
        anchors.fill: parent

        model:AllStudentTable{
            id:dataProvider
        }

        TableViewColumn {
            id: firstNameColumn
            title: "Ім'я"
            role: "firstName"
            movable: false
            resizable: true
            delegate: Item{
                TextField {
                    id:nameField
                    anchors.centerIn: parent
                    text: styleData.value
                    style:TextFieldStyle {
                        textColor: "black"
                        background: Rectangle {
                            color: "#00000000"
                            border.color: "#00333333"
                            border.width: 0
                        }
                    }

                    onTextChanged: {
                        dataProvider.onFirstNameChange(styleData.row, nameField.text)
                    }
                }
            }

        }

        TableViewColumn {
            id: secondNameColumn
            title: "Фамілія"
            role: "secondName"
            movable: false
            resizable: true
            delegate: Item{
                TextField {
                    id:secondNameView
                    anchors.centerIn: parent
                    text: styleData.value
                    style: TextFieldStyle {
                        textColor: "black"
                        background: Rectangle {
                            color: "#00000000"
                            border.color: "#00333333"
                            border.width: 0
                        }
                    }
                    onTextChanged: {
                        dataProvider.onSecondNameChange(styleData.row, secondNameColumn.text)
                    }
                }
            }

        }

        TableViewColumn {
            id: fatherNameColumn
            title: "Побатькові"
            role: "fatherName"
            movable: false
            resizable: true
            delegate: Item{
                TextField {
                    id:fatherNameView
                    anchors.centerIn: parent
                    text: styleData.value
                    style: TextFieldStyle {
                        textColor: "black"
                        background: Rectangle {
                            color: "#00000000"
                            border.color: "#00333333"
                            border.width: 0
                        }
                    }
                    onTextChanged: {
                        dataProvider.onFatherNameChange(styleData.row, fatherNameView.text)
                    }
                }
            }

        }

        TableViewColumn {
            id: visitsColumn
            title: "Відвідування"
            role: "visits"
            movable: false
            resizable: true
            delegate: Item{
                TextField {
                    id:visitView
                    anchors.centerIn: parent
                    text: styleData.value
                    style: TextFieldStyle {
                        textColor: "black"
                        background: Rectangle {
                            color: "#00000000"
                            border.color: "#00333333"
                            border.width: 0
                        }
                    }
                    onTextChanged: {
                        dataProvider.onVisitsChanges(styleData.row, visitView.text)
                    }
                }
            }

        }

        TableViewColumn {
            id: isKontractColumn
            title: "Форма навчання"
            role: "isContract"
            movable: false
            resizable: true
            delegate:ComboBox {
                id: contractBox
                currentIndex:styleData.value
                model: [ "Бюджетна", "Контрактна" ]
                onCurrentIndexChanged: {
                    dataProvider.onIsContractChange(styleData.row, contractBox.currentIndex == 1)
                }
            }


        }

        TableViewColumn {
            id: studentBookColumn
            title: "Залікова книжка"
            role: "studentBook"
            movable: false
            resizable: true
            delegate: Item{
                TextField {
                    id:studentBookView
                    anchors.centerIn: parent
                    text: styleData.value
                    style: TextFieldStyle {
                        textColor: "black"
                        background: Rectangle {
                            color: "#00000000"
                            border.color: "#00333333"
                            border.width: 0
                        }
                    }
                    onTextChanged: {
                        dataProvider.onStudentBoockChanged(styleData.row, studentBookView.text)
                    }
                }
            }

        }

        TableViewColumn {
            id: courceNumColumn
            title: "Номер курсу"
            role: "courceNum"
            movable: false
            delegate: Item{
                TextField {
                    id:courceView
                    anchors.centerIn: parent
                    text: styleData.value
                    style: TextFieldStyle {
                        textColor: "black"
                        background: Rectangle {
                            color: "#00000000"
                            border.color: "#00333333"
                            border.width: 0
                        }
                    }
                    onTextChanged: {
                        dataProvider.onCourceNumChange(styleData.row, courceView.text)
                    }
                }
            }

            resizable: true
        }

        TableViewColumn {
            id: departamentNameColumn
            title: "Факультет"
            role: "departamentName"
            movable: false
            resizable: true
            delegate: Item{
                TextField {
                    id:departamentNameView
                    anchors.centerIn: parent
                    text: styleData.value
                    style: TextFieldStyle {
                        textColor: "black"
                        background: Rectangle {
                            color: "#00000000"
                            border.color: "#00333333"
                            border.width: 0
                        }
                    }
                    onTextChanged: {
                        dataProvider.onDepartamentChange(styleData.row, departamentNameView.text)
                    }
                }
            }

        }

        TableViewColumn {
            id: groupColumn
            title: "Група"
            role: "group"
            movable: false
            resizable: true
            delegate: Item{
                TextField {
                    id:gropView
                    anchors.centerIn: parent
                    text: styleData.value
                    style: TextFieldStyle {
                        textColor: "black"
                        background: Rectangle {
                            color: "#00000000"
                            border.color: "#00333333"
                            border.width: 0
                        }
                    }
                    onTextChanged: {
                        dataProvider.onGroupChange(styleData.row, gropView.text)
                    }
                }
            }

        }


        TableViewColumn {
            id: birthdayColumn
            title: "Дата народження"
            role: "birthday"
            movable: false
            resizable: true
            delegate: Item{
                TextField {
                    id:birthday
                    anchors.centerIn: parent
                    text: styleData.value
                    style: TextFieldStyle {
                        textColor: "black"
                        background: Rectangle {
                            color: "#00000000"
                            border.color: "#00333333"
                            border.width: 0
                        }
                    }
                    onTextChanged: {
                        dataProvider.onBirthdayChange(styleData.row, birthday.text)
                    }
                }
            }


        }

        TableViewColumn {
            id: bodyCheckColumn
            title: "Медогляд"
            role: "bodyCheck"
            movable: false
            resizable: true
            delegate: Item{
                TextField {
                    id:bodycheckView
                    anchors.centerIn: parent
                    text: styleData.value
                    style: TextFieldStyle {
                        textColor: "black"
                        background: Rectangle {
                            color: "#00000000"
                            border.color: "#00333333"
                            border.width: 0
                        }
                    }
                    onTextChanged: {
                        dataProvider.onBodyCheckChange(styleData.row, bodycheckView.text)
                    }
                }
            }

        }

        TableViewColumn {
            id: sportCategoryColumn
            title: "Категория"
            role: "sportCategory"
            movable: false
            resizable: true
            delegate:ComboBox {
                id: kategoryBox
                currentIndex:styleData.value
                model: [ "Відсутній", "Мастер спорут", "Кандидат в майтсри спорту","Перший розряж","Другий розряд","Третій розряд" ]
                onCurrentIndexChanged: {
                    dataProvider.onCategoryChange(styleData.row,kategoryBox.currentIndex)
                }
            }

        }

        TableViewColumn {
            id: isMaleColumn
            title: "Стать"
            role: "isMale"
            movable: false
            resizable: true
            delegate:ComboBox {
                id: genderBox
                currentIndex:styleData.value
                model: [ "Жіноча","Чоловіча"]
                onCurrentIndexChanged: {
                    dataProvider.onGenderChange(styleData.row,genderBox.currentIndex == 1)
                }
            }

        }
    }

}
