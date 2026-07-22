////输入验证
////检测输入是否为数字
////检测输入范围大小是否合规
////接下来写一个范围内平方和计算程序
//#include<stdio.h>
//#include<stdbool.h>
////检测数字
//long get_long(void);
////检测范围大小
//bool bad_limits(long begin, long end,
//	long low, long high);
////计算平方和
//double/*why double?*/ sum_square(long begin, long end);
//int main(void)
//{
//	const long MAX = +10000000L;
//	const long MIN = -10000000L;
//	long start;
//	long stop;
//	double answer;
//
//	printf("Enter the min:");
//	start = get_long();
//	printf("Enter the max:");
//	stop = get_long();
//
//	while (start != 0 && stop != 0)
//	{
//		if (bad_limits(start, stop, MIN, MAX))
//			printf("please try again!");
//		else
//		{
//			answer = sum_square(start, stop);
//			printf("the sum of the squares of the integers"
//				"from %ld to %ld is %g\n", start, stop, answer);
//		}
//		printf("Enter the min:");
//		start = get_long();
//		printf("Enter the max:");
//		stop = get_long();
//	}
//}
//
//long get_long(void)
//{
//	long input;
//	char ch;
//	while (scanf_s("%ld", &input) != 1)
//	{
//		while ((ch = getchar()) != '\n')
//			continue;
//		printf("it isn't integer，please try again!:");
//	}
//	return input;
//}
//
//bool bad_limits(long begin, long end, long low, long high)
//{
//	bool not_good = false;
//	if (begin > end)
//	{
//		printf("%ld isn't smaller than %ld", begin, end);
//		not_good = true;
//	}
//	if (begin < low || end < low)
//	{
//		printf("must be %ld ot greater",low);
//		not_good = true;
//	}
//	if (begin > high || end > high)
//	{
//		printf("must be %ld or less", high);
//		not_good = true;
//	}
//	return not_good;
//}
//
//double sum_square(long a, long b)
//{
//	double sum = 0;
//	for (int i = a;i <= b;i++)
//		sum += (double)i * (double)i;
//	return sum;
//}