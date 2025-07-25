#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int N, K;
    scanf("%d %d", &N, &K);

    int arr[5000];
    for (int i = 0; i < N; i++) {
        arr[i] = i + 1; // 사람 번호 1~N
    }

    int idx = 0;      // 현재 위치
    int remain = N;   // 남은 사람 수

    printf("<");

    for (int out = 0; out < N; out++) {
        // K번째 살아있는 사람 찾기
        int count = 0;
        while (count < K) {
            if (arr[idx] != 0) count++; // 살아있는 사람만 셈
            if (count == K) break;
            idx = (idx + 1) % N;
        }

        // 제거 및 출력
        printf("%d", arr[idx]);
        arr[idx] = 0;  // 죽임 표시

        if (out < N - 1) printf(", ");

        // 다음 시작 위치로 이동
        idx = (idx + 1) % N;
    }

    printf(">\n");
    return 0;
}
