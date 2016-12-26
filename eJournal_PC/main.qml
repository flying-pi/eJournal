import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Controls.Material 2.0
import QtQuick.Layouts 1.0
import QtQuick.Window 2.1

QtObject {
    property var addStudent:Window{

        width: 460
        height: 480
        AddStudents{}
        visible:false
    }

    property var allStudent:Window{

        width: 700
        height: 900
        AllStudentList{
            width: parent.width
            height: parent.height
        }
        visible:true
    }



    property var allWindow: []
}
