#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
    int n;

    long long int m;
    int x = 0;
    int y = 0;
    int count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &m);
        if (m % 2 == 0)
        {
            for (int k = 0; k < 64; k++)
            {
                if (((m >> k) & 1) == 1)
                {
                    count++;
                    /*x = k;
                    printf("%d ", x);*/
                }
            }
            if (count == 2)
            {
                for (int q = 0; q < 64; q++)
                {
                    if (((m >> q) & 1) == 1)
                    {
                        x = q;
                        printf("%d ", x);
                    }
                }
                count = 0;
            }
            else if (count == 1)
            {
                for (int l = 0; l < 64; l++)
                {
                    if (((m / 2 >> l) & 1) == 1)
                    {
                        x = l;
                        printf("%d %d", x, x);
                    }
                }
                count = 0;
            }
            printf("\n");
        }
 
        else if (m % 2 == 1)
        {
            x = 0;
            for (int j = 0; j < 64; j++)
            {
                if ((((m - 1) >> j) & 1) == 1) y = j;
            }
            printf("%d %d\n", x, y);
        }
    }

    return 0;
}