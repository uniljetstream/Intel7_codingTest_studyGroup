
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int n;
	long long m[10000] = { 0 };
	int xy_array[2] = { 0 };  //2의 지수값의 배열
	int* pxy_array = xy_array;
	long long mask = 1;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%ld", &m[i]);
	}

	for (int i = 0; i < n; i++)
	{
		int x = 0; int  y = 0;
		for (int j = 0; j < 60; j++)
		{
			if (m[i] & (mask << j))
			{
				*pxy_array = j;
				pxy_array++;
			}

			
		}
		

		if (!xy_array[1])  //m이 2의제곱근
		{
			xy_array[0] = xy_array[0]-1;
			xy_array[1] = xy_array[0];
		}
		
		printf("%d %d\n", xy_array[0], xy_array[1]);

		pxy_array = xy_array;
		xy_array[0] = 0;
		xy_array[1] = 0;
		


	}



}