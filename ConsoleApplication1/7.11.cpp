//#include <stdio.h>
//int main(void)
//{
//	char ch;
//
//	while ((ch = getchar()) != '#')
//	{
//		if (ch == '\n')
//			ch = getchar();
//		printf("Step 1\n");
//		if (ch == 'c')
//			ch = getchar();
//		if (ch == 'b')
//			break;
//		else
//			if (ch == 'h')
//				printf("Step 3\n");
//			else
//				printf("Step 2\nStep 3\n");
//	}
//	printf("Done");
//
//	return 0;
//}



////#停止，记录空格数，换行符数，字符数
//#include<stdio.h>
//int main(void)
//{
//	char ch;
//	int others=0,n_char=0, n_space=0, n_enter=0;
//	while ((ch = getchar()) != '#')
//	{ 
//		n_char++;
//		if (ch == ' ')
//			n_space++;
//		else if (ch == '\n')
//			n_enter++;
//		else
//			others++;
//	}
//	printf("char = %d\nspace = %d\nenter = %d\nothers = %d", n_char, n_space, n_enter,others);
//
//	return 0;
//}


////#停止，打印输入的字符的ASCII，每行八对
//#include<stdio.h>
//int main(void)
//{
//	char ch,list1[200];
//	int index = 0;
//	while ((ch = getchar()) != '#')
//	{
//		if (ch == '\n')
//			continue;
//		list1[index] = ch;
//		index++;
//	}
//	for (int i = 0;i < index;i++)
//	{
//		printf("%3c %3d ", list1[i], list1[i]);
//		if (i % 8 == 7)
//			printf("\n");
//	}
//
//	return 0;
//}


//#include<stdio.h>
//int main(void)
//{
//	char ch;
//	int counter = 0;
//	while ((ch = getchar()) != '#')
//	{
//		if (counter++ % 8 == 0)
//			printf("\n");
//		if (ch == '\n')
//			printf("\\n-%03d  ", ch);         //参考答案没我写的好，他这个摁一次enter就得输出一次，我那个就不用
//		else if (ch == '\t')
//			printf("\\t-%03d  ", ch);
//		else
//			printf("%c-%03d  ", ch, ch);
//	}
//
//	return 0;
//}


////读取输入的偶数，并求个数，平均值，奇数个数，奇数平均值
//#include<stdio.h>
//int main(void)
//{
//	int odd = 0, even = 0;
//	int sum1 = 0, sum2 = 0;
//	int i;
//	scanf_s("%d", &i);
//	while (i != 0)//判定奇偶数
//	{
//		if (i % 2 == 0)//偶数
//		{
//			even++;
//			sum2 += i;
//		}
//		else//奇数
//		{
//			odd++;
//			sum1 += i;
//		}
//		scanf_s("%d", &i);
//	}
//	printf("odd = %d,and the average is %f\n", odd, (float)sum1 / odd);
//	printf("even = %d,and the average is %f\n", even, (float)sum2 / even);
//
//	return 0;
//
//}


//// 将一段话中的。替换成！，！替换成！！
//#include<stdio.h>
//int main(void)
//{
//	char ch;
//	int counter=0;
//	while ((ch = getchar()) != '#')
//	{
//		if (ch == '.')
//		{
//			putchar('!');
//			counter++;
//		}
//		else if (ch == '!')
//		{
//			printf("!!");
//			counter++;
//		}
//		else
//			putchar(ch);
//	}
//	printf("\nthere are %d characters replaced.", counter);
//	return 0;
//}


//// 将一段话中的。替换成！，！替换成！！(switch)
//#include<stdio.h>
//int main(void)
//{
//	char ch;
//	int counter = 0;
//	while ((ch = getchar()) != '#')
//	{
//		switch (ch)
//		{
//		case '.':
//			putchar('!');
//			counter++;
//			break;
//		case '!':
//			printf("!!");
//			counter++;
//			break;
//		default:
//			putchar(ch);
//		}
//	}
//	printf("\nthere are %d characters replaced.", counter);
//	return 0;
//}


////识别ei出现的次数
//#include<stdio.h>
//int main(void)
//{
//	char prev='\n', ch;
//	//prev=e,ch=i,counter+1
//	int counter = 0;
//	while ((ch = getchar()) != '#')
//	{
//		if (prev == 'e' && ch == 'i')
//			counter++;
//		prev = ch;
//	}
//	printf("ei has appeared %d times", counter);
//	return 0;
//}



////输入工作时长，输出工资，税，净收入
// //挡位
////小时40
////美元300 450  0.15 0.2 0.25
//#include<stdio.h>
//#define SALARY 10
//#define H_STAGE 40
//#define H_RATE 1.5
//#define TAX_STAGE1 300
//#define TAX_RATE1 0.15
//#define TAX_BASE1 300*0.15
//#define TAX_STAGE2 450
//#define TAX_RATE2 0.2
//#define TAX_BASE2 300*0.15+150*0.2
//#define TAX_RATE3 0.25
//int main(void)
//{
//	int hours;
//	float tax, net_income,salary;
//	scanf_s("%d", &hours);
//	if (hours <= H_STAGE)//判定工资多少
//		salary = hours * SALARY;
//	else
//		salary = hours * H_RATE * SALARY;
//	//判定税收
//	if (salary <= TAX_STAGE1)//一段
//	{
//		tax = salary * TAX_RATE1;
//		net_income = salary - tax;
//	}
//	else if (salary <= TAX_STAGE2)//二段
//	{
//		tax = TAX_BASE1 + (salary - TAX_STAGE1) * TAX_RATE2;
//		net_income = salary - tax;
//	}
//	else//三段
//	{
//		tax = TAX_BASE2 + (salary - TAX_STAGE2) * TAX_RATE3;
//		net_income = salary - tax;
//	}
//	printf("all income is %f\ntax is %f\nnet income is %f\n"
//		, salary, tax, net_income);
//
//	return 0;
//}





