#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main(){

  vector<string> vec;

  vec.push_back("Jonadan");
  vec.push_back("Joseph");
  vec.push_back("Jotaro");
  vec.push_back("Jolyne");

  // 인덱스 이용
  for(int i=0; i<vec.size(); i++)
    cout << vec[i] <<" ";
  cout<<endl;

  // 추가, 삭제
  vec.insert(vec.begin()+2, "Josuke");
  vec.pop_back();

  // 반복자 이용
  vector<string>::iterator it;
  for(it = vec.begin(); it < vec.end(); it++)
    cout<< *it <<" ";
  cout<<endl;

  return 0;
}
