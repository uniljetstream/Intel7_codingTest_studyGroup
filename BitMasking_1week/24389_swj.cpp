#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n,c = 0;
	scanf("%d", &n);
    for(int i=0;i<sizeof(n) * 8; i++)
    {
        if(n >= (1<<i))
        {
            if(((~n + 1) & 1 << i) ^ (n & (1 << i))) c++;
        }
        else c++;
    }
    printf("%d",c);
}