#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, x, index, maxTowerLevel = 0;
	cin >> N;

	stack<int> tower;

	for (int i = 0; i < N; i++) {
		cin >> x;
		if (x >= maxTowerLevel) {
			maxTowerLevel = x;
			index = i;
		}
		
		
		tower.push(x);
		
	}
}