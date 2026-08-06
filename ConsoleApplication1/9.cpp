//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main(void) {
//	int num;
//	printf("how many words will you enter?\n");
//	scanf_s("%d", &num);
//	char** strings;
//	strings = (char**)malloc(num * sizeof(char*));
//	printf("Enter %d words now\n",num);
//	char temp[40]="";
//	for (int i = 0;i < num;i++) {
//		scanf_s("%s", temp, 40);
//		strings[i] = (char*)malloc((strlen(temp) + 1) * sizeof(char));
//		strncpy_s(strings[i],strlen(temp)+1, temp, 40);
//	}
//	for (int i = 0;i < num;i++) {
//		puts(strings[i]);
//	}
//	free(strings);
//	return 0;
//}