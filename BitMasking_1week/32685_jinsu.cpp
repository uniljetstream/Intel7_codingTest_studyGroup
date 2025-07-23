#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int main()
{
	int num1, num2, num3;
	int total_num = 0;
	scanf("%d %d %d", &num1, &num2, &num3);

	num1 = (num1 & 0x0f)<<8;
	num2 = (num2 & 0x0f)<<4;
	num3 = num3 & 0x0f;
	
	total_num = num1 | num2 | num3;

	printf("%04d", total_num);
	




}