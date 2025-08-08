#include <iostream>
#include <queue> // 우선순위 큐(priority_queue)를 사용
#include <vector>
#include <functional> // 비교함수 less를 사용하기 위한 헤더파일
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, x;
	cin >> N;

	//priority_queue<int> maxHeap; // => 기본적으로 최대 힙
	priority_queue<int, vector<int>, less<int>> maxHeap;
	// priority_queue<T, vector<T>, less<T>> => 최대 힙

	for (int i = 0; i < N; i++) {
		cin >> x;

		if (x != 0) {
			maxHeap.push(x);
		}
		else {
			if (maxHeap.empty()) {
				cout << 0 << '\n';
			}
			else {
				cout << maxHeap.top() << '\n';
				maxHeap.pop();
			}
		}
	}
}