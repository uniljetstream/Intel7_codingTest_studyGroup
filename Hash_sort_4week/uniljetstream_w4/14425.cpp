#include <iostream>
#include <set>
#include <string>

usimg namespace std;

int main
{
    int n, m, size;
    string line;
    set<string> sets;
    for(int i=0;i<n;i++)
    {
        getline(cin, line);
        sets.emplace(line);
    }

    size=sets.size();

    for(int i=0;i<m;i++)
    {
        getline(cin, line);
        sets.emplace(line);
    }
}
