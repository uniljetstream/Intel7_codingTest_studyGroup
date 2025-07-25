#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);

    int stack[10000];
    int top = 0;

    char cmd[6];

    for (int i = 0; i < N; i++) {
        scanf("%s", cmd);

        if (cmd[0] == 'p' && cmd[1] == 'u') { // push
            int x;
            scanf("%d", &x);
            stack[top] = x;
            top++;
        }
        else if (cmd[0] == 'p') 
        { // pop
            if (top > 0) {
                top--;  // 먼저 감소
                printf("%d\n", stack[top]);
            }
            else 
            {
                printf("-1\n");
            }
        }
        else if (cmd[0] == 's') 
        { // size
            printf("%d\n", top);
        }
        else if (cmd[0] == 'e') 
        { // empty
            printf("%d\n", top == 0);
        }
        else if (cmd[0] == 't') 
        { // top
            if (top > 0)
                printf("%d\n", stack[top - 1]);
            else
                printf("-1\n");
        }
    }
    return 0;
}
