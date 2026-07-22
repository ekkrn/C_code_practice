//#include<stdio.h>
//char get_choice(void);//显示菜单，得到输入
//char get_first(void);//获取一行输入的第一个字符
//void count(void);
//int get_int(void);
//int main(void)
//{
//	int choice;
//	while ((choice = get_choice()) != 'q')
//	{
//		switch (choice)
//		{
//		case 'a':printf("buy now\n");
//			break;
//		case 'b':putchar('\a');
//			break;
//		case 'c':count();
//			break;
//		default:printf("program Error\n");
//			break;
//		}
//	}
//	return 0;
//}
//
//char get_choice(void)
//{
//	char ch;
//	printf("enter the letter of your choice:\n");
//	printf("a. advice          b. bell\n");
//	printf("c. count           q. quit\n");
//	ch = get_first();
//	while ((ch <'a'||ch>'c')&& ch !='q')
//	{
//		printf("please respond with a,b,c,q\n");
//		ch = get_first();
//	}
//	return ch;
//}
//
//
//char get_first(void)
//{
//	char ch;
//	while ((ch = getchar()) == ' ')
//		continue;
//	//while ((ch = getchar()) == '\n')
//	//	continue;//法一
//	while (getchar() != '\n')
//		continue;
//	return ch;
//}
//
//void count(void)
//{
//	int  n, i;
//	printf("how far?\n");
//	n = get_int();
//	for (i = 1;i <= n;i++)
//		printf("%d\n", i);
//	while (getchar() != '\n')
//		continue;
//}
//
//int get_int(void)
//{
//	int input;
//	char ch;
//	while (scanf_s("%d", &input) != 1)
//	{
//		while ((ch = getchar()) != '\n')
//			continue;
//		printf("please enter int!\n");
//	}
//	return input;
//}


//int get_int(void)
//{
//	int input;
//	char ch;
//	while (scanf_s("%d", &input) != 1)
//	{
//		while ((ch = getchar()) != '\n')
//			continue;
//		printf("enter int\n");
//	}
//   return input;
//}