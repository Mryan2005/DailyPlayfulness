#include <stdio.h>
int main() {
    int N;
    double sum = 0,num,a,b;
    scanf("%d",&N);
    if ( N != 1) {
        a = 1;
        b = 2;
        num = 1.0 * b / a;
        sum += num;
        for(int i = 1; i <= N-1; i++) {   
            b = a + b;
            a = b - a;
            num = 1.0 * b / a;
            sum += num;
        }
        printf("%.2f",sum);
    } else {
        sum = 1.0 * (2 / 1);
        printf("%.2f",sum);
    }
    return 0;
}