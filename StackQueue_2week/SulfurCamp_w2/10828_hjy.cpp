#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
    int N;
    cin >> N;
    stack<int> s;

    for (int i = 0; i < N; ++i) {
        string cmd;
        cin >> cmd;
        if (cmd == "push") {
            int x;
            cin >> x;
            s.push(x);
        }
        else if (cmd == "pop") {
            if (!s.empty()) {
                cout << s.top() << "\n";
                s.pop();
            }
            else {
                cout << -1 << "\n";
            }
        }
        else if (cmd == "size") {
            cout << s.size() << "\n";
        }
        else if (cmd == "empty") {
            cout << (s.empty() ? 1 : 0) << "\n";
        }
        else if (cmd == "top") {
            if (!s.empty()) {
                cout << s.top() << "\n";
            }
            else {
                cout << -1 << "\n";
            }
        }
    }
    return 0;
}
