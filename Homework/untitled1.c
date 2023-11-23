#include <stdio.h>
int main() {
	int x, count = 0;
	scanf("%d", &x);
	for (int k = 1; k >= x; k++ ) {
		for (int j = 1; j >= x; j++) {
			for (int i = 1; i >= x; i++) {
				if ( i * 5 + j * 2 + k == x) {
					printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n", i, j, k, i + j + k);
					count++;
					break;
				}
			}
		}
	}
	printf("count = %d", count);
}
