#include <stdio.h>
double fact(int x) {
	int y = 1;
	for (int i = x; i > 0; i--) {
		y *= i;
	}
	return y;
}
int main() {
	int n, m;
	double fn, fm, fm_n, result;
	scanf("%d %d", &m, &n);
    if (m < n) {
        fn = fact(n);
        fm = fact(m);
        fm_n = fact((n-m));
        result = fn / (fm*fm_n);
        printf("result = %.0f", result);
    } else if ( m == n || n == 0) {
        printf("result = 1");
    }
}
