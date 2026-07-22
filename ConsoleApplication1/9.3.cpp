//#include<stdio.h>//递归演示
//void up_and_down(int n);
//int main(void)
//{
//	up_and_down(1);
//	return 0;
//}
//
//void up_and_down(int n)
//{
//	printf("level %d:n location %p\n", n, &n);
//	if (n < 4)
//		up_and_down(n + 1);
//	printf("LEVEL %d:n location %p\n", n, &n);
//}




////尾递归
//#include<stdio.h>
//long fact(int n);
//long rfact(int n);
//int main(void)
//{
//	int num;
//	while (scanf_s("%d", &num) == 1)
//	{
//		if (num < 0 || num>12)
//			printf("one more game!\n");
//		else
//		{
//			printf("loop: %d factorial = %ld\n",num,fact(num));
//			printf("recursion: %d factorial = %ld\n",num,rfact(num));
//		}
//		printf("again");
//
//	}
//	printf("bye");
//	return 0;
//}
//
//long fact(int n)
//{
//	long ans;
//	for (ans = 1;n > 1;n--)
//		ans *= n;
//	return ans;
//}
//
//long rfact(int n)
//{
//	long ans;
//	if (n > 1)
//		ans = n * rfact(n - 1);
//	else
//		ans = 1;
//	return ans;
//}





////倒叙计算，二进制转换器
//#include<stdio.h>
//void to_binary(unsigned long n);
//int main(void)
//{
//	unsigned long num;
//	while (scanf_s("%ul", &num) == 1)
//	{
//		to_binary(num);
//		printf("\n");
//	}
//}
//
//void to_binary(unsigned long n)
//{
//	int r;
//	r = n % 2;
//	if (n >= 2)
//		to_binary(n / 2);
//	printf("%d", r);
//}