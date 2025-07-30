#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string cmd;
	queue<int> q;

	int N, X;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> cmd;
		if (cmd == "push") {
			cin >> X;
			q.push(X);
		}
		else if (cmd == "pop") {
			if (!q.empty()) {
				cout << q.front() << '\n';
				q.pop();
			}
			else {
				cout << -1 << '\n';
			}
		}
		else if (cmd == "size") {
			cout << q.size() << '\n';
		}
		else if (cmd == "empty") {
			cout << q.empty() << '\n';
		}
		else if (cmd == "front") {
			if (!q.empty()) {
				cout << q.front() << '\n';
			}
			else {
				cout << -1 << '\n';
			}
		}
		else if (cmd == "back") {
			if (!q.empty()) {
				cout << q.back() << '\n';
			}
			else {
				cout << -1 << '\n';
			}
		}
	}
}