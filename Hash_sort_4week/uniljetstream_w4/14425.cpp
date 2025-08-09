#include <iostream>
#include <set>
#include <string>

using namespace std;

int main()
{
    int n, m, size, answer=0;
    string nline, mline;
    set<string> sets;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> nline;
        sets.emplace(nline);
    }

    // for(string s:sets)
    // {
    //     cout << s << " ";
    // }
    for (int i = 0; i < m; i++)
    {
        cin >> mline;
        answer += sets.count(mline);
        // cout << i << ":" << answer << endl;
    }

    cout << answer;
}
