    #define _CRT_SECURE_NO_WARNINGS
    #include<stdio.h>

    int main() {
        int N;
        int B;
        int R;
        int k=0;

        scanf("%d",&N);
        B = ~N + 1;
        R = N ^ B;
        for(int i =0; i<32; i++)
        {
            if(((R >> i) & 1) == 1) k++;
        }
        printf("%d",k);
        return 0;
    }

