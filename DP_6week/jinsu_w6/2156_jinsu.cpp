#include <iostream>
#include <algorithm>
using namespace std;

int amount[10001];
int glass[10001];

int main(void)
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> glass[i];

    amount[1] = glass[1];
    amount[2] = glass[1] + glass[2];
    amount[3] = max({ glass[1] + glass[2], glass[2] + glass[3], glass[1] + glass[3] });

    for (int i = 4; i <= n; i++)
    {
        int a = amount[i - 1];                              // i번째 잔을 마시지 않음
        int b = amount[i - 2] + glass[i];                   // i번째 잔만 마심
        int c = amount[i - 3] + glass[i - 1] + glass[i];    // i-1, i번째 잔 마심
        amount[i] = max({ a, b, c });
    }

    cout << amount[n];
    return 0;
}
