#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    if (a <= 1023)
        printf("No thanks\n");
    else if (((a - 1023) & b) == (a - 1023))
        printf("Thanks\n");
    else
        printf("Impossible\n");

    return 0;
}