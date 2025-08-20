#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int n, k, coin, count = 0;
    stack<int> jungu;

    cin >> n >> k;

    // 동전 입력받기
    for (int i = 0; i < n; i++)
    {
        cin >> coin;
        jungu.emplace(coin);
    }

    while (!jungu.empty())
    {
        if (jungu.top() > k)
            jungu.pop();
        else
        {
            count += k / jungu.top();
            k = k % jungu.top();
            jungu.pop();
        }
    }

    cout << count;
}