#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

typedef struct
{
    node *top;
} stack;

void init(stack *s);
void push(stack *s, int c);
int pop(stack *s);
int top_index(stack *s);

// 예전에 풀었던 문제
int main(void)
{
    int t, check = 0, target_num = 1;
    scanf("%d", &t);
    int *n = (int *)malloc(sizeof(int) * t);
    stack s1;
    stack s2;
    init(&s1);
    init(&s2);
    for (int i = t; i > 0; i--)
        scanf("%d", &n[i - 1]);
    for (int i = 0; i < t; i++)
        push(&s1, n[i]);

    while (target_num <= t)
    {
        if ((top_index(&s1) != -1) && target_num != top_index(&s1) && target_num != top_index(&s2))
            push(&s2, pop(&s1));
        else if (target_num == top_index(&s1))
        {
            pop(&s1);
            target_num++;
        }
        else if (target_num == top_index(&s2))
        {
            pop(&s2);
            target_num++;
        }
        else if (top_index(&s1) == -1 && top_index(&s2) == -1)
            break;
        else
        {
            check = -1;
            break;
        }
    }
    if (check == 0)
        printf("Nice\n");
    else
        printf("Sad\n");

    return 0;
}

void init(stack *s)
{
    s->top = NULL;
}

void push(stack *s, int c)
{
    node *n = (node *)malloc(sizeof(node));
    n->data = c;
    n->next = s->top;
    s->top = n;
}

int pop(stack *s)
{
    if (s->top == NULL)
        return -1;
    else
    {
        node *n = s->top;
        int c = s->top->data;
        s->top = n->next;
        free(n);
        return c;
    }
}

int top_index(stack *s)
{
    if (s->top == NULL)
        return -1;
    else
        return s->top->data;
}