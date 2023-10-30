#include <stdio.h>
double F(double x,int count) {
    int num = x;
    for (int i = 1; i < count; i++) {
        x *= 10;
        num += x;
    }
    return num;
}
int main() {
    int n,a,sum = 0;
    scanf("%d %d",&a, &n);
    for ( int i = 1; i <= n; i++) {
        sum += F(a,i);
    }
    printf("%d",sum);
}