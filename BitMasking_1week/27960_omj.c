#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
    
    int Sa,Sb;
    int Sc = 0;

    scanf("%d %d", &Sa, &Sb);
    Sc = Sa ^ Sb;
    printf("%d",Sc);
    return 0;
}