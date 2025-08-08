/*
가. 종료조건이 뭐지?
1. nice
1.1. 두 줄이 모두 빈었다.
2. sad
2.1. 두 줄의 가장 앞 사람이 모두 순서에 맞지 않음
    --> 이 경우는 존재하지 않게 모두 leftStudent로 옮기자.
2.2. 둘 중 한 줄은 모두 비었지만 가장 앞사람이 순서에 맞지 않음.
    --> 이 경우도 모든 사람을 leftStudent로 옮겨서 leftStudent만 검사하자

나. 동작 원리
1. 먼저 스택의 탑이 비어있지 않다면 top을 검사해서 현재 순서에 맞는지 검사. 맞다면 pop 아니면 유지
2. 다음엔 덱이 비어 있지 않다면 탑을 검사해서 현재 순서에 맞는지 검사, 맞다면 pop 아니면 스택으로
*/
#include <deque>
#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int n, k;
    deque<int> waitStudent;
    stack<int> leftStudent;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        waitStudent.push_back(k);
    }

    // for (int w : waitStudent)
    //     cout << w << endl;
    int currentStudent = 1;
    while (1)
    {
        // cout << "in while" << endl;
        // while문의 종료 조건
        if (waitStudent.empty() && leftStudent.empty())
        {
            cout << "Nice" << endl;
            break;
        }
        else if (waitStudent.empty() && leftStudent.top() != currentStudent)
        {
            cout << "Sad" << endl;
            break;
        }

        // 학생 옮기기
        if (leftStudent.empty() == false)
        {
            while (1)    //스택이 가장 윗 원소가 현재 학생 순서인지 확인 필요? 좀 더 간결하게 못하나?
            {
                if (!leftStudent.empty() && leftStudent.top() == currentStudent)
                {
                    leftStudent.pop(); // 순서에 맞음.
                    currentStudent++;
                }
                else
                    break;
            }
        }
        if (waitStudent.empty() == false)
        {
            if (waitStudent.front() == currentStudent)
            {
                waitStudent.pop_front();
                currentStudent++;
            }
            else if (waitStudent.front() != currentStudent)
            {
                leftStudent.push(waitStudent.front());
                waitStudent.pop_front();
            }
            continue;
        }
    }

    return 0;
}
