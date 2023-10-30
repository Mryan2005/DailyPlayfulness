// include stdio.h and stdlib.h
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// define zhailutiao struct
struct zhailutiao {
	char text[2048];
	char theme[300];
	char source[300];
	char speaker[300];
	int *next;
};
// define zhailu array
struct zhailutiao zhailu[48595] = {0};
// define zhailu_count
int zhailu_count = 0;
// define zhailu_add function
void zhailu_add() {
	printf("请输入摘录内容：");
	scanf("%s",zhailu[zhailu_count].text);
	printf("请输入摘录主题：");
	scanf("%s",zhailu[zhailu_count].theme);
	printf("请输入摘录来源：");
	scanf("%s",zhailu[zhailu_count].source);
	printf("请输入摘录作者：");
	scanf("%s",zhailu[zhailu_count].speaker);
	zhailu_count++;
}
// define zhailu_search function
void zhailu_search() {
	int i;
	char search_text[2048];
	char search_theme[300];
	char search_source[300];
	char search_speaker[300];
	printf("请输入搜索内容：");
	scanf("%s",search_text);
	printf("请输入搜索主题：");
	scanf("%s",search_theme);
	printf("请输入搜索来源：");
	scanf("%s",search_source);
	printf("请输入搜索作者：");
	scanf("%s",search_speaker);
	for (i = 0; i < zhailu_count; i++) {
		if (strcmp(search_text,zhailu[i].text) == 0 && strcmp(search_theme,zhailu[i].theme) == 0 && strcmp(search_source,zhailu[i].source) == 0 && strcmp(search_speaker,zhailu[i].speaker) == 0) {
			printf("搜索结果：\n");
			printf("摘录内容：%s\n",zhailu[i].text);
			printf("摘录主题：%s\n",zhailu[i].theme);
			printf("摘录来源：%s\n",zhailu[i].source);
			printf("摘录作者：%s\n",zhailu[i].speaker);
		}
	}
}
// define main function
int main() {
	int choose;
	while (1) {
		printf("请选择以下选项：\n");
		printf("[1] 添加摘录\n[2] 搜索摘录\n[3]退出\n");
		scanf("%d",&choose);
		if (choose == 1) {
			zhailu_add();
		} else if (choose == 2) {
			zhailu_search();
		} else if (choose == 3) {
			break;
		}
	}
	return 0;
}
