////26字母数组
//#include<stdio.h>
//int main(void)
//{
//	char chars[26];
//	char ch;
//	int index;
//
//	//导入26小写字母
//	for (index = 0, ch = 'a';ch <= 'z';index++, ch++)
//		chars[index] = ch;
//
//	//输出26小写字母
//	for (index = 0;index < 26;index++)
//		printf("%c ", chars[index]);
//
//	return 0;
//}





//#include<stdio.h>
//int main(void)
//{
//	int i,j;
//	for (i = 1;i <= 5;i++)
//	{
//		for (j = 1;j <= i;j++)
//			printf("$");
//		printf("\n");
//	}
//
//	return 0;
//}





//#include<stdio.h>
//int main(void)
//{
//	//外侧初始i
//	//内侧初始G，初始j，j<=i,输出G-j
//	int i, j;
//	char ch;
//	for (i = 1;i <= 6;i++)
//	{
//		for (ch = 'G', j = 1;j <= i;j++)
//			printf("%c", ch - j);
//		printf("\n");
//	}
//
//	return 0;
//}






////要实现换行不重复字母，就得去掉第二个循环的ch初始化
//#include<stdio.h>
//int main(void)
//{
//	int i, j;
//	char ch = 64;
//
//	for (i = 1;i <= 6;i++)
//	{
//		for (j = 1;j <= i;j++)
//			printf("%c", ++ch);
//		printf("\n");
//	}
//
//	return 0;
//
//}




//#include<stdio.h>
//int main(void)
//{
//	int j;
//	char i, n,ch;
//	scanf_s("%c", &n);
//	//外层A到？
//	for (i = 'A';i <= n;i++)
//	{
//		// 空格
//		for (j = 1;j <= n - i;j++)
//			printf(" ");
//		//升序
//		for (ch = 'A';ch <= i;ch++)
//			printf("%c", ch);
//		//降序
//		for (ch -= 2;ch >= 'A';ch--)
//			printf("%c", ch);
//		printf("\n");
//	}
//
//	return 0;
//}






////平方立方表
//#include<stdio.h>
//int main(void)
//{
//	int i;
//	int begin, end;
//	//用户输入上下限
//	scanf_s("%d %d", &begin, &end);
//
//	printf("     n      n square     n cubed\n");
//	//行
//	for (i = 0;i <= end - begin;i++)
//	{
//		//列
//		int n = begin + i;
//		int n_square = n * n;
//		int n_cubed = n * n * n;
//		printf("%6d   %6d         %6d\n", n, n_square, n_cubed);
//	}
//
//	return 0;
//}




////倒序打印单词
//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	//获取单词
//	char words[200];
//	scanf_s("%s", words, 200);
//	int len = strlen(words);
//	//输出
//	for (int i = len - 1;i >= 0;i--)
//		printf("%c", words[i]);
//
//	return 0;
//}



////循环处理成对数字
////输入
////处理
////输出
////循环
////改为函数
//#include<stdio.h>
//float calculate(float a, float b);
//int main(void)
//{
//	float fir, sec;
//	float result;
//
//	while (scanf_s("%f %f",&fir,&sec) == 2)
//	{
//		printf("%f\n", calculate(fir,sec));
//	}
//	return 0;
//}
//float calculate(float a, float b)
//{
//	return (a - b) / (a * b);
//}




////指定上下限平方和
////输入上下限
////开始循环（for）
////输入输出（全写一行）
//// 结束输出done
//
//#include<stdio.h>
//int main(void)
//{
//	int max, min;
//
//	for (printf("请输入上下限："), scanf_s("%d %d",&min,&max);min < max;printf("请输入上下限："), scanf_s("%d %d",&min,&max))
//	{
//		int sum=0;
//		for (int i = min;i <= max;i++)
//			sum += i*i;
//		printf("the sums of the squares from %d to %d is %d\n", min, max, sum);
//	}
//	printf("Done");
//
//	return 0;
//}


