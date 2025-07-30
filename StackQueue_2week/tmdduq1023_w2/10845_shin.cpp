#include <queue>
#include <iostream>
using namespace std;
int main()
{
    queue<int> q;
    int num;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        string str;
        cin >> str;
        if (str == "push")
        {
            int a;
            cin >> a;
            q.push(a);
        }
        else if (str == "pop")
        {
            if (q.empty())
            {
                cout << -1 << endl;
            }
            else
            {
                cout << q.front() << endl;
                q.pop();
            }
        }
        else if (str == "size")
        {
            cout << q.size() << endl;
        }
        else if (str == "empty")
        {
            cout << q.empty() << endl;
        }
        else if (str == "front")
        {
            if (q.empty())
            {
                cout << -1 << endl;
            }
            else
            {
                cout << q.front() << endl;
            }
        }
        else if (str == "back")
        {
            if (q.empty())
            {
                cout << -1 << endl;
            }
            else
            {
                cout << q.back() << endl;
            }
        }
    }
}


