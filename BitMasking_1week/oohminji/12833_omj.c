#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int A, B, C;
	int result;
	
	scanf("%d %d %d", &A, &B, &C);
	if (C % 2) result = A ^ B;
	else result = (A ^ B) ^ B;

	printf("%d", result);

	return 0;
}