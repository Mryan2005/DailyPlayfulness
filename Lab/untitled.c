#include <stdio.h>
int main() {
	int x,result;
	scanf("%d", &x);
	result = x;
	do {
		x -= 1;
		result *= x;
	} while (x>1);
	printf("%d",result);
}
