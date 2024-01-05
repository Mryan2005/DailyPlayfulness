#include <stdio.h>
#include <string.h>
typedef struct {
    int sex;
    char name[8];
    char mate[8];
} stu;
int main() {
    static stu students[50], *p, *q;
    p = students;
    int N;
    scanf("%d", &N);
    for(int i = 1; i <= N; i++, p++) {
        scanf("%d %s", &p->sex, p->name);
    }
    p = students;
    q = students + (N - 1);
    for(int i = 1; i <= N/2; i++, p++) {
        if(p->sex == 1) {
            for(int i = 1; i <= N/2; i++, q--) {
                if(q->sex == 0 && *(q -> mate) == 0) {
                    strcpy(q->mate,p->name);
                    strcpy(p->mate,q->name);
                    break;
                }
            }
        } else {
            for(int i = 1; i <= N/2; i++, q--) {
                if(q->sex == 1 && *(q -> mate) == 0) {
                    strcpy(q->mate,p->name);
                    strcpy(p->mate,q->name);
                    break;
                }
            }
        }
    }
    for(int i = 0; i < N/2; i++) {
        printf("%s %s\n", students[i].name, students[i].mate);
    }
}