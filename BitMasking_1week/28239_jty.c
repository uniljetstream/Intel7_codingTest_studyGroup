#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    long long m[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &m[i]);
    }
    int x = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;

        int j = 0;

        while(1)
        {
            if (m[i] & (m[i] - 1))
            {
                if (m[i] & (1 << j))
                {
                    count++;
                    if (count == 1)
                    {
                        x = j;
                    }
                    else if (count == 2)
                    {
                        y = j;
                        break;
                    }
                }
            }
            else
            {
                if ((m[i] >> 1) & (1 << j))
                {
                    x = j;
                    y = j;
                    break;
                }
            }
            j++;
        }
        printf("%d %d\n", x, y);
    }
    return 0;
}