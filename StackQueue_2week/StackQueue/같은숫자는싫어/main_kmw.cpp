#include <vector>
#include <stack>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    stack<int> s;

    while (!arr.empty()) {
        if (s.empty() || arr.back() != s.top()) {
            s.push(arr.back());
            arr.pop_back();
        }
        else {
            arr.pop_back();
        }
    }
    while (!s.empty()) {
        answer.push_back(s.top());
        s.pop();
    }

    return answer;
}