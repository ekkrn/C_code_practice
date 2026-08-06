#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define SIZE 80
#define LIM 10
//char* s_gets(char* st, int n);
//void menushow(void);
//void show(char* st[], int n);
//void firstsort(char* st[], int n);
//void lengthsort(char* st[], int n);
//int firwordlen(char* st);
//void firwordsort(char* st[], int n);
//
//int main(void)
//{
//	char strings[LIM][SIZE], * ptstr[LIM];
//	int i = 0;
//	puts("please enter 10 strings");
//	while (i < LIM && s_gets(strings[i], SIZE) != NULL && strings[i][0] != '\0')
//	{
//		ptstr[i] = strings[i];
//		i++;
//	}
//	int choice;
//	do{
//		menushow();
//	
//		scanf_s("%d", &choice);
//		switch (choice) {
//		case 1:
//			show(ptstr,LIM);
//			break;
//		case 2:
//			firstsort(ptstr, LIM);
//			show(ptstr, LIM);
//			break;
//		case 3:
//			lengthsort(ptstr, LIM);
//			show(ptstr, LIM);
//			break;
//		case 4:
//			firwordsort(ptstr, LIM);
//			show(ptstr, LIM);
//			break;
//		default:
//			break;
//		}
//	} while (choice != 5);
//
//	return 0;
//}
//int firwordlen(char* st) {
//	int lens=0;
//	for (int i = 0;i < strlen(st);i++) {
//		if (st[i] != ' ')
//			lens++;
//		else
//			break;
//	}
//	return lens;
//}
//void firwordsort(char* st[], int n) {
//	char* temp;
//	int top, seek;
//
//	for (top = 0;top < n - 1;top++)
//		for (seek = top + 1;seek < n;seek++)
//		{
//			if (firwordlen(st[top])>firwordlen(st[seek]))
//			{
//				temp = st[top];
//				st[top] = st[seek];
//				st[seek] = temp;
//			}
//		}
//}
//
//void show(char* st[], int n) {
//	for (int i = 0;i < n;i++)
//	{
//		puts(st[i]);
//	}
//}
//void firstsort(char* st[], int n) {
//	char* temp;
//	int top, seek;
//
//	for (top=0;top<n-1;top++)
//		for (seek = top + 1;seek < n;seek++)
//		{
//			if (strcmp(st[top], st[seek]) > 0)
//			{
//				temp = st[top];
//				st[top] = st[seek];
//				st[seek] = temp;
//			}
//		}
//}
//void lengthsort(char* st[], int n) {
//	char* temp;
//	int top, seek;
//
//	for (top = 0;top < n - 1;top++)
//		for (seek = top + 1;seek < n;seek++)
//		{
//			if (strlen(st[top])>strlen(st[seek]))
//			{
//				temp = st[top];
//				st[top] = st[seek];
//				st[seek] = temp;
//			}
//		}
//}
//
//void menushow(void)
//{
//	puts("---------------------------");
//	puts("1,原排列");
//	puts("2，首字母排列");
//	puts("3，长度排列");
//	puts("4，第一个单词长度排列");
//	puts("5.quit");
//	puts("---------------------------");
//}
//char* s_gets(char* st, int n)
//{
//	char* ret_val;
//	ret_val = fgets(st, n,stdin);
//	if (ret_val)
//	{
//		while (*st != '\n' && *st != '\0')
//			st++;
//		if (*st == '\n')
//			*st = '\0';
//		else
//			while (getchar() != '\n')
//				continue;
//	}
//	return ret_val;
//}







//
/////12题的checkwords小小写一下
//int check_words(char* input) {
//	int count = 0;
//	int start = 0;
//	while (*input != EOF)
//	{
//		if (isalpha(*input))
//		{
//			start = 1;
//			input++;
//		}
//		else if (isalpha(*input) == 0 && start == 0)
//			input++;
//		else if (isalpha(*input) == 0 && start == 1)
//		{
//			count++;
//			input++;
//			start = 0;
//		}
//	}
//	if (start == 1)
//		count++;//???????????
//	return count;
//}