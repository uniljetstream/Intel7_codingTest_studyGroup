#include <stdio.h>
//코드는 동작하는 오답? 이유 찾기!
int func(long long int num)
{
    if ((num & (num - 1)) == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int n, count;
    long long int m, temp;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &m);

        if (func(m)) // 만약 2의 n승 이면
        {
            m >>= 1;
            for (int j = 0; j < 18; j++)
            {
                if (m & 1)
                {
                    printf("%d %d", j, j);
                }
                m >>= 1;
            }
            printf("\n");
        }
        else
        {
            for (int j = 0; j < 18; j++)
            {
                if (m & 1)
                {
                    printf("%d ", j);
                }
                m >>= 1;
            }
            printf("\n");
        }
    }
}