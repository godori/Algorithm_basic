#include <iostream>

using namespace std;
#define size 10
void quick(int *arr,int start,int end);

// 배열 프린트 함수
void print(int *arr,int len){
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int s[size]={35,9,8,18,98,31,58,17,76,45};

    print(s,size);
    quick(s,0,size-1);
    print(s,size);

    return 0;
}

void quick(int *arr,int start,int end){

    int i,j,temp,piv;

    // 분할
    if(start<end){
        i = start;
        j = end;
        piv = arr[start];

        while(i<j){
            while(arr[i] <= piv && i<end)
                i++;
            while(piv < arr[j])
                j--;
            if(i<j){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        arr[start] = arr[i];
        arr[i] = piv;

        //정렬
        quick(arr,start,i-1);
        quick(arr,i+1,end);


    }

    //정렬
}
