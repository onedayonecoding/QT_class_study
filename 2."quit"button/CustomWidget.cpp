#include<QApplication>
#include<QPushButton>

#include "CustomWidget.h"

CustomWidget :: CustomWidget(QWidget *parent) : QWidget(parent){
    QPushButton *button = new QPushButton("Quit",this);   //버튼생성
   // 반드시 heap영역에 저장할것 (이유 : 스텍영역에 저장할시 현재 프로그램이 종료시 데이터 지워져서 버튼이 나타나지 않음)
  
    button->resize(100,100);  //위젯 크기설정
  
    this->resize(300,300);    //윈도우 크기설정
    move(0,0);                //윈도우 위치설정

    connect(button,SIGNAL(clicked()),qApp,SLOT(quit()));  //시그널 슬롯 연결
}