////读入8个整数到数组里面，然后倒序输出
//#include<stdio.h>
//int main(void)
//{
//	int arr[8],i;
//
//	for (i = 0;i < 8;i++)
//		scanf_s("%d", &arr[i]);
//
//	for (i -=1;i >=0;i--)
//	{
//		printf("%d", arr[i]);
//	}
//
//	return 0;
//}


////无穷数列计算
//#include<stdio.h>
//#include<math.h>
//int main(void)
//{
//
//	int times;
//	scanf_s("%d", &times);
//
//	while (times > 0)
//	{
//		float sum1 = 0, sum2 = 0;
//		for (int i = 1;i <= times;i++)
//			sum1 += 1.0 / i;
//		printf("the sum1 is %f\n", sum1);
//		float fuhao = -1.0;
//		for (int i = 1;i <= times;i++)
//		{
//			fuhao *= -1.0;
//			sum2 += (1.0 / i) * fuhao;
//		}
//		printf("the sum2 is %f\n", sum2);
//		scanf_s("%d", &times);
//	}
//	printf("%zd\n", sizeof(int));
//	printf("%llf", pow(2, 31));
//	return 0;
//}
//

//#include<stdio.h>
//int main(void)
//{
//	int arr[8];
//	for (int i = 0;i < 8;i++)
//	{
//		int temp = 1;
//		for (int j = 0;j <= i;j++)
//			temp *= 2;
//
//		arr[i] = temp;
//	}
//	int i=0;
//	do
//	{  
//		printf("%d ", arr[i++]);
//	} while (i < 8);
//
//	return 0;
//}




////an与sn
//#include<stdio.h>
//int main(void)
//{
//	int arr1[8], arr2[8];
//	////法一
//	//for (int i = 0;i < 8;i++)
//	//{
//	//	scanf_s("%d", &arr1[i]);
//	//	arr2[i] = 0;
//	//	for (int j = 0;j <= i;j++)
//	//	{
//	//		arr2[i] += arr1[j];
//	//	}
//	//}
//	////法2
//	//scanf_s("%d", &arr1[0]);
//	//arr2[0] = arr1[0];
//	//for (int i = 1;i < 8;i++)
//	//{
//	//	scanf_s("%d", &arr1[i]);
//	//	arr2[i] = arr2[i - 1] + arr1[i];
//	//}
//
//	//输出
//	for (int i = 0;i < 8;i++)
//		printf("%d ", arr1[i]);
//	printf("\n");
//	for (int i = 0;i < 8;i++)
//		printf("%d ", arr2[i]);
//	printf("\n");
//
//	return 0;
//}



////读取一行输入然后倒序输出
//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	char phrase[40];
//	int i= 0;
//	do {
//		scanf_s("%c", &phrase[i],1);
//	} while (phrase[i++]!='\n');
//	i -= 2;
//	
//	for (;i >= 0;i--)
//		printf("%c", phrase[i]);
//
//	return 0;
//}



////模拟指数函数和线性函数增长快慢
//#include<stdio.h>
//int main(void)
//{
//	int i=0;
//	float sum1 = 100, sum2 = 100;
//	do {
//		sum1 += 100 * 0.1f;
//		sum2 *= 1.05f;
//		i++;
//	} while (sum1 > sum2);
//	printf("%d years later,Deurdre have %f more than Daphne %f", i, sum2, sum1);
//
//	return 0;
//}




////循环计算小题
//#include<stdio.h>
//#define RATE 1.08
//int main(void)
//{
//	float init = 100.0;
//	const float draw = 10;
//	int year = 0;
//	do {
//		init *= RATE;
//		init -= draw;
//		year++;
//	} while (init > 0);
//	printf("he have spent %d years drawing it", year);
//
//	return 0;
//}




////显示循环计算过程的小题
//#include<stdio.h>
//int main(void)
//{
//	int friends = 5,week=0;
//	printf("week  friends\n");
//	while (friends < 150)
//	{
//		printf("%3d     %d\n", week, friends);
//		friends = (friends - week-1) * 2;
//		week++;
//	} 
//
//	return 0;
//}