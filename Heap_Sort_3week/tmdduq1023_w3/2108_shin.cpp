#include <iostream>
#include <queue>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    
    priority_queue<int, vector<int>, greater<int>> mh1;
    priority_queue<int, vector<int>, greater<int>> mh2;
    priority_queue<int, vector<int>, greater<int>> mh3;
    priority_queue<int, vector<int>, greater<int>> mh4;
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int text;
    int num;
    cin >> num;
    
    for (int i = 0; i < num; i++)
    {
        cin >> text;
        mh1.push(text);
    }
    mh4 = mh3 = mh2 = mh1;
    
    int sum = 0;
    while (!(mh1.empty()))
    {
        sum = sum + mh1.top();
        mh1.pop();
    }
    double avg = (double)sum / num;
    int ans;
    if (avg >= 0)
    {
        ans = (int)(avg + 0.5);
    }
    else
    {
        ans = (int)(avg - 0.5);
    }
    cout << ans << "\n";

    int mid = mh2.size() / 2;
    for (int j = 0; j < mid; j++)
    {
        mh2.pop();
    }
    cout << mh2.top() << "\n";
    //cout << "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa" << "\n";
    
    map<int,int> m;
    while (!(mh3.empty()))
    {
        m[mh3.top()]++;
        mh3.pop();
    }
    int cnt = 0;
    int many = 0;
    for (auto& pair : m)
    {
        if (pair.second > cnt)
        {
            cnt = pair.second;
            many = pair.first;
        }
    }
    vector<int> same;
    for (auto& pair : m)
    {
        if (pair.second == cnt)
        {
            same.push_back(pair.first);
        }
    }
    sort(same.begin(), same.end());
    if (same.size() >= 2)
    {
        cout << same[1] << "\n";
    }
    else
    {
        cout << many << "\n";
    }

    int min;
    int max;
    min = mh4.top();
    while (mh4.size() > 1)
    {
        mh4.pop();
    }
    max = mh4.top();
    cout << max - min << "\n";



    return 0;
}