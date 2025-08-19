#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{
    int N, M;
    cin >> N;
    cin >> M;

    unordered_map<string, string>gather;
    for (int i = 0; i < N; i++)
    {
        string address, pw;
        cin >> address >> pw;
        gather[address] = pw;
    }
    for (int j = 0; j < M; j++)
    {
        string find;
        cin >> find;

        if (gather.find(find) != gather.end())
        {
            cout << gather[find] << "\n";
        }
    }
    return 0;
}
