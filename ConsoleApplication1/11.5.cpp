//#include<stdio.h>
//#include<string.h>
//#include<ctype.h>
//#define ANSWER "GRANT"
//#define SIZE 40
//char* s_gets(char* st, int n);
//void upper(char* st, int n);//字符全转换成大写
//
//int main(void)//字符串对比来验证用户输入的答案是否正确
//{
//	char trys[SIZE];
//	
//	puts("who is buried in Grant's tomb");
//	s_gets(trys, SIZE);
//	upper(trys, SIZE);
//	while (strcmp(trys,ANSWER))
//	{
//		puts("no,that's wrong .try again!");
//		s_gets(trys, SIZE);
//	}
//	puts("that's right!");
//	return 0;
//}
//
//
//char* s_gets(char* st, int n)
//{
//	char* ret_val;
//	int i = 0;
//	ret_val = fgets(st, n,stdin);
//	if (ret_val)
//	{
//		while (st[i] != '\n' && st[i] != '\0')
//			i++;
//		if (st[i] == '\n')
//			st[i] = '\0';
//		else
//			while (getchar() != '\n')
//				continue;
//	}
//	return ret_val;
//}
//void upper(char* st, int n)
//{
//	for (int i = 0;i < n;i++)
//		st[i] = toupper(st[i]);
//}