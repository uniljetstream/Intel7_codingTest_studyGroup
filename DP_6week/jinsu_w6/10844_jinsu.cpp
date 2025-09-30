#include <iostream>
using namespace std;

const int MOD = 1000000000;

int main() {
    int stair_dp[101][10] = { 0 };
    int n;
    cin >> n;

    // n = 1의 자리
    for (int i = 1; i <= 9; i++) {
        stair_dp[1][i] = 1;
    }
        
  
    for (int i = 2; i <= n; i++) {
        stair_dp[i][0] = stair_dp[i - 1][1] % MOD;  //끝 0 이려면 n-1 숫자의 끝이 1
        for (int j = 1; j <= 8; j++) {
            stair_dp[i][j] = (stair_dp[i - 1][j - 1] + stair_dp[i - 1][j + 1]) % MOD;
        }
        stair_dp[i][9] = stair_dp[i - 1][8] % MOD; //끝 9 이려면 n-1 숫자의 끝이 8
    }

    // 결과 계산
    int result = 0;
    for (int i = 0; i <= 9; i++) {
        result = (result + stair_dp[n][i]) % MOD;
    }

    cout << result << endl;
}
