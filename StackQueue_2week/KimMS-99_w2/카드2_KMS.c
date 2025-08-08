#include <stdio.h>
#include <stdlib.h>

typedef struct quque
{
    int data;
    struct quque *next;
} quque;

quque *head = NULL;
quque *tail = NULL;

void card_q(int v);
void printq();
void dquque(void);

// 예전에 풀었던 문제
int main(void)
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        card_q(i);
    for (int i = 1; i <= n; i++)
        dquque();

    return 0;
}

void card_q(int v)
{
    quque *q = (quque *)malloc(sizeof(quque));
    q->data = v;
    q->next = NULL;
    if (head == NULL)
        head = q;
    else
        tail->next = q;
    tail = q;
}

void dquque(void)
{
    quque *dq = head;
    if (head->next == NULL)
    {
        printf("%d", dq->data);
        free(dq);
        // return n;
    }
    else
    {
        int n = head->data;
        quque *tq = head->next;
        head = head->next->next;
        card_q(tq->data);
        free(tq);
        free(dq);
        // return n;
    }
}