#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n;
    string command;
    string number;
    vector<string> stack;

    cin >> n;
    cin.ignore(); // 입력 버퍼 지우기

    for (int i = 0; i < n; i++)
    {
        getline(cin, command);
        if (command.find("push") != string::npos)
            stack.push_back(command.substr(5)); // substr(): 두번째 인자 생략시 끝까지
        else if (command == "pop")
        {
            if (stack.empty() == true)
                cout << "-1" << endl;
            else
            {
                cout << stack.back() << endl;
                stack.pop_back();
            }
        }
        else if (command == "size")
            cout << stack.size() << endl;
        else if (command == "empty")
        {
            if (stack.empty() == true)
                cout << '1' << endl;
            else
                cout << '0' << endl;
        }
        else if (command == "top")
        {
            if (stack.empty() == true)
                cout << "-1" << endl;
            else
                cout << stack.back() << endl;
        }
    }
}
