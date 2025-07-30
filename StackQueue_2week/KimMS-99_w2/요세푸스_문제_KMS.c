#include <stdio.h>
#include <stdlib.h>

typedef struct jsph
{
    int data;
    struct jsph *next;
} jsph;

jsph *head = NULL;
jsph *tail = NULL;

void en(int n);
void de(int n);

// 예전에 풀었던 문제
int main(void)
{
    int K, N; // N : 수, K : 번째
    scanf("%d %d", &N, &K);
    for (int i = 1; i <= N; i++)
        en(i);
    printf("<");
    for (int i = 1; i <= N; i++)
        de(K);

    // for (int i = 0; i < N * 2; i++)
    // {
    //     printf("%d ", head->data);
    //     head = head->next;
    // }

    return 0;
}

void en(int n)
{
    jsph *q = (jsph *)malloc(sizeof(jsph));
    q->data = n;
    if (head == NULL)
    {
        head = q;
        head->next = head;
    }
    else
    {
        tail->next = q;
        q->next = head;
    }
    tail = q;
}

void de(int n)
{
    jsph *q = head;
    if (head->next == head)
        printf("%d>", q->data);
    else
    {
        if (n > 1)
        {
            jsph *temp = q;
            for (int i = 1; i < n; i++)
            {
                temp = q;
                q = q->next;
            }
            temp->next = q->next;
        }
        head = q->next;
        if (n == 1)
            tail->next = head;
        printf("%d, ", q->data);
    }
    free(q);
}
