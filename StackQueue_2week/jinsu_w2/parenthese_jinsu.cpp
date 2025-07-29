#include<string>
#include <iostream>
#include <stack>
#include <queue>

using namespace std;

bool solution(string s)
{
    bool answer = true;

    queue<char> str_queue;
    stack<char> str_stack;




    for (char ch : s) {
        str_queue.push(ch); // �ϳ��� ���ÿ� �ֱ�
    }

    while (!str_queue.empty()) {
        if (str_queue.front() == '(')
            str_stack.push(s.front());
        else if (str_queue.front() == ')') {
            if (!str_stack.empty())
                str_stack.pop();
            else
            {
                answer = false;
                return answer;
            }

        }
        str_queue.pop(); // ���⼭ �ε��� �̵�ó�� front�� ����
    }

    if (str_stack.empty())
    {
        return answer;
    }
    else
    {
        answer = false;
    }



    return answer;
}