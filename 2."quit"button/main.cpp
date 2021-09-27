#include "widget.h"
#include "CustomWidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    CustomWidget *widget = new CustomWidget(0);

    widget -> show(); //위젯 화면 표시
    return a.exec();
}
