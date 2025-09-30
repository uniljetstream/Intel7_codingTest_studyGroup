#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    set<string> s;
    int n, m, count = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        string ss;
        cin >> ss;
        s.insert(ss);
    }
    for (int i = 0; i < m; i++)
    {
        string ss;
        cin >> ss;
        if (s.find(ss) != s.end())
        {
            count++;
        }
    }

    cout << count << "\n";

    return 0;
}