#include <stdio.h>
typedef struct {
    char id[20];
    char name[20];
    int grade;
} student;
int main() {
    int N;
    float averageGrade;
    scanf("%d", &N);
    student students[10], *p;
    p = students;
    for(int i = 1; i <= N; i++, p++) {
        scanf("%s", p->id);
        scanf("%s", p->name);
        scanf("%d", &p->grade);
    }
    p = students;
    for(int i = 1; i <= N; i++, p++) {
        averageGrade += p->grade;
    }
    averageGrade /= N;
    printf("%0.2f\n", averageGrade);
    p = students;
    for(int i = 1; i <= N; i++, p++) {
        if(p->grade < averageGrade) {
            printf("%s %s\n", p->name, p->id);
        }
    }
}