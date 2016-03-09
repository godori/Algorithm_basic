#include <iostream>
using namespace std;
#define size 10
void mergesort(int *arr,int left,int right);      // 나누기
void merge(int *arr,int left,int mid,int right);  // 합치기
// 배열 프린트 함수
void print(int *arr,int len){
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main() {
    int a[size]={35,9,8,18,98,31,58,17,76,45};

    print(a,size);
    mergesort(a,0,size-1);
    print(a,size);

    return 0;
}

void mergesort(int *arr, int start, int end){

    if(start < end){
        int mid = (start + end)/2;  // 중간지점 정하기

        mergesort(arr,start,mid);    // 앞부분 나누기
        mergesort(arr,mid+1,end);    // 뒷부분 나누기
        merge(arr,start,mid,end);    // 합치기
    }
}

void merge(int *arr,int start,int mid,int end){
    int i = start;
    int j = mid+1;
    int k = start;
    int m,n;
    int temp[size];

    // 크기비교해서 작은것부터 temp 배열에 넣기
    while(i<=mid && j<=end){
        temp[k++] = (arr[i]<arr[j])? arr[i++] : arr[j++];
    }

    // arr에서 temp에 넣지 못한 남은 원소가 있는 덩어리가 어디인지 찾음
    // 그 덩어리의 시작 인덱스를 찾음
    if(i>mid)
        m = j;
    else
        m = i;

    // 그 덩어리의 끝 인덱스를 찾음
    if(i>mid)
        n = end;
    else
        n = mid;

    // 아직 배열에 속하지 않은 값들 마저 넣어줌
    for(;m<=n;m++)
        temp[k++] = arr[m];

    // 임시배열 값을 원래 배열로 대입
    for(m=start;m<=end;m++)
        arr[m] = temp[m];
}
