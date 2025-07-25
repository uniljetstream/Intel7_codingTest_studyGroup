#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
    unsigned int n;
    scanf("%d", &n);
    
    for (int a = 0; a < n; a++)
    {
        unsigned long long m;
        int count = 0;
        int num[2];
        scanf("%llu", &m);
        int x = -1;
        int y = -1;
        for (int i = 0; i < 64; i++)
        {
            if ((m >> i) & 1)
            {
                if (count < 2)
                {
                    num[count] = i;
                }
                count++;
            }
        }
        if (count == 1)
        {
            printf("%d %d\n", num[0] - 1, num[0] - 1);
        }
        else
        {
            printf("%d %d\n", num[0], num[1]);
        }
    }
    
    return 0;
}
