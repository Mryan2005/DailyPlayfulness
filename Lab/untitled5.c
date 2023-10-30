#include <stdio.h>
int main() {
	int letter = 0, blank = 0, digit = 0, other = 0;
	char input;
	char text[1024] = {'0'};
	for (int j = 0; j < 1024; j++) {
		input = getchar();
		text[0] = input;
	}
	for(int i=0;i<=0;i++){
		//TODO
	}
	for (int i = 1; i <= 13; i++) {
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
