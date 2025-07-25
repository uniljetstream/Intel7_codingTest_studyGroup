#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int A, B;
	int result;
	scanf("%d %d", &A, &B);
	result = A ^ B;
	printf("%d", result);
}