#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int main()
{
	int n;
	scanf("%d", &n);

	int a, b;
	scanf("%d %d", &a, &b);

	int max;

	if (a + b == n)  //��ġ�°� ����
		max = (1 <<n) -1;

	else if (a + b == n * 2 || a + b == 0)  //������ 0
	{
		max = 0;
	}


	else
	{
		if ((a + b)> n) //1�́�ħ
		{
			max = (1<<n) - (1 <<((a+b) - n)); // 
			
		}
		else if ((a + b)< n)  //0�� ��ħ
		{
			max = (1<<n) - (1 <<(n - (a + b)));
			
		}
	}
		
	printf("%d", max);
	
	
}