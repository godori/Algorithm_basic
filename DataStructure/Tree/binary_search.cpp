#include <iostream>
using namespace std;
#define NUM 30

int bs(int arr,int len, int idx);
int main(int argc, char const *argv[]) {

int s[NUM] = {1,3,7,8,11,12,15,17,20,25,
              27,38,41,45,48,50,52,55,57,60,
              64,68,70,72,74,76,78,81,83,97};
int len = NUM;
int idx = 50;

  //
  // while(){
  //
  //   bs(s,len,idx);
  // }
  cout<<bs(s,len,idx);

  cout<<"fin.";
  return 0;
}

int bs(int arr,int len, int idx){
//   cout<<arr[len/2];

  // if(s[len/2] == idx )
  //   return len/2;
  // else if(s[len/2]>idx){
  //   len = len/2;
  //   bs(s,len,idx);
  // }

  // else if(s[len/2] < idx){
  //   len = len + len/2;
  //   bs(s,len,idx);
  // }else{
  //   len = len/2;
  //   bs(s,len,idx);
  // }
return len;
}
