#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n, index;
    vector<string> stack;
    string L, words;

    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        getline(cin, words);
        int startNum = 0;
        words = words + ' ';
        for (int i = 0; i < words.size(); i++)
        {
            // cout << words.at(i) << endl;
            if (words.at(i) == ' ')
            {
                stack.push_back(words.substr(startNum, i));
                startNum = i+1;
            }
        }
    }
    for (string word : stack)
    {
        cout << word << endl;
    }
}