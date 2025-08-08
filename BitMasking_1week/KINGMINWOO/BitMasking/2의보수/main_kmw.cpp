#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	__int32 N, M, cnt = 0; // 비주얼 스튜디오에서 컴파일
	//__int32_t N, M, cnt = 0; // 백준에서 컴파일

	scanf("%d", &N);

	M = ~N + 1;

	for (int i = 0; i < 32; i++) {
		if ((N ^ M) & (1 << i))
			cnt++;
	}
	printf("%d", cnt);
}