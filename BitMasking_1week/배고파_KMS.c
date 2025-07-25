#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, a, b;
    scanf("%d", &n);
    long long *m = (long long *)malloc(sizeof(long long) * n);
    for (int i = 0; i < n; i++)
        scanf("%lld", &m[i]);

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        a = -1, b = -1;
        while (m[i])
        {
            if ((m[i] & 1) && a == -1)
            {
                a = count++;
            }
            else if ((m[i] & 1))
            {
                b = count++;
                break;
            }
            else
                count++;
            m[i] >>= 1;
        }
        if (b == -1)
            printf("%d %d\n", a - 1, a - 1);
        else
            printf("%d %d\n", a, b);
    }
}