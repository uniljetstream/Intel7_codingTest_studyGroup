#include <stdio.h>

int main(void)
{
    int S, M;
    scanf("%d %d", &S, &M);

    int needMoney = S - 1023;

    if (needMoney <= 0)
    {
        printf("No thanks");
    }
    else if (needMoney > M)
    {
        printf("Impossible");
    }
    else
    {
        int temp = needMoney & M;
        if (needMoney == temp)
        {
            printf("Thanks");
        }
        else
        {
            printf("Impossible");
        }
    }

    return 0;
}