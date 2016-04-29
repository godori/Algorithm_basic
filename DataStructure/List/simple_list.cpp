#include <iostream>
using namespace std;

// simple List Element
typedef struct ListElement{
  struct ListElement *next;
  int data;
}ListElement;

class Element{
public:
  Element(int value): next(NULL), data(value){}
  ~Element(){};
  const int value() {return data;}
  void setNext(Element *el){next = el;}
  void setValue(int value){data = value;}
private:
  Element *next;
  int data;
};

int main(int argc, char const *argv[]) {

  cout<<"List";
  return 0;
}
