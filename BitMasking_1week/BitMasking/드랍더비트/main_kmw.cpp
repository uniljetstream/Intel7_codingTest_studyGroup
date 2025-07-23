#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main() {
	int N, a, b, cnt;
	int x[20], y[20];
	int maxXOR = -1;

	scanf("%d", &N);
	scanf("%d %d", &a, &b);

	int max = pow(2, N);
	int xIndex = 0, yIndex = 0;
	for (int i = 0; i < max; i++) {
		cnt = 0;
		for (int j = 0; j < N; j++) {
			if (i & (1 << j))
				cnt++;
		}
		if (cnt == a)
			x[xIndex++] = i;
		if (cnt == b)
			y[yIndex++] = i;
	}

	for (int i = 0; i < xIndex; i++) {
		for (int j = 0; j < yIndex; j++) {
			if ((x[i] ^ y[j]) >= maxXOR)
				maxXOR = (x[i] ^ y[j]);
		}
	}

	printf("%d", maxXOR);

	return 0;
}