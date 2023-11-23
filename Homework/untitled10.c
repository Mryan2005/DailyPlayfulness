#include <stdio.h>
#include <math.h>
int main() {
	int i, p, q, n, m;
	scanf("%d", &n);
	for (p = 2; p <= n / 2; p++) {
		m = sqrt(p);
		for (int i = 2; i <= m; i++) {
			if (p % i == 0) {
				break;
			}
		}
		if (i > m) {
			q = n - p;
			m = sqrt(q);
			for (int i = 2; i <= m; i++) {
				if (q % i == 0) {
					break;
				}
				if (i > m) {
					printf("%d = %d + %d", n, p, q);
					break;
				}
			}
		}
	}
}
