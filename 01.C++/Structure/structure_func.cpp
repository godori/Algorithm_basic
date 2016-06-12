#include <iostream>
using namespace std;

// C와 CPP 구조체의 차이점1
// 함수 포함 여부

struct student{
  int id;
  char *name;
  float score;

  // c와 달리 cpp의 구조체에는 함수가 포함될 수 있다!
  void show(){
    cout << " -- Structure Function! --" <<endl;
    cout << "id:" << id <<endl;
    cout << "name:" << name << endl;
    cout << "score:" << score << endl;
  }
};

int main(){

  student s = {1,"godori", 90.2};
  s.show();

  return 0;
}
