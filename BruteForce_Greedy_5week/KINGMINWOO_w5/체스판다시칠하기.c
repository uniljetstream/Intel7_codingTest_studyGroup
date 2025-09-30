#include <stdio.h>

int main()

{
    
    char chess[50][50];
    int N, M;
    scanf("%d %d", &N, &M);
    
    char c[51];
    
    for (int i = 0; i < N; i++) {
        scanf("%s", c);
        for (int j = 0; j < M; j++) {
            chess[i][j] = c[j];
            }
    }
    int count;
    int min_count = 65;
    for (int a = 7; a < M; a++) {
        for (int b = 7; b < N; b++) {
            count = 0;
            for (int i = b - 7; i <= b ; i++) {
                for (int j = a - 7; j <= a; j++) {
                    if ((i + j) % 2 == 0) {
                        if (chess[i][j] != 'W') count += 1;
                    }
                    else {
                        if (chess[i][j] != 'B') count += 1;
                    }
                }
            }
            if (count < min_count) min_count = count;
        }
    }
    for (int a = 7; a < M; a++) {
        for (int b = 7; b < N; b++) {
            count = 0;
            for (int i = b - 7; i <= b; i++) {
                for (int j = a - 7; j <= a; j++) {
                    if ((i + j) % 2 == 0) {
                        if (chess[i][j] != 'B') count += 1;
                    }
                    else {
                        if (chess[i][j] != 'W') count += 1;
                    }
                }
            }
            if (count < min_count) min_count = count;
        }
    }   

    printf("%d", min_count);
    
    return 0;
}