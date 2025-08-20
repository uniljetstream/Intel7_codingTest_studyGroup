#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int N, K, coin;
    coin = 0;
    vector<int> coins(N);
    cin >> N >> K;
    for (int i = 0; i < N; i++)
    {
        cin >> coins[i];
    }
    for (int i = N - 1; i >= 0; i--)
    {
        if (K >= coins[i])
        {
            coin += K / coins[i];
            K = K % coins[i];
        }
    }
    cout << coin << '\n';
    return 0;
}
