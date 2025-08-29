#include <array>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, k, w, v, max_val = 0;
    cin >> n >> k;
    vector<array<int, 2>> vec(n);
    vector<int> dp(k + 1, 0);   //무게 k까지 가능

    for (int i = 0; i < n; i++)
    {
        cin >> w >> v;
        vec[i] = {w, v};
    }

    // 각 물건에 대해
    for (int i = 0; i < n; i++)
    {
        // 무게를 역순으로 (중복 방지) //내가 구현 못했는데 뭔소리인지 모르겠음.
        for (int w = k; w >= vec[i][0]; w--)
        {
            dp[w] = max(dp[w], dp[w - vec[i][0]] + vec[i][1]);
            //      현재 상태      이전무게 +       현재가치
        }
    }

    cout << dp[k] << endl; // 무게 k로 얻을 수 있는 최대 가치
}