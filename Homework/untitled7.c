#include <stdio.h>
#include <math.h>

double funcos( double e, double x );

int main()
{    
	double e, x;
	
	scanf("%lf %lf", &e, &x);
	printf("cos(%.2f) = %.6f\n", x, funcos(e, x));
	
	return 0;
}

double funcos( double e, double x ) {
	double y,b = 2,farb = 1;
	do {
		// farb start
		y += farb*pow(x,b) / b;
		b += 2;
		farb *= -1.0;
	} while ( y >= e);
	return y;
}

