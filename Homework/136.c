#include <stdio.h>
typedef struct {
    int h;
    int m;
    int s;
} time;
int main() {
    time time1;
    int s;
    scanf("%d:%d:%d", &time1.h, &time1.m, &time1.s);
    scanf("%d", &s);
    time1.s += s;
    if(time1.s>= 60) {
        time1.s -= 60;
        time1.m++;
    }
    if(time1.m >= 60) {
        time1.m -= 60;
        time1.h++;
    }
    if(time1.h >= 24) {
        time1.h -= 24;
    }
    printf("%d:%d:%d", time1.h, time1.m, time1.s);
}