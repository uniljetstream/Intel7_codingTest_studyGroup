#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int main()
{
    int N, M;
    cin >> N;
    cin >> M;
    int cnt = 0;

    unordered_set<string>gather;
    string letter;
    
    for (int i = 0; i < N; i++)
    {
        cin >> letter;
        gather.insert(letter);
    }

    for (int j = 0; j < M; j++)
    {
        cin >> letter;
        if (gather.find(letter) != gather.end())
        {
            cnt++;
        }
    }
    cout << cnt << "\n";
    return 0;
}
