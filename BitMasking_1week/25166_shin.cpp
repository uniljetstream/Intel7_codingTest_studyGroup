#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
    int won, coo;
    int ari = 1023;

    scanf("%d %d", &won, &coo);

    

    if ((won - ari) <= 0)
    {
        printf("No thanks");
        
    }

    else if (((won - ari) & coo) == (won -ari))
    {
        printf("Thanks");
    }
    else
    {
        printf("Impossible");
    }
    return 0;
}
