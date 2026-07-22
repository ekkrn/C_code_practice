
//#include<stdio.h>
//int main(void)
//{
//	float weight;
//	float value;
//
//	printf("are you worth your weight in platium\n");
//	printf("lets check it out\n");
//	printf("please enter your weight in pounds:");
//
//	scanf_s("%f", &weight,20);
//
//	value = 1700.0 * weight * 14.5833;
//	printf("your weight in platium is worth $%.2f.\n", value);
//	printf("ypu are easily worth that,if platium prices drop,\n");
//	printf("eat more to maintain your value.\n");
//
//	getchar();
//	getchar();
//	return 0;
//} 


//#include<stdio.h>
//int main(void)
//{
//	int a;
//	
//	printf("三位数：");
//	scanf_s("%d", &a);
//	int bai = a / 100;
//	int shi = (a / 10) % 10;
//	int ge = a % 10;
//
//	printf("%d\n", bai);
//	printf("%d\n", shi);
//	printf("%d\n", ge);
//	return 0;
//}


//#include<stdio.h>
//int main(void)
//{
//	int l;
//	
//	scanf_s("%d", &l);
//	int z = l * l;
//	double r = 3.14 * (l / 2) * (l / 2);
//
//	printf("%.1f", z - r);
//
//	return 0;
//}


//#include<stdio.h>
//int main(void)
//{
//	//十进制，八进制，十六进制表示100
//	int x = 100;
//
//	printf("10is%d,8is%o,16is%x\n", x, x, x);
//	printf("10is%d,8is%#o,16is%#x\n", x, x, x);
//
//	return 0;
//}



//// 数字能否直接赋值给占位符？
//#include<stdio.h>
//int main(void)
//{
//	printf("%d", 114514);
//
//	return 0;
//}
//// 可以

////" 能否直接赋值给char类型
//#include<stdio.h>
//int main(void)
//{
//	char s = '\a';
//	printf("%c", s);
//
//	return 0;
//}
////可以





//#include<stdio.h>
//int main(void)
//{
//	//输入三位数，拆分百十个
//	//int a;
//
//	//printf("请输入一个三位数：");
//	//scanf_s("%d", &a, 10);
//
//	//int bai = a / 100;
//	//int shi = (a % 100) / 10;
//	//int ge = (a % 10);
//
//	//printf("百位数是%d\n十位数是%d\n个位数是%d\n", bai, shi, ge);
//
//	return 0;
//}
//#include<stdio.h>
//int main(void)
//{
//	//让用户输入字符，我再打印出来
//	char ch;
//	printf("请输入字符：");
//	scanf_s("%c", &ch);
//
//	printf("字符%c表示的是%d", ch, ch);
//	return 0;
//}



//#include<stdio.h>
//int main(void)
//{
//	//用两种方式显示float类型的值
//	float about = 32000.0;
//	double abet = 2.14e9;
//	long double dip = 5.32e-5;
//
//	printf("%fcan be written %e\n", about, about);
//
//	return
//
//}


//#include<stdio.h>
//int main(void)
//{
//	//打印类型大小
//	printf("type int has a size of %zd bytes.\n", sizeof(int));
//	printf("type float has a size of %zd bytes.\n", sizeof(float));
//	printf("type char has a size of %zd bytes.\n", sizeof(char));
//}


////使用转义序列
//#include<stdio.h>
//int main(void)
//{
//	float salary;
//
//	printf("enter your desired monthly salary:");
//	printf(" $______\b\b\b\b\b\b");
//	scanf_s("%f", &salary);
//	printf("\n\t$%.2f a month is $%.2f a year.", salary,
//		salary * 12.0);
//	printf("\rGee!\n");
//
//	return 0;
//
//}

//用转义序列，八进制，十六进制，十进制把回车字符赋给ch
//#include<stdio.h>
//int main(void)
//{
//	char ch = '\r';
//	printf("%d", ch);
//	ch = '\15';
//	printf("%d", ch);
//	ch = '\x0D';
//	printf("%d", ch);
//	ch = 13;
//	printf("%d", ch);
//
//	return 0;
//}