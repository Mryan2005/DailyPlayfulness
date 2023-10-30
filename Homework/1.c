// include stdio.h
#include <stdio.h>

int main() {
	// set an int value sum
	int sum = 0;
	// input a
	int a = 0;
	while (1) {
		scanf("%d", &a);
		// check a is 0 or nagtive number
		if (a >= 0) {
			// check a is even or odd
			if (a % 2 != 0) {
				// add it to sum
				sum += a;
			}
		} else {
			// break the loop
			break;
		}
	}
	// print sum
    printf("%d\n", sum);
}