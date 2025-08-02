#include <iostream>
#include <queue> // �켱���� ť(priority_queue)�� ���
#include <vector>
#include <functional>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, x;
	cin >> N;

	priority_queue<int, vector<int>, less<int>> minHeap;
	// priority_queue<T, vector<T>, greater<T>> => �ּ� ��
	// priority_queue<�ڷ���, �����̳�, ���Լ�>
	// �ڷ���	ť�� ������ �ڷ��� Ÿ�� (��: int, pair<int,int>, ����� ���� ����ü ��)
	// �����̳�	���������� �����͸� ������ �ڷᱸ��(�Ϲ������� std::vector)
	// ���Լ�	�켱������ �����ϴ� �� ������(�ּ� �������� std::greater<T>)
	// �⺻������ priority_queue<T>�� �ִ� �� => priority_queue<T, vector<T>, less<T>>

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