#include <iostream>
#include <math.h>
using namespace std;
int check(int x,int y){
  // 사분면 체크함수
  if(x>0 && y>0)
    return 1;
  else if(x>0 && y<0)
    return 2;
  else if(x<0 && y>0)
    return 3;
  else if(x<0 && y<0)
    return 4;
  else
    return -1;
}
int main(){
  int b1={6,13,4,18,1,20};
  int b2={11,14,9,12,5,20};
  int b3={11,8,16,7,19,3};
  int b4={6,10,15,2,17};
  int part={0.1,0.3,0.5,0.7,0.9,1.0};

  int i;
  int a,b,c,d,e;
  int n,x,y;  //입력 개수, 입력 좌표
  int len,sl;  //길이, 기울기

  cin>>a>>b>>c>>d>>e;
  cin>>n;

  for(i=0;i<n;i++){
    cin>>x,y;
    sl = x/y;
    len = sqrt(x*x + y*y);
  }



  return 0;
}
