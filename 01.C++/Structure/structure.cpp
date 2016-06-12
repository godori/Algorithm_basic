#include <iostream>
using namespace std;

struct student{
  int id;
  char *name;
  float score;
};

int main(){

  // c와 달리, cpp에서는 typedef가 없어도
  // structure를 생략하고 선언할 수 있다!
  student s = {1,"godori",90.5};

  cout << "id:" << s.id <<endl;
  cout << "name:" << s.name << endl;
  cout << "score:" << s.score << endl;

  return 0;
}
