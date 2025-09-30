#include <iostream>
#include <queue> // �켱���� ť(priority_queue)�� ���
#include <vector>
#include <functional> // ���Լ� less�� ����ϱ� ���� �������
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, x;
	cin >> N;

	//priority_queue<int> maxHeap; // => �⺻������ �ִ� ��
	priority_queue<int, vector<int>, less<int>> maxHeap;
	// priority_queue<T, vector<T>, less<T>> => �ִ� ��

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