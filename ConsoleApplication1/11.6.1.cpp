////sort_str
//#include<stdio.h>
//#include<string.h>
//#define SIZE 81
//#define LIM 20
//#define HALT ""
//void stsrt(char* strings[], int num);
//char* s_gets(char* st, int n);
//int strlen1(char* st);
//int main(void)
//{
//	char input[LIM][SIZE];
//	char* ptstr[LIM];
//	int ct = 0;
//	int k;
//
//	//获取多行字符串和指针数组
//	printf("input up to 20 lines\n");
//	printf("press the Enter key to stop\n");
//	while (ct < LIM && s_gets(input[ct], SIZE) != NULL && input[ct][0] != '\0')
//	{
//		ptstr[ct] = input[ct];
//		ct++;
//	}
//
//	//排序
//	stsrt(ptstr, ct);
//	//输出
//	for (k = 0;k < LIM;k++)
//		puts(ptstr[k]);
//
//	return 0;
//}
//void stsrt(char* strings[], int num)
//{
//	char* temp;
//	int top, seek;
//
//	for (top=0;top<num-1;top++)
//		for (seek = top + 1;seek < num;seek++)
//		{
//			if (strcmp(strings[top], strings[seek]) > 0)
//			{
//				temp = strings[top];
//				strings[top] = strings[seek];
//				strings[seek] = temp;
//			}
//		}
//}
//
//
//
//
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
//char* s_gets2(char* st, int n)
//{
//	char* ret_val,*find;
//	ret_val = fgets(st, n, stdin);
//	if (ret_val)
//	{
//		if (find=strchr(st,'\n'))
//			*find = '\0';
//		else
//			while (getchar() != '\n')
//				continue;
//	}
//	return ret_val;
//}
//
//int strlen1(char* st)
//{
//	int count = 0;
//	while (*(st++) != '\0')
//		count++;
//}