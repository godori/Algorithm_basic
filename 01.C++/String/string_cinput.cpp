#include <iostream>
#include <string>

using namespace std;
int main(){

  string line;
  string result = "";

  while(line!= "end") // 파일의 끝을 알아내려면 쓰는 함수
  {
    result += line + " ";
    getline(cin,line);
  }
  cout<<result<<endl;

  return 0;
}
