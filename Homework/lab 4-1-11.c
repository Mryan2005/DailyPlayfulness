#include <stdio.h>
#include <math.h>
int main() {
	double height,n,sumDistence=0;
	scanf("%lf %lf", &height, &n);
	sumDistence += height;
	for (int i = 1; i <= n; i++){
		height *= 1.0/2.0;
		if (i == n) {
			sumDistence += height;
		} else {
			sumDistence += (height * 2.0);
		}
		
	}
	if(n == 0){
		printf("%.1lf %.1lf",sumDistence,0.0);
	} else {
		printf("%.1lf %.1lf",sumDistence,height);
	}
	
}
