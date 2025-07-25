#include <stdio.h>
/*
백준 12833번
xor은 같으면 0, 다르면 1
이 때 (a xor b) xor b는 자기자신이 된다.
*/
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if(c%2==0)
    {
      printf("%d", a);
    }
    else
    {
      printf("%d", a ^ b);
    }
}