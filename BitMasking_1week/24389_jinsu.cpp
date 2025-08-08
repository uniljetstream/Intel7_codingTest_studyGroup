//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	int a_two_comple;
//	a_two_comple = ~a + 1;
//
//	int cnt = 0;
//	int mask = 1;
//	for (int i = 0; i < 32; i++)
//	{	
//		
//		
//		if ((a &mask) ^ (a_two_comple & mask))
//			cnt++;
//		
//		mask *= 2;
//		
//	}
//	
//	printf("%d", cnt);
//}