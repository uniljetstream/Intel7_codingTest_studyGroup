#include <stack>
#include <iostream>
using namespace std;
int main()
{
    stack<int> s;
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
            s.push(a);
        }
        else if (str == "pop")
        {
            if (s.empty())
            {
                cout << -1 << endl;
            }
            else
            {
                cout << s.top() << endl;
                s.pop();
            }
        }
        else if (str == "size")
        {
            cout << s.size() << endl;
        }
        else if (str == "empty")
        {
            cout << s.empty() << endl;
        }
        else if (str == "top")
        {
            if (s.empty())
            {
                cout << -1 << endl;
            }
            else
            {
                cout << s.top() << endl;
            }
        }
    }

}