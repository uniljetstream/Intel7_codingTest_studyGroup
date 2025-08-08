#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> stack[n];
    string input;
    cin.ignore(); // 버퍼 비우기

    for (int i = 0; i < n; i++)
    {
        getline(cin, input);
        char temp[100];
        strcpy(temp, input.c_str());
        char *tok = strtok(temp, " ");
        while (tok != nullptr)
        {
            stack[i].push_back(tok);
            tok = strtok(nullptr, " ");
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Case #" << i + 1 << ": ";
        while (!stack[i].empty())
        {
            cout << stack[i].back() << " ";
            stack[i].pop_back();
        }
        cout << "\n";
    }

    return 0;
}
