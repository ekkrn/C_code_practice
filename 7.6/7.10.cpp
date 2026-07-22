//#include<stdio.h>
//int main(void)
//{
//	//九九乘法表，嵌套while，先在最外定义一个i1，再在最内定义一个i2
//	int i1 = 0;
//	while (i1++ < 9)
//	{
//		int i2 = 0;
//		while (i2++ < i1)
//		{
//			printf("%d*%d=%-2d  ", i1, i2, i1 * i2);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}



////#include<stdio.h>
////int main(void)
////{
////	//100以内所有质数，先循环1到100，再从1到n循环除
////	int i = 0;
////	while (i++ < 100)
////	{
////		int i2 = 1;
////		int status = 1;//设定状态值
////		while (++i2 < i)//遍历1到n，修改状态值
////		{
////			if (i % i2 == 0)
////			{
////				status = 0;//若有因数，则状态变为假
////			}
////		}
////		if (status) printf("%d\n", i);///状态为真的数输出
////
////	}
////
////	return 0;
////}





//#include<stdio.h>
//void jinghao(int a)
//{
//	while (a-- > 0)
//	{
//		printf("%c", '#');
//	}
//	printf("\n");
//}
//void kongge(int a)
//{
//	while (a-- > 0)
//	{
//		printf("%c", ' ');
//	}
//}
////2n-1个井号，基准是n-1，总长度是(n-1)+行数
//int main(void)
//{
//	int stage;
//	scanf_s("%d", &stage);
//	//上半个
//	int i = 0;
//	while (i++ < stage)//输出上半个每一行井号
//	{
//		int kongnum=stage-i;
//		kongge(kongnum);
//		jinghao(2*i-1);
//	}
//	i -= 1;
//	while (--i > 0)
//	{
//		kongge(stage - i);
//		jinghao(2 * i - 1);
//	}
//
//	return 0;
//}
