#include <stdio.h>
void printN(int N) {
    printf("%d\n", N);
}
int main() {
    for(int i = 320000; i > 0; i--) {
        printN(i);
    }
}