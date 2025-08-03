#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, h, cnt = 0;
	cin >> N;
	
	vector<int> s;
	vector<int>::reverse_iterator it;

	for (int i = 0; i < N; i++) {
		cin >> h;
		s.push_back(h);
	}

	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			if (s[i] > s[j]) {
				cnt++;
			}
			else {
				break;
			}
		}
	}

	cout << cnt;
}