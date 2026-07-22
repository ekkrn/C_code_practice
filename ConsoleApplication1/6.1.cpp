//#include<stdio.h>
//int main(void)
//{
//	long num;
//	long sum = 0L;
//	int status;
//
//	printf("请输入数字（输入q退出）：\n");
//	status = scanf_s("%ld", &num);
//
//	while (status)
//	{
//		sum += num;
//		printf("请输入数字（输入q退出）：\n");
//		status = scanf_s("%ld", &num);
//	}
//	printf("输入的数字的总合为%ld", sum);
//
//	return 0;
//}


////利用二进制补码停止循环（最小负数跳到最大正数）
//#include<stdio.h>
//int main(void)
//{
//	 short int index = 1;
//	while (--index < 5)
//	{
//		printf("gg");
//	}
//
//	return 0;
//}





////利用循环看哪些值为真
//#include<stdio.h>
//int main(void)
//{
//	int n = 3;//定义初始值
//	while (n)
//		printf("%d is true\n", n--);   //用while看那些true，不行就退出循环了
//	printf("%d is false\n",n);
//
//	n = -3;//换负数看看
//	while (n)
//		printf("%d is ture\n", n++);
//	printf("%d is false\n", n);
//
//	return 0;
//
//}

