#include <stdio.h>
#include <math.h>
int main() {
	double a, b, c;	// 3个浮点系数a、b、c
	scanf("%lf %lf %lf", &a, &b, &c);
	double root1, root2;
	if (a != 0) {
		if( (pow(b,2) - 4.0* a * c >= 0 ) ){
			root1 = (-1 * b - sqrt((pow(b, 2) - 4.0 * a * c))) / (2 * a);
			root2 = (-1 * b + sqrt((pow(b, 2) - 4.0 * a * c))) / (2 * a);
			if (root1 > root2) {
				printf("%.2f\n%.2f", root1, root2);
			} else if (root2 > root1) {
				printf("%.2f\n%.2f", root2, root1);
			} else {
				printf("%.2f", root1);
			}
		} else {
			printf("%.2f+%.2fi\n%.2f-%.2fi",(-1.0*b)/(2*a),sqrt((4.0*a*c - pow(b,2)))/(2.0*a)*1.0,(-1.0*b) / (2*a),sqrt((4.0*a*c - pow(b,2)))/(2.0*a)*1.0);
		}
	} else if ( a == 0 && b == 0 && c == 0 ) { 
		printf("Zero Equation");
	} else if (a == 0 && b == 0 && c != 0) {
		printf("Not An Equation");
	} else if ( a == 0 && b != 0 && c != 0 ) { 
		root1 = -1*c/b;
		printf("%.2f", root1);
	}
}
