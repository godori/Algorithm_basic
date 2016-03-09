#include <iostream>
#include <stack>

using namespace std;

int main() {
    int n, p;
    cin>>n>>p;

    stack<int> s[6];
    int ans = 0;

    for (int i=0; i<n; i++) {
        int mel,num;      // 멜로디, 프렛번호
        cin>>mel>>num;

        mel -= 1; // 0부터시작하게

        stack<int> &st = s[mel];

        // 해당 스택이 비어있지 않음1
        while (!st.empty()) {
            // 스택 맨 위가 입력 프렛보다 크면 빼내고, 움직임 증가
            if (st.top() > num) {
                st.pop();
                ans += 1;
            } else { // 아니면 나감
                break;
            }
        }
        // 해당 스택 비었음
        // 프렛번호 추가, 움직임증가
        if (st.empty()) {
            ans += 1;
            st.push(num);
        }else {
            // 스택 비어있지 않음2 & 맨 위랑 입력프렛이 다를때
            if (st.top() != num) {
                ans += 1;
                st.push(num);
            }
        }
    }
    cout<<ans;
    return 0;

}
