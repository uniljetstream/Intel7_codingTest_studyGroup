#include<string>
#include <iostream>
#include <stack>
using namespace std;

bool solution(string s)
{
    stack<char> word;
    bool answer = true;

    char top;
    word.push(s.at(0));
    top = word.top();
    //cout << "top = " << top << endl;
    for (int i = 1; i < s.size(); i++)
    {
        word.push(s.at(i));
        //cout << "word.top = " << word.top() << endl;
//         if(!(word.empty()))
//         {

//         }
        if (top == '(' && word.top() == ')')
        {
            //cout << "erase" << endl;
            word.pop();
            word.pop();
            if (!(word.empty()))
            {
                top = word.top();
            }
            else
            {
                //top = ' ';
            }

        }
        else
        {
            top = word.top();
            //cout << "top = " << top << endl;
        }

    }
    if (word.empty())
    {
        answer = true;
    }
    else
    {
        answer = false;
    }
    return answer;
}