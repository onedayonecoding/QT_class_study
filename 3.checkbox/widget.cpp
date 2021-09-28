#include "widget.h"

#include <QCheckBox>
#include <QButtonGroup>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    resize(140,110);
    buttonGroup = new QButtonGroup(this);
    buttonGroup->setExclusive(false);                //버튼들이 각각 따로 동작하도록

    Label = new QLabel("0",this);
    Label ->move(10,10);

    connect(buttonGroup, SIGNAL(idClicked(int)),SLOT(selectButton(int)));
    for(int i=0;i<4;i++){
        QString str = QString("CheckBox%1").arg(i+1);   //%1 1번째 arg값
        checkBox[i] = new QCheckBox(str, this);
        checkBox[i] ->move(10,30+i*20);
        buttonGroup -> addButton(checkBox[i],i);
    }
}


Widget::~Widget(){

}
