#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    while (n--) {
        long long m;
        scanf("%lld", &m);

        if (m % 2 == 0) {
            long long mid = m / 2;

            if (mid > 0 && (mid & (mid - 1)) == 0) {
                int k = 0;
                while ((1 << k) != mid) k++;
                printf("%d %d\n", k, k);
                continue;
            }
        }
        int bit[2], id = 0;
        for (int j = 0; j < 64; j++) {
            if (m & (1 << j)) {
                bit[id++] = j;
                if (id == 2) break;
            }
        }
        printf("%d %d\n", bit[0], bit[1]);
    }

    return 0;
}
#endif
////////////////////////////////////////////////////////////
