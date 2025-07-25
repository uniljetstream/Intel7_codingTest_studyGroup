#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int A, B, C, res;
    printf("(0 < A, B, C ≤ 10^9) 사이의 세개의 정수를 입력하세요 : ");
    scanf("%d %d %d", &A, &B, &C);
    res = A;
    if (0 < A && A <= 1000000000 && 0 < B && B <= 1000000000 && 0 < C && C <= 1000000000)
    {
        for (int i = 0; i < C; i++)
        {
            res = res ^ B;
        }
        printf("%d", res);
    }
    return 0;
}