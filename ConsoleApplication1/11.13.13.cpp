////反序输出命令行
//#include<stdio.h>
//int main(int argc, char* argv[]) {
//	if (argc < 2) {
//		printf("Error!\n");
//	}
//	else {
//		for (int i = argc;i>1;i--)
//		{
//			printf("%s ", argv[i-1]);
//		}
//		printf("\n");
//	}
//	return 0;
//
//}
//
////命令行计算幂运算
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<ctype.h>
////自己写atoi
//int atoi2(char* st) {
//	int len = strlen(st);
//	int ans=0;
//	for (int i = 0;i <len;i--)
//	{
//		int temp = transform(st[i]);
//		
//		if (temp == -1)
//			goto shit;
//		for (int j = 0;j < len - i - 1;j++)
//			temp *= 10;
//		ans += temp;
//	}
//shit:return -1;
//}
//int transform(char ch)
//{
//	int i;
//	if (ch == '0')
//		i = 0;
//	else if (ch == '1')
//		i = 1;
//	else if (ch == '2')
//		i = 2;
//	else if (ch == '3')
//		i = 3;
//	else if (ch == '4')
//		i = 4;
//	else if (ch == '5')
//		i = 5;
//	else if (ch == '6')
//		i = 6;
//	else if (ch == '7')
//		i = 7;
//	else if (ch == '8')
//		i = 8;
//	else if (ch == '9')
//		i = 9;
//	else
//		i = -1;
//	return i;
//}
//
////标准版atoi
//int myatoi(char* st) {
//	int result = 0;
//	int bit_mark = 1;
//	int length = strlen(st);
//
//	for (int i = length;i > 0;i--) {
//		if (isdigit(*(st + i - 1)) == 0)
//		{
//			printf("error\n");
//			return 0;
//		}
//		result += (*(st + i - 1) - '0') * bit_mark;
//		bit_mark *= 10;
//	}
//	return result;
//}
//
//int main(int argc, char* argv[]) {
//	if (argc != 3)
//	{
//		printf("Error!\n");
//		return 0;
//	}
//	double ans = 1;
//	double chengshu = atof(argv[1]);
//	int times = atoi(argv[2]);
//	for (int i = 0;i < times;i++)
//		ans *= chengshu;
//	printf("%lf\n", ans);
//	return 0;
//}