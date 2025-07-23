#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n[3];

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &n[i]);
    }

    int n4Lsb[3];
    for (int i = 0; i < 3; i++)
    {
        n4Lsb[i] = n[i] & 0b1111;
    }

    
    int result;

    result = (n4Lsb[0] << 8) + (n4Lsb[1] << 4) + n4Lsb[2];

    printf("%04d", result);

    return 0;
}