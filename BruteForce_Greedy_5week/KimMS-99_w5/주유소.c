#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N;
    long long answer = 0;
    scanf("%d", &N);

    long long *road = (long long *)malloc(sizeof(long long) * (N - 1));
    for (int i = 0; i < N - 1; i++)
        scanf("%lld", &road[i]);

    long long *price = (long long *)malloc(sizeof(long long) * N);
    for (int i = 0; i < N; i++)
        scanf("%lld", &price[i]);

    long long min_price = 1000000000;
    for (int i = 0; i < N - 1; i++)
    {
        if (min_price > price[i])
            min_price = price[i];
        answer += min_price * road[i]; // 지금까지 본 최솟값의 기름값과 가야할 거리를 곱해서 더함.
    }

    printf("%lld\n", answer);

    free(price);
    free(road);

    return 0;
}