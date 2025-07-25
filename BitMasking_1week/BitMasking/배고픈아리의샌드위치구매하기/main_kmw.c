#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int S, M;

	scanf("%d %d", &S, &M);

	if (S < 1024) {
		printf("No thanks");
	}
	else {
		//if ((S - 1023) & M == (S - 1023)) // => 틀림
		if (((S - 1023) & M) == (S - 1023))
			printf("Thanks");
		else
			printf("Impossible");
	}
	return 0;
}