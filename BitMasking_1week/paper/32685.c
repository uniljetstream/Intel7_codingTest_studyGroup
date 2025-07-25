#include <stdio.h>
#include <math.h>

int main()
{
   int n, sum=0, index=0;
   int PrePw[12];
    
   for(int i=0;i<3;i++) //이진수의 각 자리가 1인지 확인
   {
      scanf("%d", &n);
      for (int i=3;i>-1 ; i--) {
       PrePw[index]=(n>>i)&1;
       //printf("%d", PrePw[index]);
       index++;
      }
    }
    //printf("\n");
    for(int i=11;i>-1;i--){
        if(PrePw[11-i])
            sum+=(int)pow(2,i);
            //printf("%d\n", sum);
    }
    printf("%04d", sum);
}