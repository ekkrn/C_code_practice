//#include<stdio.h>
//int main(void)
//{
//	printf("%s! is cool\n", "%s! is cool!\n");
//
//	return 0;
//}

//#include<stdio.h>
////批量转化秒数为分钟加秒
//#define SPERMIN 60
//int main(void)
//{
//	int time = 1, min, sec;
//	printf("请输入秒数(输入非正数退出)：");
//	scanf_s("%d", &time);
//
//	while (time > 0)
//	{
//		min = time / SPERMIN;
//		sec = time % SPERMIN;
//		printf("%d min %d sec\n", min, sec);
//		printf("请输入秒数(输入非正数退出)：");
//		scanf_s("%d", &time);
//	}
//	return 0;
//}




//
//// 输出11个数，相较于输入
//#include<stdio.h>
//int main(void)
//{
//	int input,end;
//	printf("Please input:");
//	scanf_s("%d", &input);
//
//	end = input + 10;
//	while (input < (end + 1))
//	{
//		printf("%d\n", input);
//		input++;
//
//	}
//	return 0;
//}





//
////天数转周 天
//#include<stdio.h>
//#define DAYPERWEEK 7
//int main(void)
//{
//	int days, week, day;
//	printf("Please input days:");
//	scanf_s("%d", &days);
//
//	while (days > 0)
//	{
//		week = days / DAYPERWEEK;
//		day = days % DAYPERWEEK;
//		printf("%d days are%d week %d day\n",days, week, day);
//		printf("Please input days:");
//		scanf_s("%d", &days);
//	}
//
//	return 0;
//}


////根据输入n求1到n的和
//#include<stdio.h>
//int main(void)
//{
//	int n, total=0,i=0;
//	scanf_s("%d",&n);
//
//	while (i++ < n)
//	{
//		total += i*i;
//	}
//	printf("totoal is %d", total);
//
//	return 0;
//}



////自定义函数之立方值
////设计一个函数求立方并打印
//
//#include<stdio.h>
//void cuber(double a)
//{
//	double cub = a * a * a;
//	printf("%lf", cub);
//}
//int main(void)
//{
//	double inp;
//	printf("请输入浮点数：");
//	scanf_s("%lf", &inp);
//	cuber(inp);
//
//	return 0;
//}


//tem函数将华氏度转化为摄氏度和开氏温度
//#include<stdio.h>
//void Temperatures(double f)
//{
//	const double CTOK= 273.15;
//	double c, k;
//	c = (5.0 / 9.0) * (f - 32.0);
//	k = c + CTOK;
//	printf("摄氏度%lf  开氏度%lf\n", c, k);
//}
//
//int main(void)
//{
//	int situ;
//	double tem;
//	printf("输入温度：");
//	situ = scanf_s("%lf",&tem);
//	while (situ == 1)
//	{
//		Temperatures(tem);
//		printf("输入温度：");
//		situ = scanf_s("%lf",&tem);
//	}
//
//	return 0;
//}