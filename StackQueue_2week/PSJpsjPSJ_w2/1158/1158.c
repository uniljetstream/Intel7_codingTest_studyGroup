#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int N, K;
    scanf("%d %d", &N, &K);

    int alive[5001] = { 0 };
    int eliminate[5001];
    int index = 0;
    int count = 0;
    int step = 0;
    
    while (count < N)
    {
        if (alive[index] == 0)
        {
            step++;
            if (step == K)
            {
                alive[index] = 1;
                eliminate[count++] = index + 1;
                step = 0;
            }
        }
        index++;
        if (index == N) index = 0;
    }

    printf("<");
    for (int i = 0; i < N; i++)
    {
        printf("%d", eliminate[i]);
        if (i != N - 1) printf(", ");
    }
    printf(">\n");

    return 0;
}