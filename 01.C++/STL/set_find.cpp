#include <iostream>
#include <set>

using namespace std;
int main(){

  set<int> mySet;

  mySet.insert(12);
  mySet.insert(91);
  mySet.insert(76);

  // find(key)는 키를 매개변수로 받아
  // 연관된 값(value)를 반환한다.
  set<int>::iterator pos;
  pos = mySet.find(91);

  if(pos != mySet.end())
    cout<<"값 "<< *pos <<" 발견됨."<<endl;
  else
    cout<<"발견되지 않음"<<endl;

  return 0;
}
