#include <stdio.h>
int fact(int x) {
	int y = 1;
	for (int i = 1; i <= x; i++) {
		y *= i;
	}
	return y;
}
int main() {
	double sum = 1;
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		sum += 1.0/fact(i);
	}
	printf("%0.8lf", sum);
}
