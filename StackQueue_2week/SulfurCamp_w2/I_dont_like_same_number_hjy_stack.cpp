#include <vector>
#include <iostream>
#include <stack>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    
    stack<int> s;   
    for (int i = 0; i < arr.size(); i++) 
    {
        if (s.empty() || s.top() != arr[i]) 
        {
            s.push(arr[i]);
        }
    }
    
    vector<int> rev;
    while(!s.empty())
    {
        rev.push_back(s.top());
        s.pop();
    }
    for (int i = rev.size() - 1; i >= 0; i--) 
    {
        answer.push_back(rev[i]);
    }
    return answer;
}