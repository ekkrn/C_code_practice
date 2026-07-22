//#include<stdio.h>
//#include<ctype.h>
//void chline(char ch, int i, int j);
//double harmean(double a, double b);
//void alter(double* a, double* b);
//void changethree(double* a, double* b, double* c);
//void readchar(void);
//void printp(char ch);
//double power(double n, int b);
//double fpower(double n, int p);
//int Fibonacci(int n);
//
//int main(void)
//{
//	//chline('#', 3, 5);
//	//printf("%lf", harmean(3, 4));
//
//	//double x = 4.3, y = 5.5;
//	//alter(&x, &y);
//	//printf("%lf %lf", x, y);
//
//	//readchar();
//
//	//printf("%lf",power(3, -1));
//
//	//printf("%lf", fpower(2, 10));
//	int n;
//	scanf_s("%d", &n);
//	printf("%d", Fibonacci(n));
//	return 0;
//}
//
//int Fibonacci(int n)
//{
//	//设置上一项上二项
//	//设置第一第二
//	//循环叠加到n
//	int bb = 1, b = 1,result;
//	if (n == 1 || n == 2)
//		result = 1;
//	else
//		for (int i = 1;i <= n - 2;i++)
//		{
//			result = bb + b;
//			b = bb;
//			bb = result;
//		}
//	return result;
//}
//
//
//
//
//
//
//
////递归幂运算
//double fpower(double n, int p)
//{
//	double pow = 1;
//	int i;
//	if (n == 0 && p == 0)
//	{
//		return 1;
//	}
//	if (n == 0) return 0;
//	if (p == 0) return 1;
//	if (p > 0)
//	{
//		return n * fpower(n, p - 1);
//	}
//	else
//	{
//		return power(n, p + 1) / n;
//	}
//	
//}
//
////幂运算
//double power(double n, int b)
//{
//	double pow = 1;
//	if (n != 0)
//	{
//		if (b > 0)
//		{
//			for (int i = 1;i <= b;i++)
//				pow *= n;
//		}
//		else if (b == 0)
//			pow = 1;
//		else
//		{
//			for (int i = 1;i <= -b;i++)
//				pow *= n;
//			pow = 1 / pow;
//		}
//		return pow;
//	}
//	else 
//		return 0;
//}
//
////读取字符函数
//void readchar(void)
//{
//	int ch;
//	while ((ch = getchar()) != EOF)
//	{
//		if (isalpha(ch))
//		{
//			printf("Yes,%c is alnum!\n",ch);
//			printp(ch);
//		}
//		else
//			printf("%c No.\n", ch);printf("-1\n");
//	}
//}
////根据字母返回位置函数
//void printp(char ch)
//{
//	if (islower(ch))
//		printf("%d\n", ch - 'a' + 1);
//	else
//		printf("%d\n", ch - 'A' + 1);
//}
//
//void alter(double* a, double* b)
//{
//	(*a > *b) ? *b = *a : *a = *b;
//}
//
//void chline(char ch, int i, int j)//字符方阵
//{
//	for (int a = 1;a <= j;a++)
//	{
//		for (int b = 1;b <= i;b++)
//			printf("%c", ch);
//		printf("\n");
//	}
//}
//
//double harmean(double a, double b)//调和平均数
//{
//	return 2 / (1 / a + 1 / b);
//}
//
//void changethree(double* a, double* b, double* c)//三数排大小
//{
//	int temp;
//	if (*a > *b)
//	{
//		temp = *a;
//		*a = *b;
//		*b = temp;
//	}
//	if (*a > *c)
//	{
//		temp = *a;
//		*a = *c;
//		*c = temp;
//	}
//	if (*b > *c)
//	{
//		temp = *b;
//		*b = *c;
//		*c = temp;
//	}
//
//}