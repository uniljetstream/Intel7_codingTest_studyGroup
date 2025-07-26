#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main()
{
    int N;
    cin >> N;

    string command;
    queue<int> queue;
    int pushNum;

    for (int i = 0; i < N; i++)
    {
        cin >> command;
        if (command == "push")
        {
            cin >> pushNum;
            queue.push(pushNum);
        }
        else if (command == "pop")
        {
            if (queue.empty())
                cout << "-1" << endl;
            else
            {
                cout << queue.front() << endl;
                queue.pop();
            }
        }
        else if (command == "size")
        {
            cout << queue.size() << endl;
        }
        else if (command == "empty")
        {
            if (queue.empty())
                cout << "1" << endl;
            else
                cout << "0" << endl;
        }
        else if (command == "front")
        {
            if (queue.empty())
                cout << "-1" << endl;
            else
                cout << queue.front()<< endl;
        }
        else if (command == "back")
        {
            if (queue.empty())
                cout << "-1" << endl;
            else
                cout << queue.back()<< endl;
        }
    }
}