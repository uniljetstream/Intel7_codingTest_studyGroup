#include <iostream>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K)
{
    priority_queue<int, vector<int>, greater<int>> result(scoville.begin(), scoville.end());

    int cnt = 0;
    int food1 = 0, food2 = 0;
    
    while (result.top() < K)
    {
        if (result.size() <= 1)
            return -1;
        
        food1 = result.top();
        result.pop();

        food2 = result.top();
        result.pop();
        // cout << "food1 food2 : " << food1 << " "<< food2 << endl;
        result.push(food1 + food2*2);
        
        cnt++;
    }
    return cnt;
}