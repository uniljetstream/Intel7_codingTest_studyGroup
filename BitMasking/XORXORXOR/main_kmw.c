#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int A, B, C, res = 0;

	scanf("%d %d %d", &A, &B, &C);

	if (C % 2 == 0) {
		res = A;
	}
	else {
		res = A ^ B;
	}

	printf("%d", res);
}