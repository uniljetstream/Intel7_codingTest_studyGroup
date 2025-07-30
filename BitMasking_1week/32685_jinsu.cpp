#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int main()
{
	int ari_money = 1023;
	int kugi_money, sandwich;
	

	scanf("%d %d", &sandwich, &kugi_money);

	
	if (sandwich <= 1023)
	{
		printf("No thanks");
	}
	else
	{
		 int need_money = sandwich - ari_money;
		 need_money = need_money & 0x11111111;

		 if ((need_money & kugi_money)<need_money)
		 {
			 printf("Impossible");
		 }

		 else
		 {
			 printf("Thanks");
		 }
	}



}