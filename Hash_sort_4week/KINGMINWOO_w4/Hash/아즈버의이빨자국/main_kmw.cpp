#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, x;
	cin >> N;
	vector<int> v;

	for (int i = 0; i < N; i++) {
		cin >> x;
		v.push_back(x);
	}
	vector<int> res;
	set<int> set;
	if (N == 2) {
		res.push_back(v[1] - v[0]);
	}
	for (int i = 1; i < N - 1; i++) {
		set.emplace(v[i] - v[0]);
		res.push_back(v[i] - v[0]);
		int j = 1;
		while (1) {
			if (j + i > N - 1)
				break;

			if (set.count(v[j + i] - v[j])) {
				j++;
			}
			else {
				res.pop_back();
				break;
			}
		}
		set.clear();
	}

	if (res.empty())
		cout << 0;
	else {
		cout << res.size() << '\n';
		for (int i : res)
			cout << i << ' ';
	}
}