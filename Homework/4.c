// Goldbach conjecture

#include <stdio.h>
#include <math.h>
int isprime(long int x) {
    int y = 1;
    for (long int i = 2; i <= sqrt(x); i++) {
        if(x % i == 0){
            y = 0;
            break;
        }
    }
    return y;
}
int main() {
    long int N;
    scanf("%ld",&N);
    for(long int p = 2; p <= N; p++) {
        for(long int q = p;q <= N; q++) {
            if(p + q == N && isprime(q) && isprime(q)){
                printf("%ld = %ld + %ld\n",N,p,q);
                goto out;
            }
        }
    }
    out:;
}