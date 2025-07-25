#include <stdio.h>

int countOne(long long int num1) // 2의 n승인 경우 구하기, 타입 주의 이것때문에 틀림.
{
    int count = 0;
    for (int i = 0; i < 64; i++) // long long int라 64비트임.
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
        scanf("%lld", &m);    // 타입 주의
        if (countOne(m) == 1) // 2의 n승이면
        {
            for (int i = 0; i < 64; i++) // long long int라 64비트임.
            {
                if ((m >> i) & 1)
                    printf("%d %d", i - 1, i - 1);
            }
            printf("\n");
        }
        else
        {
            for (int i = 0; i < 64; i++) // long long int라 64비트임.
            {
                if ((m >> i) & 1)
                    printf("%d ", i);
            }
            printf("\n");
        }
    }
}
