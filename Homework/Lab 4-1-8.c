#include <stdio.h>
#include <math.h>
int main() {
	double sum, eps, a = 1, b,f = 1;
	scanf("%lf", &eps);
	do {
		b = 1.0 / a;
		sum += 1.0 * f * b;
		a += 3;
		f *= -1;
	} while ( b > eps );
	printf("sum = %lf",sum);
}
