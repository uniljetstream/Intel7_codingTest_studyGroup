#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    vector<long long> a(N + 1), dp(N + 1);
    for (int i = 1; i <= N; ++i)
        cin >> a[i];

    if (N == 1)
    {
        cout << a[1] << '\n';
        return 0;
    }
    if (N == 2)
    {
        cout << a[1] + a[2] << '\n';
        return 0;
    }

    dp[1] = a[1];
    dp[2] = a[1] + a[2];
    for (int i = 3; i <= N; ++i)
    {
        dp[i] = max({
            dp[i - 1],                  // i 미선택
            dp[i - 2] + a[i],           // i 선택, i-1 미선택
            dp[i - 3] + a[i - 1] + a[i] // i-1, i 연속 선택
        });
    }
    cout << dp[N] << '\n';
    return 0;
}