#ifndef TESTMAINWINDOW_H
#define TESTMAINWINDOW_H

#include <QObject>
#include <QtTest/QtTest>


class TestMainWindow : public QObject
{
    Q_OBJECT
public:
    TestMainWindow();
    ~TestMainWindow();

private slots:
    void toUpper();
};

#endif // TESTMAINWINDOW_H
