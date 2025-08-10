#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    freopen("input.txt", "r", stdin);

    int n = 0, m = 0;
    map<string, string> ma;
    string site, passwd;
    cin >> n >> m;
    
    for(int i = 0; i < n; i++)
    {
        cin >> site >> passwd;
        ma.emplace(site, passwd);
    }
    

}
