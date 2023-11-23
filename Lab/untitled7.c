#include <stdio.h>
int main() {
	int a[10] = {1,2};
	auto int b[10] = {1,2};
	printf("这是数组a\n");
	for(int i = 0; i < 10; i++) {
		printf("a[%d] = %d\n",i,a[i]);
	}
	printf("这是数组b\n");
	for(int i = 0; i < 10; i++) {
		printf("b[%d] = %d\n",i,b[i]);
	}
}
