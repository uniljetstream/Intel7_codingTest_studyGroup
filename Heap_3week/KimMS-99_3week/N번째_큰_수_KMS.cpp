#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    // c와 c++ 표준 stream의 동기화를 비활성화 / 사용시 scanf()/printf()와 cin/cout을 섞어 쓰면 출력 순서 예상 불가
    ios::sync_with_stdio(false); // 속도 향상(시간초과 문제 해결)
    // 내부적으로 cin과 cout을 묶어주는 과정을 수행하지 않음 / 디버깅 중에는 사용 X, 제출 시 O
    cin.tie(NULL); // 더 빠른 입력(시간초과 문제 해결)
    int n;
    cin >> n;

    priority_queue<int, vector<int>, greater<int>> q;

    for (int i = 0; i < n * n; i++)
    {
        int nn;
        cin >> nn;
        if (q.size() < n)
        {
            q.push(nn);
        }
        else if (q.top() < nn)
        {
            q.pop();
            q.push(nn);
        }
    }

    cout << q.top() << endl;

    return 0;
}
