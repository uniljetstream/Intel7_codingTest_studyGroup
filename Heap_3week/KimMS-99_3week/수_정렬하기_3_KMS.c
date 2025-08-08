#include <stdio.h>

int main()
{
    int n, arr[10000] = {
               0,
           };
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int t;
        scanf("%d", &t);
        arr[t - 1]++;
    }
    for (int i = 0; i < 10000; i++)
    {
        while (arr[i] > 0)
        {
            printf("%d\n", i + 1);
            arr[i]--;
        }
    }

    return 0;
}