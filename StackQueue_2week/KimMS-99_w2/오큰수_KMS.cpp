#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    vector<int> answer(n, -1);
    vector<int> a(n); // 수열 원소 입력
    stack<int> index; // 인덱스 저장
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        while (!index.empty())
        {
            // cout << "a[" << i << "] : " << a[i] << ", answer[index.top()] : " << answer[index.top()] << ", index.top() : " << index.top() << endl;
            // a의 원소(이전 값)이 현재 값보다 크면 현재 값이 오큰수가 아니기 때문에 반복문 끝
            if (a[index.top()] >= a[i])
                break;
            // 현재 값이 이전 값(a[index.top()])보다 크므로, 현재 값은 그 값의 오큰수가 됨. 즉, answer[index.top()]에 현재 값을 저장
            answer[index.top()] = a[i];
            index.pop();
        }
        index.push(i); // 현재 인덱스를 스택에 저장.
    }

    vector<int>::iterator it;
    for (it = answer.begin(); it != answer.end(); it++)
        cout << *it << " ";
    cout << endl;
    return 0;
}