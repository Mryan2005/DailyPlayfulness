#include <stdio.h>
int main () {
    int i = 0,sum = 0;
    while ( i < 100 ) {
        if (i % 6 == 0){
            sum += i;
        }
        i++;
    }
    printf("%d",sum);
}