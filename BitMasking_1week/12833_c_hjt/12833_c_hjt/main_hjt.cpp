#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* b�� ��� XOR �ϸ� 2���� ���� ��� �ݺ���
* ���� c Ƚ���� ���� ���� �ʿ� ����
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