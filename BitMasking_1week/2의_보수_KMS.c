#include <stdio.h>

int main()
{
    unsigned int a, b;
    int c = 0;
    scanf("%d", &a);

    b = ~a + 1;

    while (b)
    {
        if ((a ^ b) & 1)
        {
            c++;
        }
        a >>= 1;
        b >>= 1;
    }

    printf("%d\n", c);

    return 0;
}