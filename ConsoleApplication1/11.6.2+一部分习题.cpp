////puts("please enter a line");
////fgets(line, limit, stdin);
////find = strchr(line, '\n');
////if (find)
////	*find = '\0';
//#include<stdio.h>
//#include<string.h>
//#include<ctype.h>
////一个摄取n个字符的函数1.
//void getchars(char* temp, int n)
//{
//	for (int i = 0;i < n;i++)
//	{
//		temp[i] = getchar();
//	}
//}
////修改练习1函数，增加条件，遇到空白停止2.
//void getchars2(char* temp, int n)
//{
//	char ch;
//	for (int i = 0;i < n;i++)
//	{
//		ch = getchar();
//		if (isblank(ch))
//			break;
//		temp[i] = ch;
//	}
//}
////scanf函数(第一处空格跳过，第二处空格停止)3.
//void scanf1(char* st)
//{
//	char ch;
//	int count = 0;
//	int flag = 0;
//	do {
//		ch = getchar();
//		if (isblank(ch) && flag == 0)
//			continue;
//		else if (isblank(ch) && flag == 1)
//			flag = 2;
//		else
//		{
//			st[count++] = ch;
//		}
//	} while (flag==2);
//}
////scanf改良版
//void scanf2(char* st,int n)
//{
//	char ch;
//	int count = 0;
//	int flag = 0;
//	do {
//		ch = getchar();
//		if (isblank(ch) && flag == 0)
//			continue;
//		else if (isblank(ch) && flag == 1)
//			flag = 2;
//		else
//		{
//			st[count++] = ch;
//		}
//	} while (flag == 2 || count<n);
//}
//
////strchr自己写
//char* strchr1(char* st, char ch)
//{
//	char* ptr=st;
//	for (int i = 0;i < strlen(st);i++)
//	{
//		if (st[i] == ch)
//		{
//			ptr = st + i;
//		}
//	}
//	return (ptr == st) ? NULL : ptr;
//}
////strchr，但是返回值是int6.
//int strchr2(char* st, char ch)
//{
//	char* ptr = st;
//	for (int i = 0;i < strlen(st);i++)
//	{
//		if (st[i] == ch)
//		{
//			ptr = st + i;
//		}
//	}
//	return (ptr == st) ? 0 : 1;
//}
//
////strncpy自己写7.
//char* mystrncpy(char* st1, char* st2, int n)
//{
//	for (int i = 0;i < n;i++)
//	{
//		st1[i] = st2[i];
//	}
//	return st1;
//}
////检测字符串里有没有指定的字符组8.
//char* string_in(char* st1, char* st2)
//{
//	int len2 = strlen(st2);
//	int count=0,i;
//	for (i = 0;i < strlen(st1);i++)
//	{
//		if (st1[i] == st2[count])
//		{
//			count++;
//			if (count == len2)
//				break;
//		}
//		else
//			count = 0;
//	}
//	return st1 + i - len2 + 1;
//}
////倒序字符串9.
//void reverse(char* st1)
//{
//	char* st2;
//	int len1 = strlen(st1);
//	for (int i = 0;i < len1;i++)
//		st2[i] = st1[len1 - 1 - i];
//	for (int i = 0;i < len1;i++)
//		st1[i] = st2[i];
//}
////删空格10.
//char* deletespace(char* st1)
//{
//	char ch;
//	char* st2;
//	int k = 0;
//	for (int i = 0;i < strlen(st1);i++)
//	{
//		ch = getchar();
//		if (isblank(ch))
//			continue;
//		else {
//			st2[k++] = ch;
//		}
//	}
//	puts(st2);
//	return st2;
//}
////删空格标准答案
//char* trim_str(char* st) {
//	char* head = st;
//	int count = 0;
//	while (*st != '\0')//这个方法处理原字符串，难度稍大
//	{
//		if (*st != ' ')
//			*head++ = *st++;
//		else
//		{
//			st++;
//			count++;
//		}
//	}
//	while (count--)//神之一手，把计数的空格数用来删除剩余字符
//		*head++ = '\0';
//	return st;
//}
//
//
//
//char* findspace(char* st)//找到字符串中第一个空格的函数
//{
//	char* space;
//	space = strchr(st, ' ');
//	return space;
//}
//int strlen1(char* st)//自己写一遍strlen
//{
//	int count = 0;
//	while (*(st++) != '\0')
//		count++;
//	return count;
//}
//int main(void)
//{
//	int num;
//	char name[] = "sasdkf";
//	num = strlen1(name);
////test 8.
//	//char st1[5]="hats", st2[5] ="at";
//	//char* pt;
//	//pt=string_in(st1, st2);
//	//putchar(*pt);
//
//	return 0;
//}
