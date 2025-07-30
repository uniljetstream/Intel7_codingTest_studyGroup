#include <stdio.h>
#include <string.h>

typedef struct
{
    int f;
    int b;
    int data[100000];
} q;

void push(q *n, int v);
int pop(q *n);
int empty(q *n);
int front(q *n);
int back(q *n);

// 예전에 풀었던 문제
int main()
{
    int N, v;
    q qq = {-1, -1};
    char ord[10];
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%s", ord);
        if (strcmp(ord, "push") == 0)
        {
            scanf("%d", &v);
            push(&qq, v);
        }
        else if (strcmp(ord, "pop") == 0)
            printf("%d\n", pop(&qq));
        else if (strcmp(ord, "empty") == 0)
            printf("%d\n", empty(&qq));
        else if (strcmp(ord, "size") == 0)
            printf("%d\n", qq.b - qq.f);
        else if (strcmp(ord, "front") == 0)
            printf("%d\n", front(&qq));
        else if (strcmp(ord, "back") == 0)
            printf("%d\n", back(&qq));
    }

    return 0;
}

void push(q *n, int v)
{
    n->data[++(n->b)] = v;
}

int pop(q *n)
{
    if (empty(n))
        return -1;
    else
        return n->data[++(n->f)];
}

int empty(q *n)
{
    if (n->b == n->f)
        return 1;
    else
        return 0;
}

int front(q *n)
{
    if (empty(n))
        return -1;
    else
        return n->data[(n->f) + 1];
}

int back(q *n)
{
    if (empty(n))
        return -1;
    else
        return n->data[n->b];
}