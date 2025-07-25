#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	unsigned int num1;
	int num2, num3;
	int cnt = 0;
	scanf("%u", &num1);
	num2 = num1;
	num1 = ~num1;
	num1++;
	//printf("보수 : %d\n", num1);
	num3 = num1 ^ num2;
	for (int i = 0; i < 32; i++)
	{
		if (num3 & (1 << i))
		{
			cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}