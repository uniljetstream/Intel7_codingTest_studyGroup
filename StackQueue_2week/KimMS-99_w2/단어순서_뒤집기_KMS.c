#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    char *data;
    struct node *next;
} node;

typedef struct
{
    node *head;
} stack;

int empty(stack *s);
void push(stack *s, char *c);
char *pop(stack *s);
void init(stack *s);

int main()
{
    int n;
    scanf("%d", &n);
    stack *s = (stack *)malloc(sizeof(stack) * n);
    char text[100];
    for (int i = 0; i < n; i++)
        init(&s[i]);
    getchar(); // 개행 문자 제거
    for (int i = 0; i < n; i++)
    {
        // scanf(" %[^\n]", text);
        fgets(text, sizeof(text), stdin);
        text[strlen(text) - 1] = '\0';
        char *tok = strtok(text, " ");
        while (tok != NULL)
        {
            push(&s[i], tok);
            tok = strtok(NULL, " ");
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("Case #%d: ", i + 1);
        while (!empty(&s[i]))
        {
            // printf("%s", s[i].head->data);
            // pop(&s[i]);
            char *tempC = pop(&s[i]);
            printf("%s ", tempC);
            free(tempC);
        }
        printf("\n");
    }

    return 0;
}

int empty(stack *s)
{
    if (s->head == NULL)
        return 1;
    else
        return 0;
}

void init(stack *s)
{
    s->head = NULL;
}

void push(stack *s, char *c)
{
    node *temp = (node *)malloc(sizeof(node));
    // temp->data = (char *)malloc(strlen(c) + 1);
    // strcpy(temp->data, c);
    temp->data = strdup(c); // strcpy처럼 문자열 복사에 추가적으로 메모리 할당을 해주는 함수.
    temp->next = s->head;
    s->head = temp;
}

char *pop(stack *s)
{
    if (empty(s))
        return 0;
    else
    {
        node *temp = s->head;
        s->head = temp->next;
        char *c = temp->data;
        // free(temp->data);
        free(temp);
        return c;
    }
}