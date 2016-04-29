#include <iostream>
using namespace std;

class con{
public:
  con();
  con(int num);
  void print();
};

void con::print(){
  cout<<"print";
}
con::con(){cout<<"default constructor"<<endl;}
con::con(int num){cout<<"parm constructor"<<endl;}


int main(int argc, char const *argv[]) {
con con1;
con con2(2);

cout<<"fin.";
  return 0;
}
