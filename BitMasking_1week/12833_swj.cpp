#include <stdio.h>
int main(void)
{
	unsigned int a, b;
	int c;
	scanf("%d %d %d", &a, &b, &c);
	if (c % 2) printf("%d", a ^ b);
	else printf("%d", (a ^ b) ^ b);
}