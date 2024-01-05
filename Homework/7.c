#include <stdio.h>
int main() {
    // init start
    int N;
    scanf("%d", &N);
    int a[1000] = {0};
    int b[1000] = {0};
    int count = 0;
    char ch =getchar();
    for(int x = 0; x < N; x++) {
        scanf("%d%c", &a[x], &ch);
    }
    // init end
    // let's go
    for(int x = 0; x < N; x++) {
        for(int x1 = 0; x1 < x; x1++) {
            if( b[x1] + a[x] <= 100) {
                b[x1] += a[x];
                printf("%d %d\n",a[x], x1+1);
                goto out;
            }
        }
        b[x] = a[x];
        printf("%d %d\n",a[x], x+1);
        out:;
    }
    for(int i = 0; i < N; i++) {
        if(b[i] != 0) {
            count++;
        }
    }
    printf("%d", count);
}