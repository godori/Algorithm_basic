#include <iostream>
#include <fstream>

using namespace std;

int max(int a, int b) {return (a>b)? a:b ;}
int w[100]; // weight
int p[100]; // profit


int knapsack(int m, int n){

  // 기저 조건
  if( n == 0 || m == 0)
    return 0;

  // 현재 아이템이 배낭 용량을 넘으면
  // 이 아이템을 포함했을 때 최적의 해를 가지지 않음
  if(w[n-1] > m)
    return knapsack(m,n-1);

  // 템 선택했거나 아닌 경우 중 하나를 최대 이익으로 정한다
  else return max(
                  knapsack(m-w[n-1],n-1) + p[n-1],
                  knapsack(m,n-1)
                );
}

int main(){

  ifstream is;
  is.open("knapsack.txt");
  cout<<"# 0-1 Kanpsack Problem"<<endl;

  int M,N,i;
  is>>N>>M;

  for(i=0; i<N; i++)
    is>>w[i]>>p[i];

  for(i=0; i<N; i++)
    cout<<"w:"<<w[i]<<", p:"<<p[i]<<endl;

  cout<<"최대 이익 : "<<knapsack(M,N)<<endl;

  is.close();
  return 0;
}
