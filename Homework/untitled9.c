#include <stdio.h>
#include <math.h>
int isprime(int x) {
	int y = 1;
	for (int i = 2; i < x/2; i++) {
		if ( x % i == 0) {
			y = 0;
			break;
		}
	}
	return y;
}
int main() {
	int n, result[20] = {0},a;
	scanf("%d", &n);
	int k = 0;
	for (int i = 2; i <= n; i++) {
		a = pow(2, i) - 1;
		if (isprime(a)) {
			result[k] = pow(2, i) - 1;
			k++;
		}
	}
	if (result[0] == 0) {
		printf("None");
	} else {
		for (int i = 0; i < k; i++) {
			printf("%d\n", result[i]);
		}
	}
}
