#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int l, r, x;

	scanf("%d %d %d", &l, &r, &x);

	if ((l | x) == 0) {
		printf("%d", (r | x) + 1);
	}
	else {
		printf("0");
	}

	return 0;
}