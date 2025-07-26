#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    int count = 0;

    if (s.back() == '(')
        return false;
    
    while (!s.empty())
    {
        if(s.back() == ')')
            count++;
        else
            count--;
        
        if(count < 0)
            return false;
        s.pop_back();
    }
    if(count != 0)
        return false;
    else 
        return true;
}
int main()
{
    cout << solution("()()");
    cout << solution("(())()");
    // cout << solution("(()(");
    // cout << solution(")()(");
    // cout << solution("()()))");
    // cout << solution("()))()");
    // solution("())(()");
    //"(((())))"
}