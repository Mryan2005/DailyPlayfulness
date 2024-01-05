#include <stdio.h>
typedef struct {
    long int id;
    int pos1;
    int pos2;
} position;
int main() {
    int N, M, s;
    scanf("%d", &N);
    position positions[1000], *p;
    p = positions;
    for(int i = 1; i <= N; i++, p++) {
        scanf("%ld %d %d", &p->id, &p->pos1, &p->pos2);
    }
    scanf("%d", &M);
    p = positions;
    for(int j = 1; j <= M; j++) {
        scanf("%d", &s);
        p = positions;
        for(int i = 1; i <= N; p++, i++) {
            if(p->pos1 == s) {
                printf("%ld %d\n", p->id, p->pos2);
                break;
            }
        }
    }
}