#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

string solution(vector<string> participant, vector<string> completion)
{
    string answer = "";
    map<string, int> m;

    for (int i = 0; i < participant.size(); i++)
    {
        if (!m.empty() && m.find(participant[i]) != m.end())
        {
            m[participant[i]]++;
        }
        else if (!m.empty())
        {
            m.insert({participant[i], 1});
        }
        else
            m.insert({participant[i], 1});
    }
    for (int i = 0; i < completion.size(); i++)
    {
        if (m.find(completion[i]) != m.end())
            m[completion[i]]--;
    }
    for (auto it = m.begin(); it != m.end(); it++)
    {
        if (it->second > 0)
        {
            cout << it->first;
            answer = it->first;
            break;
        }
    }

    return answer;
}