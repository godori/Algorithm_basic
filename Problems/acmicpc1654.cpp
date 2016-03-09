#include <iostream>
using namespace std;

int a[10000];
int k,n;
bool check(int x){
  int cnt = 0;
  for(int i =0;i<k;i++){
    cnt += a[i]/x;
  }
  return cnt >= n; // true or false
}

int main(int argc, char const *argv[]) {

  //input
  cin>>k>>n;
  int max = 0;

  for(int i=0;i<k;i++){
    cin>>a[i];
    if(max < a[i])
      max = a[i];
  }

  int ans = 0;  // answer
  int l = 1;    // left
  int r = max;  // right

  while(l<=r){
    int mid = (l+r)/2;
    if(check(mid)){
      // if true (k>=n)
      if(ans < mid){
        ans = mid;  // answer <- mid
      }
      l = mid + 1;
    }else{
        r = mid - 1;
      }
  }

  cout<<ans;

  return 0;
}
