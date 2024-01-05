#include <stdio.h>
typedef struct {
    char name[60];
    int birthday;
    char phoneNumber[60];
} friend;
int main() {
    int n;
    scanf("%d", &n);
    friend friends[20], *p1, *p2, *p;
    p = friends;
    for(int i = 1; i <= n; i++, p++) {
        scanf("%s", p->name);
        scanf("%d", &p->birthday);
        scanf("%s", p->phoneNumber);
    }
    p1 = friends;
    for(int i = 0; i < n; i++, p1++) {
        p2 = p1+i;
        for(int j = i+1; j <= n; j++, p2++) {
            if(p1->birthday > p2->birthday) {
                *p = *p1;
                *p1 = *p2;
                *p2 = *p;
            }
        }
    }
    p = friends;
    for(int i = 1; i <= n; i++, p++) {
        printf("%s %d %s\n", p->name, p->birthday, p->phoneNumber);
    }
}