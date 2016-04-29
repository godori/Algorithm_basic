#include <iostream>
#include <set>
#include <string>
using namespace std;


// 여기서 뭔가 문제가 있음 ..
template <typename T>
void print(const T& container){
  T::const_iterator it;

  // for(it = container.begin(); it != container.end(); ++it)
  //   cout<< *it <<" ";
  // cout<<endl;
}


int main(){

  // 순서와 상관 없이 자료를 저장하려면 set과 multi-set을 쓴다
  // 집합에 저장된 자료를 key라고 하고
  // 동일 키는 중복해서 가질 수 없다.

  // 각 객체 집합이 다음과 같다고 하자
  // JoJo { Jonadan, Joseph, Jotaro, DIO }
  // Chara { Jonadan, Joseph, Jotaro , DIO, DIO }

  set<string> JoJoSet;
  multiset<string> DIOSet;

  JoJoSet.insert("Jonadan");
  JoJoSet.insert("Joseph");
  JoJoSet.insert("Jotaro");

  DIOSet.insert(JoJoSet.begin(), JoJoSet.end());


  return 0;
}
