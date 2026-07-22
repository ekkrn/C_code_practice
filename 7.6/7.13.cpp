////2809，读取一个正整数k，输出第k个斐波那契数的大小
////先摄入k，再进行k次循环，累加sum=n1+n2，sum=0--sum_fir=0/sum_sec=1--sum
//#include<stdio.h>
//int main(void)
//{
//	long long sum_fir = 0, sum_sec = 1,temp;
//	long long k,i=0;
//	printf("请输入您要获取的第k个斐波那契数：");
//	scanf_s("%lld", &k);
//	while (i++ < k)
//	{
//		long long temp=sum_sec;
//		sum_sec = sum_fir + sum_sec;
//		sum_fir = temp;
//	}
//	printf("%lld", sum_fir);
//
//	return 0;
//}