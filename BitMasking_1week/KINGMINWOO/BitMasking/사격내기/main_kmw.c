#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a, b, c;

	scanf("%d %d", &a, &b);

	c = a ^ b;

	printf("%d", c);
}