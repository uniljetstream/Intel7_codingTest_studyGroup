#include <stdio.h>
#include <stdlib.h>
#include <limits.h> // LLONG_MAX

int main(void)
{
    int N, M;
    long long B;
    long long min = LLONG_MAX; // LONG LONG 의 최댓값
    int a;
    scanf("%d %d %lld", &N, &M, &B);
    int **ary = (int **)malloc(sizeof(int *) * N); // N * M 2차원 배열 동적할당 --> ary[N][M]
    for (int i = 0; i < N; i++)
        ary[i] = (int *)malloc(sizeof(int) * M);

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            scanf("%d", &ary[i][j]);

    for (int i = 0; i <= 256; i++) // 땅이 0부터 256일때 모든 경우의 수 검사
    {
        // tempM : 인벤토리에 있는 땅의 개수, time_count : i번 땅을 만들기 위해 걸린 시간
        long long tempM = B, time_count = 0;
        for (int j = 0; j < N; j++)
        {
            for (int k = 0; k < M; k++)
            {
                if (ary[j][k] > i) // 검사중인 땅의 높이(i)보다 지금 땅이 높은경우
                {
                    time_count += (ary[j][k] - i) * 2;
                    tempM += ary[j][k] - i;
                }
                else if (ary[j][k] < i) // 검사중인 땅의 높이(i)보다 지금 땅이 낮은 경우
                {
                    time_count += i - ary[j][k];
                    tempM -= i - ary[j][k];
                }
            }
        }
        // 인벤토리가 음수(땅 추가시 땅이 없는데 추가했음)가 아니면서 걸린 시간이 더 적을때
        // 걸린 시간이 같으면 땅의 높이가 큰거로 갱신
        if ((min > time_count || (time_count == min && i > a)) && tempM >= 0)
        {
            a = i;
            min = time_count;
            // printf("a : %d, min : %lld\n", a, min);
        }
    }

    printf("%lld %d\n", min, a);
    for (int i = 0; i < N; i++)
        free(ary[i]);
    free(ary);

    return 0;
}