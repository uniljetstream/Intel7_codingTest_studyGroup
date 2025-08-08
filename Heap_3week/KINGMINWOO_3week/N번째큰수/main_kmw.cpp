#include <iostream>
#include <queue>
#include <functional>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, x;
	cin >> N;

	priority_queue<int, vector<int>, greater<int>> minHeap; // 최소 힙 선언

	for (int i = 0; i < N; i++) { // 첫 N개의 수를 최소 힙에 초기화;
		cin >> x;
		minHeap.push(x);
	}

	for (int i = 1; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> x;
			if (x > minHeap.top()) { // N개의 수 중 가장 작은 수보다 큰 수가 입력 되면
				minHeap.pop(); // 가장 작은 수를 pop하고
				minHeap.push(x); // 입력된 수를 최소 힙에 등록
				// 최소 힙에는 계속해서 N개의 수가 저장되고 그 N개의 수는 큰 순서대로 저장되어있음
			}
		}
	}
	// 모든 수를 입력 받은 후에는 결국 N X N개의 수들 중에서 가장 큰 N개의 수만 남음
	// 결국 최소 힙에 저장 된 가장 큰 N개의 수들 중에서 가장 작은 수가 N번째로 큰 수가 됨

	cout << minHeap.top();
}