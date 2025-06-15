#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    //主界面设置
    MainWindow cli;
    cli.setFixedSize(550,330);
    cli.setWindowTitle("HTTP Client");
    cli.show();
    return a.exec();
}
