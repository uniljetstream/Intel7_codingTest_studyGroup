#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int, vector<int>, greater<int>> minHeap;

    for (int val : scoville) {
        minHeap.push(val);
    }

    while (minHeap.size() > 1 && minHeap.top() < K) {
        int first = minHeap.top(); minHeap.pop();
        int second = minHeap.top(); minHeap.pop();

        int newScoville = first + second * 2;
        minHeap.push(newScoville);
        answer++;
    }


    return (minHeap.top() >= K) ? answer : -1;
}