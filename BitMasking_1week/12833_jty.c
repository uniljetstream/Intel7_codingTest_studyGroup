#include <stdio.h>

int main(void)
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
    
    if(c%2 == 0)
        printf("%d", a);
    else
        printf("%d", a^b);
    return 0;
}