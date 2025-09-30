#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>

using namespace std;

struct compare
{
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        if (a.first == b.first)
            return a.second > b.second;
        else
            return a.first > b.first;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    priority_queue<pair<int, int>, vector<pair<int, int>>, compare> q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        if (m == 0 && !q.empty())
        {
            cout << q.top().first * q.top().second << "\n";
            q.pop();
        }
        else if (m == 0 && q.empty())
            cout << 0 << "\n";
        else if (m > 0)
            q.push({abs(m), 1});
        else
            q.push({abs(m), -1});
    }

    return 0;
}
