#include <stdio.h>
int main() {
	int x,y = 0,mask1=0,mask2,a;
	scanf("%d",&x);
	a = x;
	do {
		a /= 10;
		mask1++;
	} while (a > 0);
	mask2 = mask1;
	do {
		mask1--;
		y *= 10;
		y += x % 10;
		x /= 10;
	} while (mask1 > 0);
	do {
		mask2--;
		printf("%d ", y % 10);
		y /= 10;
	} while (mask2 > 0);
	printf("\n");
}
