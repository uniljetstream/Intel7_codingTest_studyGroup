#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (c % 2 == 0)
        printf("%d\n", a);
    else
        printf("%d\n", a ^ b);

    return 0;
}