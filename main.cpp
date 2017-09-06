#include "MainWindow.h"
#include <QApplication>
#include <QDebug>
#include <QtTest/QtTest>
#include <TestMainWindow.h>

int main(int argc, char *argv[])
{
    qDebug() << "Test";
    qDebug() << "kleine Änderung";
    qDebug() << "neue Änderung";
    qDebug() << "noch eine neue Änderung";

    int status = 0;
    auto ASSERT_TEST = [&status, argc, argv](QObject* obj) {
      status |= QTest::qExec(obj, argc, argv);
      delete obj;
    };

    ASSERT_TEST (new TestMainWindow());
}
