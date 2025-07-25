#include <stdio.h>

int main()
{
    int l, r, x;
    int index = 0;
    scanf("%d %d %d", &l, &r, &x);

    for (int i = l; i <= r; i++)
    {
        if (index != (i | x))
        {
            printf("%d", index);
            return 0;
        }
        index++;
    }
    printf("%d", index);
}