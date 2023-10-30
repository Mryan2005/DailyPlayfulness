#include <stdio.h>
int main() {
	int a = 1, mask = 1, d, e=0,temp = a;
	printf("a = %d mask = %d\n", a, mask);
	while(temp > 0){
		temp /= 10;
		e++;
	}
	for (int i = 1; i < e; i++) {
		mask *= 10;
	}
	do {
		d = a / mask;
		a %= mask;
		mask /= 10;
		printf("%d ", d);
	} while (mask > 0);
}
