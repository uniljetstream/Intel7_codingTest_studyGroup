#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, x, index = 0;
	cin >> N;

	vector<pair<int, int>> tower;
	vector<pair<int, int>>::reverse_iterator it; // 역 반복자
	vector<int> indexOfReceivedTower;
	pair<int, int> p;

	cin >> x;
	tower.push_back({ x, 0 });
	indexOfReceivedTower.push_back(index);

	for (int i = 1; i < N; i++) {
		cin >> x;
		index = 0;
		for (it = tower.rbegin(); it != tower.rend(); ++it) {
			if (it->first > x) {
				index = it->second + 1;
				break;
			}
		}
		indexOfReceivedTower.push_back(index);

		tower.push_back({ x, i });
	}
	for (int i = 0; i < N; i++) {
		cout << indexOfReceivedTower[i] << ' ';
	}
}