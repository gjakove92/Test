#include "TestMainWindow.h"

TestMainWindow::TestMainWindow()
{

}

TestMainWindow::~TestMainWindow()
{

}

void TestMainWindow::toUpper()
{
    QString str = "Hello";
    QCOMPARE(str.toUpper(), QString("HELLO"));
}

