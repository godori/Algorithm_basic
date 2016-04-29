#include <iostream>
#include <fstream>

using namespace std;
int main(){

  ifstream is;
  is.open("_input.txt");

  char c;
  is.get(c);

  while(!is.eof()) // 파일의 끝을 알아내려면 쓰는 함수
  {
    cout<<c<<" ";
    is.get(c);
  }

  is.close();
  return 0;
}
