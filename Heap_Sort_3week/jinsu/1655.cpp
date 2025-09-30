#include <iostream>
#include <queue>

using namespace std;

#include <cstdio>
#include <queue>
#include <vector>

int main() {
    std::priority_queue<int> maxheap;  // �ִ� ��
    std::priority_queue<int, std::vector<int>, std::greater<int>> minheap;  // �ּ� ��

    int n;
    scanf("%d", &n);

    int value;
    scanf("%d", &value);

    maxheap.push(value);
    printf("%d\n", maxheap.top());

    for (int i = 1; i < n; i++) {
        scanf("%d", &value);

        if (value > maxheap.top())
            minheap.push(value);
        else
            maxheap.push(value);

        // ���� ����
        if (minheap.size() > maxheap.size()) {
            int temp = minheap.top();
            maxheap.push(temp);
            minheap.pop();
        }
        else if (maxheap.size() - minheap.size() == 2) {
            int temp = maxheap.top();
            minheap.push(temp);
            maxheap.pop();
        }

        printf("%d\n", maxheap.top());
    }

    return 0;
}

  
