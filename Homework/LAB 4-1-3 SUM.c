// include stdio.h
#include <stdio.h>
int main() {
    // input N
    int N,digit = 0,n;
    scanf("%d",&N);
    n = N;
    // create a loop to calculate the digit
    while ( n > 0 ) {
        // get the diget
		n /= 10;
        digit++;
    }
    // create a loop to sum the digit
    int sum = 0;
    while ( N > 0) {
        sum += N % 10;
        N /= 10;
    }
    // print the digit and sum
    printf("%d %d",digit ,sum);
}
