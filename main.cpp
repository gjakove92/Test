#include "MainWindow.h"
#include <QApplication>
#include <QDebug>
#include <QtTest/QtTest>
#include <TestMainWindow.h>

using namespace std;
#include <iostream>

void runAllTestClasses(int argc, char *argv[])
{
    int status = 0;
    auto ASSERT_TEST = [&status, argc, argv](QObject* obj) {
        status |= QTest::qExec(obj, argc, argv);
        delete obj;
    };

    //ASSERT_TEST (new TestMainWindow());
    TestMainWindow testMainWindow;
    QTest::qExec(&testMainWindow);
}

int main(int argc, char *argv[])
{

    runAllTestClasses(argc, argv);
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    //a.exit();
    //return 0;
    return a.exec();

//    // AZ XXX diese Funktion (wenn sinnvoll moeglich) unterteilen
//    double focus_mA = 2060.73;
//    double centringX_mA = 194.49;
//    double centringY_mA = -109.99;
//    double stigmatizationX_mA = 194.66;
//    double stigmatizationY_mA = -165.32;
//    double formFactor_Actual = 98.76;

//    QFile data("C:/Users/pro-beam/Desktop/Testfile.txt");

//    if (data.open(QFile::Append))
//    {
//        QTextStream out(&data);
//        QString currentDateTime =
//                QDateTime::currentDateTime().toString(
//                    "dd.MM.yyyy  hh:mm:ss");

//        double beamCurrent_mA = 5.0;

//        double biasVoltage_V = 0.0;

//        QString userName = "StandardUser";

//        int fieldWidthBiasVoltage_V = 8;
//        int fieldWidthBeamCurrent_mA = 7;
//        int fieldWidthFocus_mA = 9;
//        int fieldWidthCentringX_mA = 8;
//        int fieldWidthCentringY_mA = 8;
//        int fieldWidthStigmatizationX_mA = 8;
//        int fieldWidthStigmatizationY_mA = 8;
//        int fieldWidthFormFactor_Actual = 8;

//        int precisionBiasVoltage_V = 1;
//        int precisionBeamCurrent_mA = 1;
//        int precisionFocus_mA = 2;
//        int precisionCentringX_mA = 2;
//        int precisionCentringY_mA = 2;
//        int precisionStigmatizationX_mA = 2;
//        int precisionStigmatizationY_mA = 2;
//        int precisionFormFactor_Actual = 4;

//        // remove leading ' ' for case minus is shown...
//        if (biasVoltage_V < 0)
//        {
//            fieldWidthBiasVoltage_V++;
//        }
//        if (beamCurrent_mA < 0)
//        {
//            fieldWidthBeamCurrent_mA++;
//        }
//        if (focus_mA < 0)
//        {
//            fieldWidthFocus_mA++;
//        }
//        if (centringX_mA < 0)
//        {
//            fieldWidthCentringX_mA++;
//        }
//        if (centringY_mA < 0)
//        {
//            fieldWidthCentringY_mA++;
//        }
//        if (stigmatizationX_mA < 0)
//        {
//            fieldWidthStigmatizationX_mA++;
//        }
//        if (stigmatizationY_mA < 0)
//        {
//            fieldWidthStigmatizationY_mA++;
//        }
//        if (formFactor_Actual < 0)
//        {
//            fieldWidthFormFactor_Actual++;
//        }

//        QString output = QString(
//                    "%1   "
//                    "SQ%2   "
//                    "UW%3   "
//                    "SL%4   "
//                    "ZX%5   "
//                    "ZY%6   "
//                    "SX%7   "
//                    "SY%8   "
//                    "FF%9   "
//                    "Automatic   "
//                    "User: %10\n")
//                .arg(currentDateTime)
//                .arg(beamCurrent_mA, fieldWidthBeamCurrent_mA,
//                     'f', precisionBeamCurrent_mA)
//                .arg(biasVoltage_V, fieldWidthBiasVoltage_V,
//                     'f', precisionBiasVoltage_V)
//                .arg(focus_mA, fieldWidthFocus_mA,
//                     'f', precisionFocus_mA)
//                .arg(centringX_mA, fieldWidthCentringX_mA,
//                     'f', precisionCentringX_mA)
//                .arg(centringY_mA, fieldWidthCentringY_mA,
//                     'f', precisionCentringY_mA)
//                .arg(stigmatizationX_mA, fieldWidthStigmatizationX_mA,
//                     'f', precisionStigmatizationX_mA)
//                .arg(stigmatizationY_mA, fieldWidthStigmatizationY_mA,
//                     'f', precisionStigmatizationY_mA)
//                .arg(formFactor_Actual, fieldWidthFormFactor_Actual,
//                     'f', precisionFormFactor_Actual)
//                .arg(userName, 18);

//        out << output;
//        qDebug() << output;
//        data.close();
//    }
}
