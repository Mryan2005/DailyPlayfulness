#include <stdio.h>
typedef struct {
    char name[30];
    double price;
} book;
int main() {
    int n;
    book books[10];
    scanf("%d\n", &n);
    for(int i = 0; i < n; i++) {
        gets(books[i].name);
        if(i < n - 1) {
            scanf("%lf\n", &books[i].price);
        } else {
            scanf("%lf", &books[i].price);
        }
    }
    int maxIndex = 0;
    int minIndex = 0;
    for(int i = 0; i < n; i++) {
        if(books[i].price >= books[maxIndex].price) {
            maxIndex = i;
        }
    }
    for(int i = 0; i < n; i++) {
        if(books[i].price <= books[minIndex].price) {
            minIndex = i;
        }
    }
    printf("%0.2lf, %s\n", books[maxIndex].price, books[maxIndex].name);
    printf("%0.2lf, %s", books[minIndex].price, books[minIndex].name);
}