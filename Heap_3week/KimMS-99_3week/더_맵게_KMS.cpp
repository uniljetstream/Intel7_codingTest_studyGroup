#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K)
{
    int answer = 0, count = 0;
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < scoville.size(); i++)
        pq.push(scoville[i]);

    while (pq.top() < K)
    {
        if (pq.size() == 1)
            break;
        int temp = pq.top();
        pq.pop();
        temp += pq.top() * 2;
        count++;
        pq.pop();
        pq.push(temp);
    }
    if (pq.top() >= K)
        answer = count;
    else
        answer = -1;

    return answer;
}