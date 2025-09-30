#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

// N을 최대 8번 사용해서 number를 만들 수 있는 최소 사용 횟수를 구하는 문제
int solution(int N, int number)
{
    // N과 number가 같으면 N 하나만 사용하면 되므로 1 반환
    if(N == number) return 1;
    
    // vec[i] = N을 i개 사용해서 만들 수 있는 모든 수들의 집합
    // 인덱스 0은 사용하지 않고 1~8까지만 사용
    vector<set<int>> vec(9);
    
    // i개의 N을 사용해서 만들 수 있는 모든 수 계산
    for (int i = 1; i <= 8; i++)
    {
        // 1. N을 i개 이어붙인 수 생성 (ex: N=5일 때 5, 55, 555, ...)
        int repeated = 0;
        for (int j = 0; j < i; j++)
            repeated = repeated * 10 + N;   //5, 55, 555....
        vec[i].insert(repeated);
        
        // 2. j개 사용한 결과와 (i-j)개 사용한 결과를 사칙연산으로 조합
        // ex) i=4일 때: 1개+3개, 2개+2개, 3개+1개 조합
        for (int j = 1; j < i; j++)
        {
            // vec[j]에서 하나씩 가져와서 (j개 사용해서 만든 수)
            for (int a : vec[j])
            {
                // vec[i-j]에서 하나씩 가져와서 ((i-j)개 사용해서 만든 수)
                for (int b : vec[i - j])
                {
                    // 사칙연산으로 새로운 수 생성
                    vec[i].insert(a + b);  // 덧셈
                    vec[i].insert(a - b);  // 뺄셈
                    vec[i].insert(a * b);  // 곱셈
                    if(b != 0) vec[i].insert(a / b);  // 나눗셈 (0으로 나누기 방지)
                }
            }
        }
        
        // i개 사용해서 만든 수들 중에 목표 숫자가 있으면 i 반환
        if(vec[i].count(number)) return i;
    }

    // 8개까지 사용해도 만들 수 없으면 -1 반환
    return -1;
}