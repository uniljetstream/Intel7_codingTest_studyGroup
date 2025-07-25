#include <stdio.h>

int main(void)
{
    int N, N2;
    scanf("%d", &N);

    N2 = ~N + 1;

    int count = 0;
    for(int i=0; i<32; i++)
    {
        if(N<<i != N2<<i)
            count++;
    }

    printf("%d", count);

    return 0;
}