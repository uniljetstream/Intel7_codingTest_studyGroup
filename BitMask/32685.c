#include <stdio.h>
#include <stdlib.h>
/*
1. 입력받은 자연수를 이진수 문자열로 만들기
2. 끝에 네 자리만 추출
3. 이어붙히고 이걸 4자리 자연수로 출력
*/

int main()
{
    int num1, num2, num3;
    char arr[11];

    scanf("%d", &num1);
    // scanf("%d", &num2);
    // scanf("%d", &num3);

    printf("%d", itoa(num1, arr, 2));
}