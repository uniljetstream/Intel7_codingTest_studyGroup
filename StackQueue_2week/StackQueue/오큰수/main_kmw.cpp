#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, a;
	cin >> N;

	stack<int> s;
	stack<int> temp;
	vector<int> NGE;

	for (int i = 0; i < N; i++) {
		cin >> a;
		s.push(a);
	}
	
	while (!s.empty()) {
		while (!temp.empty() && temp.top() <= s.top()) {
			temp.pop();
		}

		if (temp.empty()) {
			NGE.push_back(-1);
		}
		else {
			NGE.push_back(temp.top());
		}
		temp.push(s.top());
		s.pop();
	}

	for (int i = N - 1; i >= 0; i--) {
		cout << NGE[i] << ' ';
	}
}