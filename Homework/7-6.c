#include <stdio.h>
int f(int x, int n) {
	int y = 1;
	for (int i = 1; i <= n; i++) {
		y *= x;
	}
	return y;
}
int main() {
	int N,sum,a,c;
	scanf("%d", &N);
	int start = f(10, (N - 1));
	int end = f(10, N);
	for (int i = start; i < end; i++) {
		sum = 0;
		a = i;
		while(a > 0) {
			c = a % 10;
			a /= 10;
			sum += f(c,N);
		}
		if (sum == i) {
			printf("%d\n",i);
		}
	}
}
