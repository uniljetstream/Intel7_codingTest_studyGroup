#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* b를 계속 XOR 하면 2개의 값이 계속 반복됨
* 따라서 c 횟수를 전부 해줄 필요 없음
*/

int main() {
	int a, b, c;
	int result = 0;
	scanf("%d %d %d", &a, &b, &c);

	result = a ^ b;
	result = (c % 2) == 1 ? result : result ^ b;

	printf("%d", result);

	return 0;
}