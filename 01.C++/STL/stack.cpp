#include <iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;
int main(){

  // 스택에 저장할 타입을 템플릿 인자로 지정함
  // 스택은 벡터, 리스트, 데크 등을 사용해서 구현 가능
  // 디폴트는 deque
  stack<int> i_st;
  stack<string> s_st;

  // 기반 컨테이너를 변경하고 싶다면 생성자에 두 번째 인자를 줌
  stack<int, vector<int> > v_st;

  // 주요 연산 : push(), pop()
  stack<string> st;
  string jojofam[3]={"1:jonadan","2:joseph","3:jotaro"};

  for(int i=0; i<3; i++)
    st.push(jojofam[i]);

  while(!st.empty()){
    cout<< st.top() <<" "; // top의 자료를 출력
    st.pop();               // 현재 top이 가리키는 자료부터 꺼냄
  }


  return 0;
}
