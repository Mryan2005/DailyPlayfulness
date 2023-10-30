#include <stdio.h>
int main() {
	int letter = 0, blank = 0, digit = 0, other = 0;
	char input;
	for (int i = 1; i <= 10; i++) {
		input = getchar();
		if (( input <= 'z' && input >= 'a' ) || ( input <= 'Z' && input >= 'A' )) {
			letter++;
		} else if (input == ' ' || input  == '\n') {
			blank++;
		} else if (input <= '9' && input >= '0') {
			digit++;
		} else {
			other++;
		}
	}
	printf("letter = %d, blank = %d, digit = %d, other = %d", letter, blank, digit, other);
}
