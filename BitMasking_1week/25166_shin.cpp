#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
    int won, cookie;
    int ari = 1023;

    scanf("%d %d", &won, &cookie);

    int diff = won - ari;

    if (diff <= 0)
    {
        printf("No thanks");
        return 0;
    }

    if (diff % cookie != 0)
    {
        printf("Impossible");
        return 0;
    }

    int money = diff / cookie;

    if (money == 0)
    {
        printf("Impossible");
        return 0;
    }

    if ((money & (money - 1)) == 0) //impissible이 안나옴....
    {
        printf("Thanks");
    }
    else
    {
        printf("Impossible");
    }

    return 0;
}