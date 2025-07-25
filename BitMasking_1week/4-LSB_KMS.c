#include <stdio.h>

int main()
{
    int n[3], result;
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &n[i]);
        n[i] &= 15;
    }

    result = (n[0] << 8) + (n[1] << 4) + n[2];
    printf("%04d", result);

    return 0;
}