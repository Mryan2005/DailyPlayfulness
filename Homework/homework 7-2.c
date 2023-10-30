#include <stdio.h>
int main() {
	int n,num,min;
	scanf("%d",&n);
	scanf("%d",&num);
	min = num;
	for (int i = 2; i <= n; i++) {
		scanf("%d",&num);
		if (num < min) {
			min = num;
		}
	}
	printf("min = %d",min);
}
