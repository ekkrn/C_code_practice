////计算多个不同鞋码对应的脚长
////有起始鞋码，转换系数scale，adjust，脚长
////开始后打印每个鞋码
//#include<stdio.h>
//#define ADJUST 7.31
//int main(void)
//{
//	const double SCALE = 0.333;
//	float shoe, foot;
//	shoe = 3.0;
//
//	printf("shoe size (men's)     foot length\n");
//	while (shoe < 18.5)
//	{
//		foot = shoe * SCALE + ADJUST;
//		printf("%10.1f %15.2f inches\n", shoe, foot);
//		shoe = shoe + 1;
//	}
//	printf("if the shoe fits,wear it");
//
//	return 0;
//}
//


////打印1-20的平方表
////begin square
//
//#include<stdio.h>
//int main(void)
//{
//	int begin, square;
//	begin = 1;
//	while (begin < 100)
//	{
//		square = begin * begin;
//		printf("%5d %5d\n", begin, square);
//		begin = begin + 1;
//	}
//
//	return 0;
//}


////印度人的99乘法表，两个while循环
//#include<stdio.h>
//int main(void)
//{
//	int output,shulie = 1;
//	while (shulie < 100)
//	{
//		int heng = 1;
//		while (heng<100)
//		{
//			output = shulie * heng;
//			printf("%2d*%2d=%4d\n", shulie, heng, output);
//			heng += 1;
//		}
//		shulie = shulie + 1;
//	}
//	return 0;
//}

//
//小麦指数爆炸
//#include<stdio.h>
//#define CROP 2E16
//#define SQUARES 64
//int main(void)
//{
//	int count;
//	double current, total;
//	current = total = 1;
//	count = 0;
//	printf("square     grains     total     fraction of\n");
//	printf("           added      grains    world total\n");
//	while (++count < 65)
//	{
//		printf("%6d     %.2e  %.2e     %.2e\n", count, current, total, (total / CROP));;
//		current = current * 2;
//		total = total + current;
//	}
//ssssdseedstrsh
//	return 0;
//}


//#include<stdio.h>
//int main(void)
//{
//	int count, sum;
//
//	count = 0;
//	sum = 0;
//	while (count++ < 20)
//		sum = sum + count;
//	printf("sum = %d\n",sum);
//
//	return 0;
//}








