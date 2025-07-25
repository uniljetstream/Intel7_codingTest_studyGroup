#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    unsigned long long m;
    int a, b;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &m);
        if (m & 1) // m이 홀수 일때
        {
            for (int i = 0;;i++)
            {
                if (((m & ~(m & 1)) >> i) == 1)
                {
                    printf("%d %d\n",0, i);
                    break;
                }
            }
        }
        else // m이 짝수 일때
        {
            for (int i = 32; i >= 1;i--)
            {
                //if (m < (2 << i));
                if (m > ((unsigned long long)2 << i))
                {
                    a = i;
                    m = m - ((unsigned long long)2 << i);
                }
            }
        }
    }
    return 0;
}