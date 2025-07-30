#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
    int n;
    long long answer = 0;
    cin >> n; // 개수 입력
    vector<int> h(n);
    stack<int> index; // 인덱스 저장
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];                                     // 높이 입력
        while (!index.empty() && h[index.top()] <= h[i]) // 현재 건물보다 작거나 같은 건물은 pop
        {
            index.pop();
            x++; // pop한 건물 수를 누적
        }
        if (!index.empty())  // 현재 건물보다 큰 건물이 있음
            answer += i - x; // 현재 인덱스 pop된 횟수를 빼서 볼 수 있는 건물의 수를 업데이트 함.
        else
            x = i; // 스택이 비었으므로 x인덱스를 제일 큰 건물인 현재 인덱스로 초기화(혹은 첫 건물)
        index.push(i);
    }

    cout << answer << endl;

    return 0;
}