#include <stdio.h>
int main() {
	int x, sum = 0;
	while (1) {
		scanf("%d", &x);
		if (x > 0) {
			if (x % 2 != 0) {
				sum += x;
			}
		} else {
			break;
		}
	}
	printf("%d", sum);
}
