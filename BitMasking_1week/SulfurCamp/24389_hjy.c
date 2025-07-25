//2의 보수

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int N, K;

	scanf("%d", &N);

	K = N ^ (~N + 1);

	int count = 0;

	while (K != 0) {

		K &= (K - 1);

		count++;

	}

	printf("%d\n", count);

	return 0;
	
}
/*
N과 K를 입력받는다.
K에 원본 N과 N의 보수에 1을 더한 값을 XOR 연산을 진행한다.
K의 비트 중에 1이 하나라도 존재한다면 while문이 작동합니다.
K와 K-1을 AND 연산 후 그 결과를 다시 K에 넣습니다.
이 연산은 K에서 가장 오른쪽에 있는 1 비트를 하나씩 제거합니다.
그리고 1개가 제거될 때마다 Count가 1씩 증가합니다.
즉, 모든 1이 지워지게 되면 Count에는 K의 비트가 갖고 있는 1의 성분의 개수를 갖습니다.
*/