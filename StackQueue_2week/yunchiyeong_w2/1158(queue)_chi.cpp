#include <iostream>
#include <vector>
#include <list>
#include <queue>

using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);
    int n = 0, k = 0;
    cin >> n >> k;
    
    queue<int> q;
    vector<int> ans;
    for(int i = 1; i <= n; i++)
    {
        q.push(i);
    }
    int cnt = 0;
    while(!q.empty())
    {
        cnt++;
        if(cnt % k == 0)
        {
            // cout << q.front() << " ";
            ans.push_back(q.front());
        }
        else
        {
            q.push(q.front());
        }
        q.pop();
    }

    cout << "<";
    for(int i = 0; i < ans.size() - 1; i++)
    {
        cout << ans[i] << ", ";
    }
    cout << ans[ans.size() - 1] << ">";

    return 0;
}