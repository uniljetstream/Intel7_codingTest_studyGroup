#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    map<string, string> ma;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        string s, ss;
        cin >> s >> ss;

        ma.insert({s, ss});
    }
    for (int i = 0; i < m; i++)
    {
        string s;
        cin >> s;

        if (ma.find(s) != ma.end())
        {
            cout << ma[s] << "\n";
        }
    }

    return 0;
}