#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
0000 0000 0000 0000 0000 0000 0000 0010     A
1111 1111 1111 1111 1111 1111 1111 1110     A의 2의 보수 B
1111 1111 1111 1111 1111 1111 1111 1100     diffrent

1. A와 B를 XOR 연산 (A ^ B) = diffrent
2. Diffrent에서 >> 연산으로 한 칸씩 밀면서 1과 AND 연산으로 비교
3. 위 연산으로 1의 개수를 count 하여 출력
*/

int main() {
	int A, B, diffrent;
    int cnt = 0;

    scanf("%d", &A);

    B = (~A) + 1;
    diffrent = A ^ B;

    for(int i = 31; i >= 0; i--) {
        if(diffrent >> i & 1)
            cnt++;
    }

    printf("%d", cnt);

	return 0;
}