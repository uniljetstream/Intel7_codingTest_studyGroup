#include <array>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow)
{
    vector<int> answer;
    vector<array<int, 2>> temp;
    array<int, 2> divi;
    for (int i = 1; i <= (int)sqrt(yellow); i++)
    {
        if (yellow % i == 0)
        {
            divi.at(0) = yellow / i;
            divi.at(1) = i;
            cout << yellow / i << " " << i << endl;
            temp.push_back(divi);
        }
    }
    for (const auto &t : temp)
    {
        if (((t.at(0) + 2) * (t.at(1) + 2)) == (brown + yellow))
        {
            answer.push_back(t.at(0) + 2);
            answer.push_back(t.at(1) + 2);
        }
    }
    return answer;
}