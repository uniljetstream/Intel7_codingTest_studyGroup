#include <iostream>
#include <map>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, m;
    string address, passwd;
    map<string, string> memo;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> address >> passwd;
        memo.emplace(address, passwd);
    }

    for (int i = 0; i < m; i++)
    {
        cin >> address;
        cout << memo.at(address) << endl;
    }
}