#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int cmp(int &a, int &b)
{
    return a > b;
}
//논문을 인용 수 기준으로 내림차순 정렬.
//인용 수 ≥ 논문 순위(1부터 시작) 조건을 만족하는 최대 수치가 H-index.
int solution(vector<int> citations) {
    int answer = 0;
    sort(citations.begin(), citations.end(), cmp);
    //6 5 3 1 0
    auto it = citations.begin();
    for(int i = 1; i <= citations.size(); i++)
    {
        if(*(it++) >= i)
        {
            answer++;
        }
    }

    return answer;
}

int main()
{
    cout << solution({3,0,6,1,5});
}