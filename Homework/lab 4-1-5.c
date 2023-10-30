#include <stdio.h>
int isprime(int x) {
    int y = 0;
    for (int i = 2; i < x; i++) {
        if ( x % i == 0) {
            y++;
            break;
        }
    }
    if (y != 0) {
        return 0;
    } else {
        return 1;
    }
    
}
int main() {
    int M,N;
    int sum = 0, nums=0;
    scanf("%d %d", &M, &N);
    for (int i = M; i <= N; i++) {
        if(isprime(i) == 1) {
            sum += i;
            nums++;
        }
    }
    printf("%d %d", nums, sum);
}