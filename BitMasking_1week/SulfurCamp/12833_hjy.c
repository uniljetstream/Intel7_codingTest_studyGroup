/*
XOR 성질 일련의 값에 같은 값을 여러번 XOR 연산할 때
짝수 횟수로 연산을 진행하면 결과가 0이 되므로 값이 유지된다.
즉, 같은 값을 홀 수 횟수로 XOR 연산을 진행한 경우에만 연산이 이루어진다.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    // XOR 연산은 홀수 횟수에서만 적용된다.
    if (c % 2 == 1) {
        printf("%d\n", a ^ b);
    }
    else {
    // 짝수 횟수에서는 a의 값이 유지된다.
        printf("%d\n", a);
    }
    return 0;
}
