#include <iostream>
#include <deque>
using namespace std;

void print(deque<int> arr){

  deque<int>::iterator it;
  cout<<"arr : ";
  for(it = arr.begin(); it < arr.end(); it++)
    cout<<*it<<" ";
  cout<<endl;

}

int main(){

  // 데크deque는 양 끝단에서 삽입, 삭제가 빈번하게 일어날 때 유용하다
  // 만약 뒤에서만 삽입,삭제가 자주 일어난다면 ---> vector
  // 중간에서 삽입, 삭제가 자주 일어난다면 ------> list

  int data[] = {35,9,8,18,98,31,58,17,76,45};
  deque<int> dq(data,data+10);
  print(dq);

 dq.push_back(99);  // 뒤에 삽입
 print(dq);

 dq.push_front(11); // 앞에 삽입
 print(dq);

 dq.pop_back();     // 뒤에서 제거
 print(dq);

 dq.pop_front();    // 앞에서 제거
 print(dq);


  return 0;
}
