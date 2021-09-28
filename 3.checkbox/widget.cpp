#include "widget.h"

#include <QCheckBox>
#include <QButtonGroup>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    resize(140,110);                                  //윈도우 창크기 설정
    buttonGroup = new QButtonGroup(this);             //버튼그룹 생성
    buttonGroup->setExclusive(false);                //버튼들이 각각 따로 동작하도록

    Label = new QLabel("0",this);
    Label ->move(10,10);

    connect(buttonGroup, SIGNAL(idClicked(int)),SLOT(selectButton(int)));           //화면에 전송
        
    for(int i=0;i<4;i++){                                                 // 체크박스 버튼 생성시작
        QString str = QString("CheckBox%1").arg(i+1);       //%1 1번째 arg값
        checkBox[i] = new QCheckBox(str, this);
        checkBox[i] ->move(10,30+i*20);
        buttonGroup -> addButton(checkBox[i],i);
    }                                                                      // 체크박스 버튼 생성 끝
}

void Widget::selectButton(int id){
    QButtonGroup *buttonGroup = (QButtonGroup*) sender();
    QCheckBox* button =(QCheckBox*)buttonGroup->button(id);
    qDebug("CheckBox%d is selected(%s)",id+1,(button->isChecked())?"on":"off");     //체크박스 온오프 확인용

}

Widget::~Widget(){

}
