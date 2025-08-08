#include <stdio.h>

int countOne(long long int num1)
{
    int count = 0;
    for (int i = 0; i < 64; i++)
    {
        if ((num1 >> i) & 1)
        {
            count++;
        }
    }
    // printf("count : %d\n", count);
    if (count == 1)
        return 1;
    else
        return 0;
    // return count;
}

int main()
{
    int n;
    long long int m;

    scanf("%d", &n);

    for (int j = 0; j < n; j++)
    {
        scanf("%lld", &m);
        if (countOne(m) == 1)
        {
            for (int i = 0; i < 64; i++)
            {
                if ((m >> i) & 1)
                    printf("%d %d", i - 1, i - 1);
            }
            printf("\n");
        }
        else
        {
            for (int i = 0; i < 64; i++)
            {
                if ((m >> i) & 1)
                    printf("%d ", i);
            }
            printf("\n");
        }
    }
}