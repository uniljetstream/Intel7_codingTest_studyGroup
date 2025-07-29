#include<string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    bool answer = true;

    stack<char> st;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' || st.empty())
        {
            st.push(s[i]);
        }
        else if (s[i] == ')' and st.top() == '(')
        {
            st.pop();
        }
    }
    if (st.empty() == true)
    {
        answer = true;
    }
    else
    {
        answer = false;
    }
//    }

    return answer;
}