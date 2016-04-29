#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> arr){
  vector<int>::iterator it;
  cout<<"arr : ";
  for(it = arr.begin(); it < arr.end(); it++)
    cout<<*it<<" ";
  cout<<endl;

}

int main(){

  int data[] = {35,9,8,18,98,31,58,17,76,45};

  // 다양한 생성자
  vector<int> arr1;       // 크기가 0인 백터
  vector<int> arr2(10);   // 요소가 10개인 벡터 (초기값은 0)
  vector<int> arr3(10,1); // 1로 초기화된 요소가 10개인 벡터
  vector<int> arr4(arr3); // arr3과 똑같은 요소를 가지는 벡터
  vector<int> arr5(data,data+5); // data배열의 처음 5개 요소를 가지는 벡터

  // 자료 추가,삽입,삭제 메소드
  vector<int> scores(data,data+10);
  print(scores);  // 원본

  scores.push_back(44);
  print(scores);  // push_back() : 끝에 자료 추가

  scores.insert(scores.begin(),99);
  print(scores);  // insert() : 벡터 첫 부분에 자료 추가

  scores.pop_back();
  print(scores);  // pop_back() : 벡터 끝의 자료 삭제

  scores.erase(scores.begin(),scores.begin()+3);
  print(scores);  // erase() : 지정된 범위의 요소들을 삭제 (시작부터 3개)

  return 0;
}
