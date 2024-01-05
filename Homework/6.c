#include <stdio.h>
int main() {
    // init
    int N;
    int a[1000] = {0};
    int b[1000] = {0};
    char ch;
    scanf("%d%c",&N, &ch);
	for(int i = 0; i < N; i++) {
		scanf("%d%c",&a[i], &ch);
	}
    // counting
    for(int x = 0; x < N; x++) {
        for(int x1 = 0; x1 < x; x1++) {
            if(a[x] == a[x1]) {
                b[x1]++;
                goto out;
            }
        }
        b[x]++;
        out:;
    }
    // processing
    int max = 0;
    for(int x = 0; x < N; x++) {
        if(b[x] != 0) {
            if(b[x] > b[max]) {
                max = x;
            }
        }
    }
    printf("%d %d", a[max], b[max]);
}