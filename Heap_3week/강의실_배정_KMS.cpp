#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<pair<int, int>> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }

    sort(v.begin(), v.end());

    priority_queue<int, vector<int>, greater<int>> q;

    for (int i = 0; i < n; i++)
    {

        if (!q.empty() && v[i].first >= q.top())
        {
            q.pop();
        }

        q.push(v[i].second);
    }

    cout << q.size();

    return 0;
}
