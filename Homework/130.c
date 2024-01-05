#include <stdio.h>
int main() {
	static char bin[33], res[16];
	scanf("%s", &bin);
	char *p = bin, *q = res;
	int sum = 0;
	int digit = 0;
	for(int j = 1; j <= 4; j++) {
		for(int i = 1; i <= 8; i++, p++) {
			if(*p == '0') {
				sum *= 2;
			} else if(*p == '1') {
				sum = sum * 2 + 1;
			}
		}
		int flag = 0;
		while (sum >= 0) {
			digit = sum / 100;
			sum %= 100;
			if(digit != 0) {
				*q = digit + '0';
				q++;
				flag = 1;
			}
			digit = sum / 10;
			sum %= 10;
			if(digit != 0 || flag == 1) {
				*q = digit + '0';
				q++;
			}
			digit = sum;
			*q = digit + '0';
			q++;
			sum = -1;
		}
        sum = 0;
		flag = 0;
		if(j < 4) {
			*q = '.';
			q++;
		}
	}
	printf("%s", res);
}