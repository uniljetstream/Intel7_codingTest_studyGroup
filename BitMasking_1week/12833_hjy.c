#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);

	// N과 N의 2의 보수를 XOR 연산하여 다른 비트를 찾음
	int diff = n ^ (~n + 1);

	// XOR 결과에서 1의 개수를 계산 (Brian Kernighan's algorithm)
	int count = 0;
	while (diff != 0) {
		// 이 연산은 diff에서 가장 오른쪽에 있는 1비트를 제거합니다.
		diff &= (diff - 1);
		count++;

	}

	printf("%d\n", count);
	return 0;

}