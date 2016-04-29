#include <iostream>
#include <algorithm>
#include "time.h"
using namespace std;
#define size 10

void print(int *arr,int num){
  cout<<"Arr:";
  for(int k=0;k<num;k++)
      cout<<" "<<arr[k];
  cout<<endl;
}

int main (){

  clock_t start, end;
  start = clock();
  int count =0;

  while(count<1000000000){
    count++;
  int arr[size]= {35,9,8,18,98,31,58,17,76,45};

  print(arr,size);
  int i,j;
  // max base
  for(i=size-1;i>0;i--){
    for(j=0;j<i;j++){
      if(arr[j] > arr[j+1])
          swap(arr[j+1],arr[j]);
    }
  }

  print(arr,size);
  end = clock();
}

  return 0;
}
