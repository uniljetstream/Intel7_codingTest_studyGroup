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
    if (bit == (1 << N) - 1)  //��� ���� �湮�ߴ��� Ȯ��
    {
        if (W[now][0] != 0)  //���� ���÷ο� ���� ������
            return W[now][0];
        else // ������
            return INF;
    }

    if (dp[now][bit] != -1)  //���� �κ��� ������
        return dp[now][bit];

    dp[now][bit] = INF;  // ������ �ʾ����� ���Ѵ�� ����

    for (int next = 0; next < N; next++)
    {
        if (!(bit & (1 << next)) && (W[now][next] != 0))  //���� ���ø� �湮 ���� �ʾҰ� �������÷��� ���� ������
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

    int result = tsp(0, 1);  //0������ ���� ����

    cout << result;
}