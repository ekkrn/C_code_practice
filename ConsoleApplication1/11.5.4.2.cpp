//#include<stdio.h>
//#include<string.h>
//#define SIZE 40
//#define LIM 5
//char* s_gets(char* st, int n);
//int main(void)//获取所有q开头的单词
//{
//	char qwords[LIM][SIZE];
//	char temp[SIZE];
//	int i = 0;
//
//	printf("enter %d words beginning with q:\n", LIM);
//	while (i < LIM && s_gets(temp, SIZE) != NULL)//temp存储输入，q开头的写入数组
//	{
//		if (temp[0] != 'q')
//			printf("%s doesn't begin with q\n", temp);
//		else
//		{
//			strncpy_s(qwords[i], temp,SIZE-1);
//			qwords[i][SIZE - 1] = '\0';//加上\0防止结束不了
//			i++;
//		}
//	}
//	puts("here are the words accepted:");
//	for (i = 0;i < LIM;i++)
//		puts(qwords[i]);
//	return 0;
//}
//char* s_gets(char* st, int n)
//{
//	char* ret_val;
//	int i = 0;
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
//	return ret_val;
//}