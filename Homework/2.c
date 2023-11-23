#include <stdio.h>
int main() {
	long int N, rabits = 1;
	int month = 1, m = 1;
	scanf("%ld", &N);
	do {
		if(month >= 3) {
			if(month % 3 == 0) {
				m++;

			}
			rabits += deltaRabits;
		}
		month++;
	} while (rabits < N);
    if(N <= 2) {
        printf("0");
    } else {
	    printf("%d", month);
    }
}
