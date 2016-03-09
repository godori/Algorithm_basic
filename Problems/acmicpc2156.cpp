#include <iostream>
using namespace std;

int main() {
    int n,a[10001],d[10001],i;

    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];

    // 1,2인 경우만 예외처리해줌
    d[1] = a[1];
    d[2] = a[1]+a[2];

    // d[i] = 다음 세가지 케이스 중 최대값
    for(i=3;i<=n;i++){
        // case1 : i번째 포도주가 연속 0회임(안마심)
        d[i] = d[i-1];
        // case2 : i번째가 연속 1회임
        if(d[i] < d[i-2]+a[i])
            d[i] = d[i-2]+a[i];
        // case3 : i번째가 연속 2회임
        if(d[i]< d[i-3]+a[i-1]+a[i])
            d[i] = d[i-3]+a[i-1]+a[i];
    }
    // ans = i번째에 최대로 마실 수 있는 포도주의 양
    int ans = d[1];
    for(i=1;i<=n;i++)
        if(ans <= d[i])
            ans = d[i];

    cout<<ans;

    return 0;
}
