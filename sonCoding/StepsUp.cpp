// n개의 계단을 아이가 오른다. 한번에 1계단 오르기도 하고, 2계단, 3계단 오르기도 한다.
// 계단을 오르는 모든 경우의 수를 구하는 메서드를 구현하세요.
// ex) n=3으로 주어지게 되면
// 1계단 + 1계단+ 1계단
// 1계단 + 2계단
// 2계단 + 1계단
// 3계단
// 총 4가지 경우가 있는겁니다.
// 4를 return해주시면 됩니다.
//  메서드 형식: int countWays(int n);

#include <iostream>
using namespace std;

// Dynamic Programming
long long s[10001];

// Recursive
int step(int n){

  int cnt = 0;

  if(n == 1)
    return 1;
  else if (n == 2)
    return 2;
  else if (n == 3)
    return 4;
  else
    cnt = step(n-1) + step(n-2) + step(n-3);

  return cnt;
}

int main(){
  int num,i;

  s[0] = 0;
  s[1] = 1;
  s[2] = 2;
  s[3] = 4;

  while (true){
    cout<<"type number:";
    cin >> num;

    // calculate steps 1
    for(i=4; i <= num; i++)
      s[i] = s[i-1] + s[i-2] + s[i-3];

    cout<<s[num]<<endl;

    // calculate steps 2
    // if(num == 0)
    //   cout<<0<<endl;
    // else
    //   cout<<step(num)<<endl;
  }

  return 0;
}
