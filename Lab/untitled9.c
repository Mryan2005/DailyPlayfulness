#include <stdio.h>
struct studentInformation {
	char *sex;
	int old;
	char *address;
};
struct student {
	char *id;
	char *name;
	struct studentInformation information;
};
void getSomeThings(struct student *a) {
	printf("please input your name: ");
	scanf("%s", &a->name);
	printf("please input your address: ");
	scanf("%s", &a->information.address);
}
void print(const struct student *a) {
	printf("name: %s\n", a->name);
	printf("address: %s\n", a->information.address);
}
int main() {
	struct student a;
	getSomeThings(&a);
	print(&a);
}
