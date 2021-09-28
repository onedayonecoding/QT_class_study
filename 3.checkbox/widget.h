#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QButtonGroup>
#include <QCheckBox>
#include <QLabel>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
private:
    QButtonGroup *buttonGroup;
    QCheckBox *checkBox[4];
    QLabel *Label;
public slots:
    void selectButton(int id);
};
#endif // WIDGET_H
