#include <iostream>
#include <algorithm>
#include <cstring>

const int INF = 1e9;
int N;
int W[16][16] = { 0 };
int dp[16][1 << 16] = { 0 };

using namespace std;

int tsp(int now, int bit)
{
    if (bit == (1 << N) - 1)  //모든 도시 방문했는지 확인
    {
        if (W[now][0] != 0)  //시작 도시로와 길이 있으면
            return W[now][0];
        else // 없으면
            return INF;
    }

    if (dp[now][bit] != -1)  //계산된 부분이 있으면
        return dp[now][bit];

    dp[now][bit] = INF;  // 계산되지 않았으면 무한대로 설정

    for (int next = 0; next < N; next++)
    {
        if (!(bit & (1 << next)) && (W[now][next] != 0))  //다음 도시를 방문 하지 않았고 다음도시로의 길이 있으면
            dp[now][bit] = min(dp[now][bit], tsp(next, bit | (1 << next)) + W[now][next]);
    }

    return dp[now][bit];
}



int main()
{
    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> W[i][j];
        }
    }

    memset(dp, -1, sizeof(dp));

    int result = tsp(0, 1);  //0번도시 부터 시작

    cout << result;
}