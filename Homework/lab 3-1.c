#include <stdio.h>
int main() {
    int N,score,good = 0,pass = 0,fail = 0;
    scanf("%d",&N);
    for ( int i = 1; i <= N; i++) {
        scanf("%d", &score);
        if (score >= 85) {
            good++;
        }   else if ( score >= 60 ) {
            pass++;
        } else {
            fail++;
        }
    }
    printf("%d %d %d", good, pass, fail);
}