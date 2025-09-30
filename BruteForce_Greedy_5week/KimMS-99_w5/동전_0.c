#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, m, count = 0;
    scanf("%d %d", &n, &m);
    int *k = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%d", &k[i]);

    int i = n - 1;
    while (1)
    {
        if (m - k[i] > 0 || m - k[i] == 0)
        {
            count++;
            // printf("m : %d, k : %d\n", m, k[i]);
            m -= k[i];
        }
        else if (m == 0 || i < 0)
            break;
        else
        {
            // printf("i : %d\n", i);
            i--;
        }
    }
    printf("%d\n", count);
}