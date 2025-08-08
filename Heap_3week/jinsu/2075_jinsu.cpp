#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int x;
            cin >> x;

            if (pq.size() < n) {
                pq.push(x);
            }
            else if (x > pq.top()) {
                pq.pop();
                pq.push(x);
            }
        }
    }

    cout << pq.top() << '\n';
    return 0;
}