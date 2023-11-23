#include<stdio.h>
void f(int *p) {
    *p = 2;
}
int main() {
    int a = 100;
    printf("a = %d\n",a);
    f(&a);
    printf("a = %d\n",a);
    return 0;
}