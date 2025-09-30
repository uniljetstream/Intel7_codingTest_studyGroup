#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<pair<int, pair<int, string>>> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        int a;
        cin >> a >> s;
        v.push_back({a, {i + 1, s}});
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++)
        cout << v[i].first << " " << v[i].second.second << "\n";

    return 0;
}
