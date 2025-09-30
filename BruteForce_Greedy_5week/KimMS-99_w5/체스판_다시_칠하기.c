#include <stdio.h>
#include <stdlib.h>

int chess_check(char **chess, int i, int j);

int main(void)
{
    int N, M;
    scanf("%d %d", &N, &M);
    char **chess = (char **)malloc(sizeof(char *) * (N + 1));
    for (int i = 0; i < N; i++)
        chess[i] = (char *)malloc(sizeof(char) * (M + 1));

    for (int i = 0; i < N; i++)
        scanf("%s", chess[i]);

    int max = 50;
    for (int i = 0; i <= N - 8; i++)
    {
        for (int j = 0; j <= M - 8; j++)
        {
            int cnt = chess_check(chess, i, j);
            if (max > cnt)
                max = cnt;
        }
    }

    printf("%d", max);

    for (int i = 0; i < N; i++)
        free(chess[i]);
    free(chess);

    return 0;
}

int chess_check(char **chess, int i, int j)
{
    int cnt1 = 0, cnt2 = 0;
    char c = chess[i][j];

    for (int a = i; a < i + 8; a++)
    {
        for (int b = j; b < j + 8; b++)
        {
            if (((a + b) % 2 == 0 && chess[a][b] != c) || ((a + b) % 2 == 1 && chess[a][b] == c))
                cnt1++;

            if (((a + b) % 2 == 0 && chess[a][b] == c) || ((a + b) % 2 == 1 && chess[a][b] != c))
                cnt2++;
        }
    }
    return cnt1 > cnt2 ? cnt2 : cnt1;
}