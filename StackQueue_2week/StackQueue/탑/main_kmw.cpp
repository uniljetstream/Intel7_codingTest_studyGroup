#include <iostream>
#include <stack>
#include <vector>
#include <utility>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, x, index = 0;
	cin >> N;

	stack<pair<int, int>> tower;
	vector<int> indexOfReceivedTower;
	pair<int, int> p;

	for (int i = 0; i < N; i++) {
		cin >> x;
		
		while (!tower.empty() && tower.top().first <= x) {
			tower.pop();
		}

		if (tower.empty()) {
			indexOfReceivedTower.push_back(0);
		}
		else {
			indexOfReceivedTower.push_back(tower.top().second + 1);
		}

		tower.push({ x, i });
	}
	for (int i : indexOfReceivedTower) {
		cout << indexOfReceivedTower[i] << ' ';
	}
}