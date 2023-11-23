#include <stdio.h>
int main() {
	int start = 0, number, result = 0;
	char operate,temp;
	while(1) {
		scanf("%d%c",&number,&operate);
		if(start !=0) {
			if(temp == '+') {
				result += number;
			} else if(temp == '-') {
				result -= number;
			} else if(temp == '*') {
				result *= number;
			} else if(temp == '/') {
				if(number == 0) {
					printf("ERROR");
					break;
				} else {
					result /= number;
				}
			}
			temp = operate;
			if(temp = '=' || (temp != '+' && temp != '-' && temp != '*' && temp != '/')) {
				printf("%d",result);
				break;
			}
		} else {
			start = 1;
			result = number;
			temp = operate;
			if(temp != '=' && temp != '+' && temp != '-' && temp != '*' && temp != '/') {
				printf("ERROR");
			}
		} 
	}
}
