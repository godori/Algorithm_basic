#include <iostream>
using namespace std;

// C와 CPP 구조체의 차이점2
// 접근 제한자(Access Modifier)

// cpp의 구조체는 접근제어 지시자로 멤버 접근에 제한이 가능
// public -  어디서든 접근 가능
// private - 외부(현재 클래스 밖)의 접근 불가능
// protected - 외부 접근 불가능하나, 상속된 파생 클래스는 접근 가능
struct student{
private:
  int id;
  char *name;
  float score;
public:
  void show();
  void setInfo(int _id, char* _name, float _score);
};

void student::show(){
  cout << " -- Structure Function! --" <<endl;
  cout << "id:" << id <<endl;
  cout << "name:" << name << endl;
  cout << "score:" << score << endl;
}
void student::setInfo(int _id, char* _name, float _score){
  id = _id;
  name = _name;
  score = _score;
}

int main(){

  student s;

  s.setInfo(1,"godori",90.5);
  s.show();

  return 0;
}
