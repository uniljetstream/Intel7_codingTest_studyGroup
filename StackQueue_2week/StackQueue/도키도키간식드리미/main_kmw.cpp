#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    stack<int> s;
    stack<int> in;
    stack<int> check;
    int N, num, order = 1;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> num;
        in.push(num);
    }
    for (int i = 0; i < N; i++) {
        s.push(in.top());
        in.pop();
    }

    while (1) {
        if (!s.empty() && s.top() == order) {
            s.pop();
            order += 1;
        }
        else if (!check.empty() && check.top() == order) {
            check.pop();
            order += 1;
        }
        else if (s.top() != order) {
            check.push(s.top());
            s.pop();
        }

        if (s.empty()) {
            if (check.empty()) {
                cout << "Nice";
                break;
            }
            else {
                if (check.top() == order) continue;
                else {
                    cout << "Sad";
                    break;
                }
            }
        }
    }

    return 0;
}