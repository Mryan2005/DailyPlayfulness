#include <stdio.h>
int main() {
	int a = 1;
	{
		int a = 2, b = 3;
		printf("a = %d\n",a);
		printf("b = %d\n",b);
	}
	printf("a = %d",a);
	printf("b = %d\n",b);
}
