//사격 내기

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int A, B, C;

	scanf("%d %d", &A, &B);

	C = A ^ B;

	printf("%d\n", C);

	return 0;
}

/*
C가 말하길 너희 둘 중 한 명만 맞힌 표적은 다 맞혔는데, 너희 둘 다 못 맞히거나 둘 다 맞힌 것은 전부 안 맞혔어.
라고 말하는데 이는 비트 연산에서 XOR의 연산과 일치합니다.
따라서 C의 사격 점수는 A와 B의 사격점수의 XOR 연산을 수행하면 얻을 수 있습니다.
*/