#include <stdio.h>

int main()
{
    int l, r, x, result = 0;
    scanf("%d %d %d", &l, &r, &x);

    for (int i = l; i <= r; i++)
        if ((i | x) == result)
            result++;

    printf("%d\n", result);

    return 0;
}