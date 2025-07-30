#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int solution(vector<int> priorities, int location)
{
    int answer = 0;
    queue<pair<int, int>> q; // 번호, 중요도
    vector<int> v(9, 0);
    for (int i = 0; i < priorities.size(); i++)
    {
        q.push({i, priorities[i]});
        v[priorities[i] - 1]++;
    }
    int i = 9;
    while (1)
    {
        if (v[i - 1] == 0)
        {
            i--;
            continue;
        }
        if (q.front().second == i)
        {
            answer++;
            if (q.front().first == location)
                break;
            v[i - 1]--;
            q.pop();
        }
        else
        {
            q.push(q.front());
            q.pop();
        }
    }

    return answer;
}