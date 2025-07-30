#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    vector<char> temp;

    for(int i=s.size();i>-1;i--)
    {
        temp.push_back(s.at(i));
        if(s.size()>1 && s.at(i) == ')' && s.at(i) == '(')
        {
            temp.pop_back();
            temp.pop_back();
        }
    }
    if(s.size()>0) 
        return false;
    else 
        return true;
}