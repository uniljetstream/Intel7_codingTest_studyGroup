#include <iostream>
#include <queue>
#include <cstdio>
using namespace std;

int main()
{
    int N;
    cin >> N;

    string str;

    queue<int> qu;
    for (int i = 0; i < N; i++)
    {
        cin >> str;
        if (str == "push")
        {
            int X;
            cin >> X;
            qu.push(X);
        }
        else if (str == "pop")
        {
            if (qu.empty() == 0)
            {
                qu.pop();
                cout << qu.front() << endl;
            }
            else
                cout << -1 << endl;
        }
        else if (str == "size")
        {
            cout << qu.size() << endl;
        }
        else if (str == "empty")
        {
            cout << qu.empty() << endl;
        }
        else if (str == "front")
        {
            if (qu.empty() == 0)
                cout << qu.front() << endl;
            else
                cout << -1 << endl;
        }
        else if (str == "back")
        {
            if (qu.empty() == 0)
            {
                cout << qu.back() << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }

    return 0;
}

