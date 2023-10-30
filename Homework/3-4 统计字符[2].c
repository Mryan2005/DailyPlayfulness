#include <stdio.h>
int main() {
	int letter = 0, blank = 0, digit = 0, other = 0;
	const int N;
	scanf("%d", &N);
	int tempN = N;
	char inputlist[N+1];
	// init inputlist
	for (int i = 0; i < N+1; i++) {
		inputlist[i] = 0;
	}
	// input char
	for (int a = 0; a < N+1; a++) {
		inputlist[a] = getchar();
	}
	// check char
	for (int b = 1; b < N; b++) {
		for (int c = 0; c < N; c++) {
			if (inputlist[b] == inputlist[c] ) {
				inputlist[c] = 177;
				tempN--;
			}
		}
	}
	for (int d = 0; d < N; d++) {
		if (inputlist[d] == 177) {
			inputlist[d] = inputlist[d + 1];
			inputlist[d + 1] = 177;
		}
	}
	for (int e = 0; e < tempN; e++) {
		if ((inputlist[e] <= 'z' && inputlist[e] >= 'a') || (inputlist[e] <= 'Z' && inputlist[e] >= 'A')) {
			letter++;
		} else if (inputlist[e] == ' ' || inputlist[e] == '\n') {
			blank++;
		} else if (inputlist[e] <= '9' && inputlist[e] >= '0') {
			digit++;
		} else {
			other++;
		}
	}
	printf("letter = %d, blank = %d, digit = %d, other = %d", letter, blank, digit, other);
}
