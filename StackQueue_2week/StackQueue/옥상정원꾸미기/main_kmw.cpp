#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, h;
	unsigned int cnt = 0;
	cin >> N;
	
	stack<int> s;
	
	for (int i = 0; i < N; i++) {
		cin >> h;
		while (!s.empty() && s.top() <= h) {
			s.pop();
		}
		cnt += s.size();
		s.push(h);
	}

	cout << cnt;
}