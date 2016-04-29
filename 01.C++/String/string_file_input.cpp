#include <iostream>
#include <string>
#include <fstream>

using namespace std;
int main(){

  ifstream is;
  is.open("_input.txt");

  string line;
  string result="";

  while(! is.eof()) // 파일의 끝을 알아내려면 쓰는 함수
  {
    getline(is,line);
    cout<<line<<" ";
  }
  cout<<result<<endl;

  is.close();
  return 0;
}
