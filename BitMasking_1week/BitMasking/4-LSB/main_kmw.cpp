#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a, b, c, password;
	
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	a = ((~a & 15) ^ 15) << 8;
	
	b = ((~b & 15) ^ 15) << 4;
	
	c = (~c & 15) ^ 15;
	

	password = a + b + c;
	if (password >= 1000)
		printf("%d", password);
	else {
		if(password / 100 > 0)
			printf("0%d", password);
		else {
			if (password / 10 > 0)
				printf("00%d", password);
			else
				printf("000%d", password);
		}
	}

	return 0;
}