//#include<stdio.h>
//#define STLEN 10
//
//void put1(char* string)//自定义输出函数
//{
//	while (*string)
//		putchar(*string++);
//}
//
//char* s_gets(char* st, int n)//基于fgets函数的改进，仅仅是将\n抛弃和抛弃过长字段
//{
//	char* ret_val;
//	int i = 0;
//
//	ret_val = fgets(st, n, stdin);
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
//		
//	return ret_val;
//}
//
//int main(void)
//{
//	char words[STLEN];
//	int i;
//	char arr[5] = "00\0";
//	put1(arr);
//	puts("Enter strings (empty to quit):");
//	while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n')
//	{
//		i = 0;
//		while (words[i] != '\n' && words[i] != '\0')
//			i++;
//		if (words[i] == '\n')
//			words[i] = '\0';
//		else
//			while (getchar()!='\n')
//				continue;
//		puts(words);
//	}
//	puts("Done!");
//	return 0;
//}