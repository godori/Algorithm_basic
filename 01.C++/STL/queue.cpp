#include <iostream>
#include <string>
#include <queue>

using namespace std;
int main(){

  // 스택과 매우 유사함 스택처럼 디폴트는 데크
  queue<int> i_qu;
  queue<string> s_qu;

  // 주요 메소드 :
  // push()  - 끝에 자료 삽입      pop()   - 처음 자료 삭제
  // front() - 처음 자료 반환      back()  - 마지막 자료 반환
  // empty() - 비었으면 true

  queue<int> qu;
  qu.push(1);
  qu.push(2);
  qu.push(3);

  while(!qu.empty()){
    cout<<qu.front()<<" ";
    qu.pop();
  }

  return 0;
}
