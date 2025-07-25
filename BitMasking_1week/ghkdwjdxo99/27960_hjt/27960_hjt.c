#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int aScore, bScore;
	scanf("%d %d", &aScore, &bScore);

	printf("%d", aScore ^ bScore);

	return 0;
}