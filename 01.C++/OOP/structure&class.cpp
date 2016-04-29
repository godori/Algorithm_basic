#include <string>
#include <iostream>
using namespace std;

struct plant{
  int age;
  string name;
};

class animal{
  int age;
  string name;
public: // default : private !!
  void eat(){
    cout<<"yum!\n";
  }
};

int main(){

  // Plant structure
  plant rose;
  rose.age = 30;  // struct has public member as a default
  // no member fuction

  // Animal calss
  animal cat;
  cat.eat();
  // cat.age = 2; // class has private member as a default

  return 0;
}
