#include<QApplication>
#include<QLabel>

int main(int argc, char **argv){
  QApplication app(argc,argv);   // QApplication 객체 생성
  
  //stack영역에 저장
  QLabel hello("<font color = blue>Hello <i>world</i> </font>",0);
  //QLabel 데이터이름("작성내용(HTML)",0);
  
  hello -> show();  //위젯에 화면 표시
  
  // heap영역에 저장할시 포인터 사용
  /*
  QLabel *hello = new QLabel("<font color = blue>Hello <i>world</i> </font>",0);
  hello -> show();
  */
  
  return app.exec();         // QT의 메인 이벤트 루프 실행
}
