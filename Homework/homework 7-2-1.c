#include <stdio.h>
int main() {
	int n,str = 64,c = 0;
	scanf("%d", &n);
	while (n != 0) {
		c++;
		str++;
		printf("%c ",str);
		if(c == n) {
			printf("\n");
			n--;
			c = 0;
		}
	}
}
