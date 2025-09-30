#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, M;
    cin >> N >> M;
    unordered_map<string, string> passwordTable;

    for (int i = 0; i < N; i++) {
        string site;
        string pwd;
        cin >> site >> pwd;
        passwordTable[site] = pwd;
    }
    for (int i = 0; i < M; i++) {
        string querySite;
        cin >> querySite;
        auto it = passwordTable.find(querySite);
        if (it != passwordTable.end())
            cout << it->second << '\n';
    }
    return 0;
}