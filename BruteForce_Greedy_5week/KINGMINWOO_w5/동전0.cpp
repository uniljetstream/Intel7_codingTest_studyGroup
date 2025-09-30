#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K, coin;
    cin >> N >> K;
    stack<int> s;
    for (int i = 0; i < N; i++) {
        cin >> coin;
        s.push(coin);
    }

    int cnt = 0;
    while (!s.empty()) {
        cnt += K / s.top();
        if (K % s.top() != 0) {
            K = K % s.top();
            s.pop();
        }
        else {
            break;
        }
    }

    cout << cnt;
}