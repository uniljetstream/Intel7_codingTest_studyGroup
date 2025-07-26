#include <iostream>
#include <string>
#include <sstream>
#include <stack>

using namespace std;

int main()
{
    int N;
    cin >> N;
    cin.ignore();

    for (int i = 0; i < N; i++)
    {
        stack<string> stack;
        string inputString;

        getline(cin, inputString);

        istringstream iss(inputString);

        string token;
        while (iss >> token)
        {
            stack.push(token);
        }

        cout << "Case #" << i + 1 << ":";
        while (!stack.empty())
        {
            cout << " " << stack.top();
            stack.pop();
        }
        cout << endl;
    }
}