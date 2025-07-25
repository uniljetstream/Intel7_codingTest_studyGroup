#include <stdio.h>

int main(void)
{
    int scoreA, scoreB, scoreC;
    scanf("%d %d", &scoreA, &scoreB);

    scoreC = scoreA^scoreB;

    printf("%d", scoreC);

    return 0;
}