#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    stack<int> s;
    stack<int> check;

    string ps;
    int size;
    do {
        getline(cin, ps, '.');
        if (ps == "\n") break;
        size = ps.length();

        for (int j = 0; j < size; j++) {
            s.push(ps[j]);
        }

        if (s.top() == '(' || s.top() == '[')   cout << "no\n";
        else {
            int k;
            for (k = 0; k < size; k++) {
                if (s.top() == ')') {
                    check.push(1);
                    s.pop();
                }
                else if (s.top() == ']') {
                    check.push(2);
                    s.pop();
                }
                else if (s.top() == '(') {
                    if (check.empty() || check.top() != 1)  break;
                    else {
                        check.pop();
                        s.pop();
                    }
                }
                else if (s.top() == '[') {
                    if (check.empty() || check.top() != 2)  break;
                    else {
                        check.pop();
                        s.pop();
                    }
                }
                else   s.pop();
            }
            if (check.empty() && k == size)    cout << "yes\n";
            else   cout << "no\n";
        }
        while (!s.empty()) s.pop();
        while (!check.empty()) check.pop();
    } while (1);

    return 0;
}
