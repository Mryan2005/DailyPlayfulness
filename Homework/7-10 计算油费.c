#include <stdio.h>
int main() {
	// 加油量a，汽油品种b（90、93或97）和服务类型c（m - 自助，e - 协助）
	int a,b;
	double result;
	char c;	
	scanf("%d %d %c",&a,&b,&c);
	switch (b) {
	case 90:
		// price is 6.95
		if(c == 'm') {
			result = a * 0.95 * 6.95;
		} else if (c == 'e') {
			result = a * 0.97 * 6.95;
		}
		break;
	case 93:
		// price is 7.44
		if(c == 'm') {
			result = a * 0.95 * 7.44;
		} else if (c == 'e') {
			result = a * 0.97 * 7.44;
		}
		break;
	case 97:
		// price is 7.93
		if(c == 'm') {
			result = a * 0.95 * 7.93;
		} else if (c == 'e') {
			result = a * 0.97 * 7.93;
		}
		break;
	}
	printf("%.2f",result);
}
