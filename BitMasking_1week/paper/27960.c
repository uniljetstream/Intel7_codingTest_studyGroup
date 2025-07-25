#include <stdio.h>

/*
XOR == "난 너희 둘 중 한 명만 맞힌 표적은 다 맞혔는데, 너희 둘 다 못 맞히거나 둘 다 맞힌 것은 전부 안 맞혔어."
*/

int main()
{
    int a, b, c;

    scanf("%d %d", &a, &b);
    c = a ^ b;
    printf("%d", c);
}