#include "widget.h"

#include<QButtonGroup>
#include<QCheckBox>


void Widget::selectButton(int id){
    buttonGroup = (QButtonGroup*) sender();
    QCheckBox* button =(QCheckBox*)buttonGroup->button(id);
    qDebug("CheckBox%d is selected(%s)",id+1,(button->isChecked())?"on":"off");
}
