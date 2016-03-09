#include <iostream>
using namespace std;
#define size 10;

void print(int *arr,int num){
  cout<<"Arr:";
  for(int k=0;k<num;k++)
      cout<<" "<<arr[k];
  cout<<endl;
}

int main(){
  s[size]={35,9,8,18,98,31,58,17,76,45};
  int temp;
  int last=0;

  while(last<size){
    last++;
      for(int j=0;j<last;j++){
        if(s[last]<s[j]){
          temp = s[j];
          s[j] = s[j+1];
          s[j+1] = temp;
          for(int k=0;k<=last;k++){

          }
        }
      }
}


  return 0;
}
