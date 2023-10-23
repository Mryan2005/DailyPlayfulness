#include <stdio.h>
#include <stdlib.h>
int main() {
	int choose;
	printf("[1] Encode your text\n");
	printf("[2] Decode the text\n");
	printf("Input your choose: ");
	scanf("%d", &choose);
	switch (choose) {
	case 1:
		char textbox[1024] = {'0'};
		char ch;
		char encodeTextbox[1024] = {'0'};
		for (int i = 0; i < 1024; i++) {
			ch = getchar();
			if (ch == '`') {
				textbox[i] = '`';
				break;
			} else if (ch == '\n') {
				i--;
			} else {
				printf("%d\n", ch);
				textbox[i] = ch;
				printf("That is what you have input: %s", textbox);
				printf("\n");
			}
		}
		printf("That is text which has encoded: ");
		for (int i = 0; i < 1024; i++) {
			if (textbox[i] == '`') {
				break;
			} else if (textbox[i] == ' ') {
				encodeTextbox[i] = ' ';
			} else {
				encodeTextbox[i] = (int)textbox[i];
			}
			printf("%d ", encodeTextbox[i]);
		}
		break;
	case 2:
		int code;
		char codeBox[1024] = { '0' };
		for (int i = 0; i < 1023; i++) {
			scanf("%d", &code);
			if ( code != 000 ) {
				codeBox[i] = code;
			} else {
				break;
			}
		}
		printf("The text is \"%s\"", codeBox);
		break;
	default:
		printf("I don't know how to do! Stop running.");
		break;
	}
}
