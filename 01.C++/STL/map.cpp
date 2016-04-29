#include <iostream>
#include <map>
#include <string>

using namespace std;
int main(){

  // 맵 선언
  map<string,string> stand_wiki;

  // 맵에 데이터 추가
  stand_wiki["Jotaro"] = " <스타 플라티나> ";
  stand_wiki["Joseph"] = " <허밋 퍼플>";
  stand_wiki["Jorno"] = " <골든 익스피리언스>";

  cout<<"Jotaro의 스탠드는"<<stand_wiki["Jotaro"]<<endl;
  cout<<"Joseph의 스탠드는"<<stand_wiki["Joseph"]<<endl;
  cout<<"Jorno 스탠드는"<<stand_wiki["Jorno"]<<endl;


  return 0;
}
