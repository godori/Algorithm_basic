#include <iostream>
using namespace std;

struct Employee{
  int id;
  char[10] name;
};

int main(){

  Employee *p = new Employee;
  *p->id = 10;
  *p->name = "jojo";

  cout<<"id:"<<*p.id<<endl;
  cout<<"name:"<<*p.name<<endl;

  return 0;
}
