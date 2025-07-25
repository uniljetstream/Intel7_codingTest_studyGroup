#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main()
{
    int n;
    queue<int> MyQueue;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        string command;
        getline(cin, command);

        if (command.find("push") != string::npos)
        {
            int value = stoi(command.substr(5));
            MyQueue.push(value);
        }
        else if (command == "pop")
        {
            if (MyQueue.empty())
                cout << "-1" << endl;
            else
            {
                cout << MyQueue.front() << endl;
                MyQueue.pop();
            }
        }
        else if (command == "size")
            cout << MyQueue.size() << endl;
        else if (command == "empty")
            cout << (MyQueue.empty() ? "1" : "0") << endl;
        else if (command == "front")
        {
            if (MyQueue.empty())
                cout << "-1" << endl;
            else
                cout << MyQueue.front() << endl;
        }
        else if (command == "back")
        {
            if (MyQueue.empty())
                cout << "-1" << endl;
            else
                cout << MyQueue.back() << endl;
        }
    }

    return 0;
}
