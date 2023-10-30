// get a rand number between 0 and 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(NULL));
    printf("%lf\n", (double)rand() / RAND_MAX);
    return 0;
}