#include <stdio.h>
#include <stdlib.h>

int chess_check(char **chess, int i, int j);

int main(void)
{
    int N, M;
    int i, j;
    char **chess;
    goto input;
start:
    chess = (char **)malloc(sizeof(char *) * (N + 1));
    i = 0;
chess:
    if (i < N)
    {
        chess[i++] = (char *)malloc(sizeof(char) * (M + 1));
        goto chess;
    }
    i = 0;
input_chess:
    if (i < N)
    {
        scanf("%s", chess[i++]);
        goto input_chess;
    }
    int max = 64;
    i = 0;
chess_check_i:
    if (i <= N - 8)
    {
        j = 0;
    chess_check_j:
        if (j <= M - 8)
        {
            int cnt = chess_check(chess, i, j);
            if (max > cnt)
                max = cnt;
            j++;
            goto chess_check_j;
        }
        i++;
        goto chess_check_i;
    }

    printf("%d", max);

    for (int i = 0; i < N; i++)
        free(chess[i]);
    free(chess);

    return 0;

input:
    scanf("%d %d", &N, &M);
    goto start;
}

int chess_check(char **chess, int i, int j)
{
    int cnt1 = 0, cnt2 = 0;
    int a, b;
    a = i;
a:
    if (a < i + 8)
    {
        b = j;
    b:
        if (b < j + 8)
        {
            if (((a + b) % 2 == 0 && chess[a][b] != 'W') || ((a + b) % 2 == 1 && chess[a][b] != 'B'))
                cnt1++;
            if (((a + b) % 2 == 0 && chess[a][b] != 'B') || ((a + b) % 2 == 1 && chess[a][b] != 'W'))
                cnt2++;
            b++;
            goto b;
        }
        a++;
        goto a;
    }

    return cnt1 < cnt2 ? cnt1 : cnt2;
}