#include <stdio.h>
#include <math.h>
int main() {
	int a,b,c;	// 三角形的三条边a、b、c
	// 三角形面积计算公式
	scanf("%d %d %d",&a,&b,&c);
	double area,perimeter,s;
	if (a + b > c && c + b > a && c + a > b) {
		perimeter = a + b + c;
		s = perimeter/2;
		area = sqrt((s*(s-a)*(s-b)*(s-c)));
		printf("area = %.2f; perimeter = %.2f",area,perimeter);
	} else {
		printf("These sides do not correspond to a valid triangle");
	}
	
}
