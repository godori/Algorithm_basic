// 물건을 넣을지 말지 결정하는 기준
// 1. 물건을 넣었을 때 배낭의 최대 이익
// 2. 넣지 않았을 때 최대 이익

#include <iostream>
#include <fstream>

using namespace std;
int w[100], p[100];
int n;
// i 물건까지를 j크기 가방에 담았을 때 최대 가치
int d[100][1001];
int dp[10001];

int knapsack(int x, int y){
  if(d[x][y]) return d[x][y];  // 값이 있으면 리턴한다
  int &ans = d[x][y];
  if(x == n)
    return 0;
  if(y-w[x] > 0 )

}

int main(){
  ifstream is;
  is.open("knapsack.txt");

  int N,M,i,j;

  cout<<"배낭 문제"<<endl;
  is>>M>>N;
  n = N;

  for(i=0;i<N;i++)
    is>>w[i]>>p[i];

  // for(i=0;i<M;i++)
  //   dp[0][i] = 0;
  memset(dp,0,sizeof(dp));

  for(i=0;i<N;i++){

  }

  is.close();

  return 0;
}
