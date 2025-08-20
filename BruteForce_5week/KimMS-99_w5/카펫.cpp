#include <string>
#include <vector>
#include <iostream>

using namespace std;

/* 완성된 카펫에 가로길이에 양쪽 끝(-2)를 제거하고 세로 길이에 제일 위와 제일 아래를(-2) 제외한 값을 곱한값이 yellow랑 같으면 정답임.*/
vector<int> solution(int brown, int yellow)
{
    vector<int> answer;
    int t = brown + yellow, b;
    for (int i = 2; i <= t; i++)
    {
        if (t % i == 0)
        {
            // cout << "i : " << i << ", (t / i - 2) * (i - 2) : " << (t / i - 2) * (i - 2) << "\n";
            if ((t / i - 2) * (i - 2) == yellow) // 위에 말한 수식 검사
            {
                answer.push_back(t / i);
                answer.push_back(i);
                break;
            }
        }
    }

    return answer;
}