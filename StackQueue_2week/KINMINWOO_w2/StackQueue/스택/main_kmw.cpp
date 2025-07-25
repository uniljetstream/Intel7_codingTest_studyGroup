#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N, X;
	cin >> N;
	string cmd;
	stack<int> s;

	for (int i = 0; i < N; i++) {
		cin >> cmd;
		if (cmd == "push") {
			cin >> X;
			s.push(X);
		}
		else if (cmd == "pop") {
			if (!s.empty()) {
				cout << s.top() << '\n';
				s.pop();
			}
			else {
				cout << -1 << '\n';
			}
		}
		else if (cmd == "size") {
			cout << s.size() << '\n';
		}
		else if (cmd == "empty") {
			cout << s.empty() << '\n';
		}
		else if (cmd == "top") {
			if (!s.empty()) {
				cout << s.top() << '\n';
			}
			else {
				cout << -1 << '\n';
			}
		}
	}
}