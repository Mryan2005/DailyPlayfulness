#include <stdio.h>
int main () {
    int number = 5;
    int *value = &number;
    printf("a = [%d]",value);
    *value = 10;
    printf("a = [%d]",value);
    printf("a = [%d]",number);
}  
