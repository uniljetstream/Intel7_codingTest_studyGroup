#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    int N;
    cin >> N;

    string command;
    stack<int> stack;
    int pushNum;

    for (int i = 0; i < N; i++)
    {
        cin >> command;
        if (command == "push")
        {
            cin >> pushNum;
            stack.push(pushNum);
        }

        else if (command == "pop")
        {
            if (stack.empty())
                cout << "-1" << endl;
            else
            {
                cout << stack.top() << endl;
                stack.pop();
            }
        }

        else if (command == "size")
        {
            cout << stack.size() << endl;
        }

        else if (command == "empty")
        {
            if (stack.empty())
                cout << "1" << endl;
            else
                cout << "0" << endl;
        }

        else if (command == "top")
        {
            if (stack.empty())
                cout << "-1" << endl;
            else
                cout << stack.top() << endl;
        }
    }
}