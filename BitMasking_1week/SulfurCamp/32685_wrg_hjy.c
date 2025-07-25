#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main() {
    int nums[3];
    scanf("%d %d %d", &nums[0], &nums[1], &nums[2]);

    char bin[3][5];

    for (int i = 0; i < 3; i++) {
        int val = nums[i] & 15;
        for (int j = 3; j >= 0; --j) {
            bin[i][3 - j] = ((val >> j) & 1) ? '1' : '0';
            
        }
        //printf("%s \n", bin[i]);
    }
    char bin_sum[13];

	strcpy(bin_sum, bin[0]);
	strcat(bin_sum, bin[1]);
	strcat(bin_sum, bin[2]);

    //printf("%s\n", bin_sum); 

    int bin_dec = 0;
    for (int i = 0; i < 12; i++)
    {
		bin_dec = (bin_dec << 1) | (bin_sum[i] - 0);
    }
	
    printf("%d\n", bin_dec);

    return 0;
}
