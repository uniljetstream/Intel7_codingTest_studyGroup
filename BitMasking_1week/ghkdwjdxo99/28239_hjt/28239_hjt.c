#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
10^18 = 약 60 비트 필요
m -> 8바이트 (64비트) long long 자료형 사용

1.  2^x + 2^y = m
    여기서 x와 y는 단 하나의 순서쌍이 보장됨

2.  m은 이진수로 봤을 때 단 두개의 비트만 1 (중요 포인트)
    ex) 10진수 10 -> 2진수 1010
        10진수 12 -> 2진수 1100

3.  m >> i & 1 를 활용해 처음 1은 x, 다음 1은 y

4.  단 10진수 2, 4, 8, 16 등 하나의 비트만 1인 경우
    x-1 하여 두 번 출력
*/

int main() {
    int n;
    long long m;
    int x = -1, y = -1;
    
    scanf("%d", &n);

    for(int cnt = 0; cnt < n; cnt++) {
        scanf("%lld", &m);
        for(int i = 0; i < 64; i++) {
            if(m >> i & 1) {
                if(x == -1)
                    x = i;
                else
                    y = i;
            }
        }
        if(y == -1)
            printf("%d %d", x-1, x-1);
        else
            printf("%d %d", x, y);
        printf("\n");
        x = -1, y = -1;
    }
    
    return 0;
}