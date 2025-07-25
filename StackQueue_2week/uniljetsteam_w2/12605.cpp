#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n, index=0;
    vector<string> stack;
    string L, words;

    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        getline(cin, words);
        int startNum = 0;
        for (int j = 0; j < words.size(); j++)
        {
            if (j == (words.size() - 1))
            {
                stack.push_back(words.substr(startNum, words.size()));
            }
            else if (words.at(j) == ' ')
            {
                stack.push_back(words.substr(startNum, j-startNum));
                // cout << "substr:" << words.substr(startNum, j) << endl;
                // cout << "words : " << words << endl;
                // cout << j << endl;
                startNum = j + 1;
            }
        }

        cout << "Case #" << i+1 << ":" << " ";
        for (vector<string>::reverse_iterator it = stack.rbegin(); it != stack.rend(); it++)
        {
            cout << *it << " ";
        }

        cout << endl;
        stack.clear();
    }
}