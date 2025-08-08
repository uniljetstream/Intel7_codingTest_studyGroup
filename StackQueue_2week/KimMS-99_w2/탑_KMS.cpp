#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
    int n;
    cin >> n; // 개수 입력 예) 5
    vector<int> s(n);
    vector<int> answer(n, 0); // 0으로 초기화한 출력 값
    stack<int> index;         // 현재 입력한 값이 보고있는 인덱스를 저장하는 값
    for (int i = 0; i < n; i++)
    {
        cin >> s[i]; // 높이 입력 예) 6 9 5 7 4
        // 스택 x(인덱스)에 값이 있으면서 현재 입력값이 s[인덱스]보다 크면 그 탑은 레이저 신호를 수신하지 못하므로 지운다
        while (!index.empty() && s[index.top()] < s[i])
            index.pop();
        if (!index.empty()) // x(인덱스)의 값이 있다는 것은 입력값보다 크다는 뜻이므로 해당하는 인덱스에 +1 한 값을 결과를 출력하는 코드에 넣으면 된다.
            answer[i] = index.top() + 1;
        index.push(i); // 현재 탑에 인덱스 저장
    }

    for (int i = 0; i < n; i++)
        cout << answer[i] << " ";

    return 0;
}