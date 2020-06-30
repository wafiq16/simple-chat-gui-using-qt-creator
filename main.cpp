#include <QApplication>
#include "mainwindow.h"

#define PORT 8080

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow *w = new MainWindow();
    w->show();


    return a.exec();
}
