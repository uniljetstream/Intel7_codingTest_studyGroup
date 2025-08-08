#include <stdio.h>
#include <string.h>

int s_top = -1; // 전역변수로 top 선언

void push(int *n, int x);
int pop(int *n);
int empty(void);
int size(void);
int top(int *n);

// 예전에 풀었던 문제
int main()
{
    int s[10000], t, a;
    char c[10];
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%s", c);
        if (strcmp(c, "push") == 0)
        {
            scanf("%d", &a);
            push(s, a);
        }
        else if (strcmp(c, "pop") == 0)
            printf("%d\n", pop(s));

        else if (strcmp(c, "size") == 0)
            printf("%d\n", size());

        else if (strcmp(c, "empty") == 0)
            printf("%d\n", empty());

        else if (strcmp(c, "top") == 0)
            printf("%d\n", top(s));
    }

    return 0;
}

void push(int *n, int x)
{
    n[++s_top] = x;
}

int pop(int *n)
{
    if (empty())
        return -1;
    else
        return n[s_top--];
}

int empty(void)
{
    if (s_top == -1)
        return 1;
    else
        return 0;
}

int size(void)
{
    return s_top + 1;
}

int top(int *n)
{
    if (empty())
        return -1;
    else
        return n[s_top];
}