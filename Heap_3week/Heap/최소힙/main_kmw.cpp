#include <iostream>
#include <queue> // 우선순위 큐(priority_queue)를 사용
#include <vector>
#include <functional>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, x;
	cin >> N;

	priority_queue<int, vector<int>, greater<int>> minHeap;
	// priority_queue<T, vector<T>, greater<T>> => 최소 힙
	// priority_queue<자료형, 컨테이너, 비교함수>
	// 자료형	큐에 저장할 자료의 타입 (예: int, pair<int,int>, 사용자 정의 구조체 등)
	// 컨테이너	내부적으로 데이터를 저장할 자료구조(일반적으로 std::vector)
	// 비교함수	우선순위를 결정하는 비교 연산자(최소 힙에서는 std::greater<T>)
	// 기본적으로 priority_queue<T>는 최대 힙 => priority_queue<T, vector<T>, less<T>>

	for (int i = 0; i < N; i++) {
		cin >> x;

		if (x != 0) {
			minHeap.push(x);
		}
		else {
			if (minHeap.empty()) {
				cout << 0 << '\n';
			}
			else {
				cout << minHeap.top() << '\n';
				minHeap.pop();
			}
		}
	}
}
