#include <stdio.h>
int main() {
	int n,a,b,c,mask = 100,m;
	scanf("%d",&n);
	m = n;
	if (n >= 100 && n <= 999) {
		a = n / mask;
		n %= mask;
		mask /= 10;
		b = n / mask;
		n %= mask;
		mask /= 10;
		c = n;
		if(m == a*a*a+b*b*b+c*c*c) {
			printf("Yes");
		} else {
			printf("NO");
		}
	} else {
		printf("Invalid Value.");
	}
}
