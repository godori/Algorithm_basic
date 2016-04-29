#include <iostream>
#include <map>
#include <string>
#include <fstream>

using namespace std;
int main(){

  // 단어의 빈도를 계산하는 프로그램

  // 파일 읽기
  ifstream is;
  is.open("map_input.txt");

  // 맵, 임시 문자열 객체 생성
  map<string,int> table;
  string s;

  // 문서가 끝날때까지
  // 한 줄씩 받아서 해당 키가 가진 값의 카운트 증가
  while(!is.eof()){
    getline(is,s);
      if(s !=""){
        table[s]++;
        cout<<s<<" ";
    }
  }
  cout<<endl;

  // 반복자 사용해서 key(first)-value(second) 출력
  map<string,int>::iterator it;
  for(it = table.begin(); it != table.end(); it++)
    cout<< it->first <<":"<< it->second <<endl;

  return 0;
}
