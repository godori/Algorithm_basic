#include <iostream>
using namespace std;
#define size 10

void print(int *arr,int num){
  cout<<"Arr:";
  for(int k=0;k<num;k++)
      cout<<" "<<arr[k];
  cout<<endl;
}

int main(){

  int s[size]={41,31,48,97,9,65,27,29,13,15};
  int maxidx,temp;
  int i=0;

  print(s,size);

   while(size>i){
     maxidx = 0;

     //find maxnum
     for(int j=0;j<size-i;j++)
         if(s[j]>=s[maxidx])
             maxidx = j;

     //swap
     temp = s[maxidx];
     s[maxidx] = s[size-i-1];
     s[size-i-1] = temp;

     //increase
     i++;
   }
   print(s,size);

  return 0;

}