////输入工作时长，输出工资，税，净收入
// //挡位
////小时40
////美元300 450  0.15 0.2 0.25
//#include<stdio.h>
//#define H_STAGE 40
//#define H_RATE 1.5
//#define TAX_STAGE1 300
//#define TAX_RATE1 0.15
//#define TAX_BASE1 300*0.15
//#define TAX_STAGE2 450
//#define TAX_RATE2 0.2
//#define TAX_BASE2 300*0.15+150*0.2
//#define TAX_RATE3 0.25
//int main(void)
//{
//	int hours;
//	float tax, net_income, salary,salary_rate;
//	int choice;
//	printf("*****************************************\n"
//		"请选择工资等级：\n"
//		"1) 8.75                  2)9.33\n"
//		"3)10.00                  4)11.20\n"
//		"5)quit\n"
//		"*****************************************\n");
//	scanf_s("%d", &choice);
//	while (choice != 5)
//	{
//		switch (choice)//定工资
//		{
//		case 1:
//			salary_rate = 8.75;
//			break;
//		case 2:
//			salary_rate = 9.33;
//			break;
//		case 3:
//			salary_rate = 10.00;
//			break;
//		case 4:
//			salary_rate = 11.20;
//			break;
//		default:
//			printf("请输入符合要求的数字\n");
//			printf("*****************************************\n"
//				"请选择工资等级：\n"
//				"1) 8.75                  2)9.33\n"
//				"3)10.00                  4)11.20\n"
//				"5)quit"
//				"*****************************************\n");
//			scanf_s("%d", &choice);
//			continue;
//		}
//		printf("请输入本周工作小时数：");
//		scanf_s("%d", &hours);
//		if (hours <= H_STAGE)//判定工资多少
//			salary = hours * salary_rate;
//		else
//			salary = hours * H_RATE * salary_rate;
//		//判定税收
//		if (salary <= TAX_STAGE1)//一段
//		{
//			tax = salary * TAX_RATE1;
//			net_income = salary - tax;
//		}
//		else if (salary <= TAX_STAGE2)//二段
//		{
//			tax = TAX_BASE1 + (salary - TAX_STAGE1) * TAX_RATE2;
//			net_income = salary - tax;
//		}
//		else//三段
//		{
//			tax = TAX_BASE2 + (salary - TAX_STAGE2) * TAX_RATE3;
//			net_income = salary - tax;
//		}
//		printf("all income is %f\ntax is %f\nnet income is %f\n"
//			, salary, tax, net_income);
//		printf("*****************************************\n"
//			"请选择工资等级：\n"
//			"1) 8.75                  2)9.33\n"
//			"3)10.00                  4)11.20\n"
//			"5)quit\n"
//			"*****************************************\n");
//		scanf_s("%d", &choice);
//	}
//	printf("Done!");
//	return 0;
//}
//
////加询问小时
////加循环
////加菜单



////输入正整数，输出所有比它小的素数
//#include<stdio.h>
//#include<stdbool.h>
//int main(void)
//{
//	int n;
//	printf("请输入正整数：");
//	scanf_s("%d", &n);
//	for (int i = 2;i < n;i++)
//	{
//		bool isPrime = true;
//		for (int j = 2;j*j <= i;j++)
//			if (i % j == 0)
//			{
//				isPrime = false;
//				break;
//			}
//		if (isPrime)
//			printf("%d\n", i);
//	}
//
//	return 0;
//}




//#include<stdio.h>
//#define STAGE1 17850
//#define STAGE2 23900
//#define STAGE3 29750
//#define STAGE4 14875
//void tax(int stage);
//int main(void)
//{
//	int choice,salary;
//	do {
//		printf("*******************\n"
//			"请输入您的情况：\n"
//			"1)单身        2)户主\n"
//			"3)已婚，共有  4)已婚，离异\n"
//			"5)quit\n"
//			"**********************\n");
//		scanf_s("%d", &choice);
//		switch (choice)
//		{
//		case 1:
//			tax(STAGE1);
//			break;
//		case 2:
//			tax(STAGE2);
//			break;
//		case 3:
//			tax(STAGE3);
//			break;
//		case 4:
//			tax(STAGE4);
//			break;
//		case 5:
//			break;
//		}
//	}while (choice != 5);
//}
//
//void tax(int stage)
//{
//	int salary;
//	printf("请输入总工资：");
//	scanf_s("%d", &salary);
//	float tax;
//	if (salary <= stage)
//		tax = salary * 0.15;
//	else
//		tax = (salary - stage) * 0.28 + stage * 0.15;
//	printf("your tax is %.2f\n", tax);
//}




