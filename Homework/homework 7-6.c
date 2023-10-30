#include <stdio.h>
#include <math.h>
double f(double a,double n) {
	double y = 0;
	for(int i = 0; i < n; i++) {
		y += a * pow(10,i);
	}
	return y;
}
int main() {
	double a, n,sum = 0;
	scanf("%lf %lf", &a, &n);
	for(int i = 1; i <= n; i++) {
		sum += f(a,i);
	}
	printf("s = %.0lf",sum);
}
