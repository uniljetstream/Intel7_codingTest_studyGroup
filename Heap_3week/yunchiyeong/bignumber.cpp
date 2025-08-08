#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(const string& a,const string& b)
{
    return a > b;
}

string solution(vector<int> numbers) {
    string answer = "";

    vector<string> v;

    for(int i = 0; i < numbers.size(); i++)
    {
        v.push_back(to_string(numbers.at(i)));
    }

    sort(v.begin(), v.end(), cmp);
    
    for(int i = 0; i < v.size(); i++)
    {
        answer += v.at(i);
    }

    if(answer.at(0) == '0')
    {
        answer = "0";
    }
    
    return answer;
}

int main()
{
    cout << solution({6, 10, 2}) << endl;
    // cout << solution({3, 30, 34, 5, 9}) << endl;
    
    return 0;
}