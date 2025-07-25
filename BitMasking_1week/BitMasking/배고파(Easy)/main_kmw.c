#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int n;
	long long m[10000];
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%lld", &m[i]);
	}

	for (int i = 0; i < n; i++) {
		int k = 0;
		int s[2];
		for (int j = 0; j < 60; j++)
		{
			if ((m[i] >> j) & 1) {
				s[k++] = j;
			}
		}

		if (k == 2) {
			printf("%d %d\n", s[0], s[1]);
		}
		else {
			printf("%d %d\n", s[0] - 1, s[0] - 1);
		}
	}

	return 0;
}