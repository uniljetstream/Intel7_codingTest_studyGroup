#include <stdio.h>

int main()
{
    int n, reverse2_n;
    int count = 0, temp;
    scanf("%d", &n);

    reverse2_n = ~n + 1;

    temp = n ^ reverse2_n;

    for (int i = 0; i < 32; i++)
    {
        if (temp & 1)
        {
            count++;
        }
        temp >>= 1;
    }
    printf("%d", count);
}