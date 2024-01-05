#include <stdio.h>
#include <stdlib.h>
typedef struct {
    char name[10];
    int a;
    int b;
    int c;
} workers;
int main() {
    double pro;
    int num;
    scanf("%d", &num);
    static workers worker[1000];
    workers *p = worker;
    for(int i = 1; i <= num; i++, p++) {
        scanf("%s %d %d %d", &p->name, &p->a, &p->b, &p->c);
        pro = p->a + p->b - p->c;
        printf("%s %0.2f", p->name, pro);
    }
}