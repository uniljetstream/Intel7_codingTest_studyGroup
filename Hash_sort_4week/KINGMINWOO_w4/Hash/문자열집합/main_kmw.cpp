#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	cin >> N >> M;

	set<string> set;
	string str;
	for (int i = 0; i < N; i++) {
		cin >> str;
		set.insert(str);
	}

	int cnt = 0;
	for (int i = 0; i < M; i++) {
		cin >> str;
		if (set.count(str))
			cnt++;
	}
	cout << cnt;
}