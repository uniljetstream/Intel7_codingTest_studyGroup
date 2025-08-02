#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> qu;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        qu.push(i + 1);
    }
    while (qu.size() != 1)
    {
        qu.pop();
        qu.push(qu.front());
        qu.pop();
    }

    cout << qu.front() << endl;

    return 0;
}