#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {

  double d;
  int i;
  char c;

  cout << "sizeof(d) = " << sizeof(d) << " byte" << endl;
  cout << "sizeof(i) = " << sizeof(i) << " byte" << endl;
  cout << "sizeof(c) = " << sizeof(c) << " byte" << endl;


  // 배열의 크기, 원소의 크기, 원소의 개수
  char cArray[3];
  int iArray[5];
  double dArray[5];

  cout << "sizeof(dArray) = " << sizeof(dArray) << " byte" << endl;
  cout << "sizeof(cArray) = " << sizeof(cArray) << " byte" << endl;
  cout << "sizeof(iArray) = " << sizeof(iArray) << " byte" << endl;
  cout << "sizeof(iArray[0]) = " << sizeof(iArray[0]) << " byte" << endl;
  cout << "sizeof(iArray/iArray[0]) = " << sizeof(iArray)/sizeof(iArray[0]) << " byte" << endl;


  return 0;
}
