#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> citations)
{
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int ct : citations) {
        pq.push(ct);
        if (pq.size() > pq.top()) {
            pq.pop();
        }
    }
    return pq.size();
}
