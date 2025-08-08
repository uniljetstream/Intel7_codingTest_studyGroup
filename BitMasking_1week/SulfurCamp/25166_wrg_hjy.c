#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int S, M;
	int A = 1023;

	scanf("%d %d", &S, &M);

	if (S <= A) {
		printf("No thanks\n");
	}
	else
	{
		int B = S - A;

		if (B <= M)
		{
			printf("Thanks\n");
		}
		else
		{
			printf("Impossible\n");
		}
	}
	return 0;
}