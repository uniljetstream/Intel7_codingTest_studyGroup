#include <stdio.h>

int main()
{
    int n, a, b, res;
    scanf("%d %d %d", &n, &a, &b);

    if (a + b == n)
        res = (1 << n) - 1;
    else if (a + b == 0 || a + b == n * 2)
        res = 0;
    else
    {
        if (a + b > n)
            res = (1 << n) - (1 << ((a + b) - n)); // (a + b) - n 만큼 오른쪽 비트에 0을 채우고 나머지 비트 1로
        else
            res = (1 << n) - (1 << (n - (a + b))); // n - (a + b) 만큼 오른쪽 비트에 0을 채우고 나머지 비트 1로
    }

    printf("%d\n", res);

    return 0;
}
