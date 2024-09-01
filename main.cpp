#include "mainwindow.h"
#include <QApplication>

#include <iostream>
#include "secdialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    // displayTurn();
    w.show();
    return a.exec();
}
