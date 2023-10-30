#include <stdio.h>
int positivePrint(int x, int *list) {
	int mask = 1, d, e=0,temp = x;
	int c = 0;
	printf("x = %d mask = %d\n", x, mask);
	while(temp > 0){
		temp /= 10;
		e++;
	}
	for (int i = 1; i < e; i++) {
		mask *= 10;
	}
	do {
		d = x / mask;
		x %= mask;
		mask /= 10;
		list[c] = d;
		c++;
	} while (mask > 0);
};
int main() {
	int a[1024] = {0};
	positivePrint(700000, &a[1024]);
	for (int i = 0; i < 1024; i++) {
		printf("%d ",a[i]);
	}
	
}
