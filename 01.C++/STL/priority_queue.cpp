#include <iostream>
#include <queue>
#include <string>

using namespace std;
int main(){

  // 큐와 아주 비슷함. 원소들이 우선순위를 가짐
  // 들어온 순서와는 상관없이 우선순위가 높은 원소가 먼저 나감
  // 힙 heap 자료구조를 내부적으로 사용함
  // 대표적인 예는 작업 스케쥴링(job scheduling)
  // 각 작업은 우선순위를 가지고, 높은 우선순위의 작업부터 추출되어 시작

  priority_queue<int> i_pq;
  priority_queue<string> s_pq;

  priority_queue<int> pq;
  pq.push(10);
  pq.push(22);
  pq.push(31);

  while(!pq.empty()){
    cout<<pq.top()<<" ";
    pq.pop();
  }
  // 디폴트로 값이 크면 우선순위가 높다고 간주된다.

  return 0;
}
