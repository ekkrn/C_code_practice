//初识getchar，putchar
//#include<stdio.h>
//#define SPACE ' '
//#include<ctype.h>
//int main(void)
//{
//	char ch;
//	
//
//	while ((ch = getchar()) != '\n')
//	{
//		if (isalpha(ch))
//			putchar(ch+1);
//		else
//			putchar(ch);
//	}
//	printf("\n");
//
//	return 0;
//}



//#include<stdio.h>
//#include<ctype.h>
//#include<stdbool.h>
//#define STOP '|'
////统计字符数，单词数，行数
//int main(void)
//{
//	char c;char prev;
//	long n_chars = 0L;//字符数
//	int n_lines = 0;//行数
//	int n_words = 0;//单词数
//	int n_pines = 0;//不完整行数
//	bool inword = false;
//
//	printf("请输入：(|作为结束)");
//	prev = '|';//防止直接输入 | 一行都没有
//	while ((c = getchar()) != STOP)
//	{
//		n_chars++;
//		if (c == '\n')
//			n_lines++;//行数
//		if (!isspace(c) && !inword)//单词数
//		{
//			inword = true;
//			n_words++;
//		}
//		if (isspace(c) && inword)
//			inword = false;
//		prev = c;
//	}
//	if (prev != '\n')
//		n_pines++;
//	printf("characters =%ld,words =%d,lines = %d ,",
//		n_chars, n_words, n_lines);
//	printf("partial lines =%d\n", n_pines);
//
//	return 0;
//
//}




//max = a > b ? a : b;
//
////初次尝试条件运算符
//#include<stdio.h>
//#define COVERAGE 350
//int main(void)
//{
//	//计算多大面积需要多少桶有其
//	int sq_feet;
//	int cans;
//	
//	printf("请输入面积：");
//	while (scanf_s("%d", &sq_feet) == 1)
//	{
//		cans = sq_feet / COVERAGE;
//		cans += (sq_feet % COVERAGE == 0 ? 0 : 1);
//		printf("you need %d %s of paint.\n",
//			cans, cans == 1 ? "can" : "cans");
//		printf("请输入面积：");
//
//	}
//	return 0;
//}





////求正方形面积，如果输入的长宽不是数字，则break
//#include<stdio.h>
//int main(void)
//{
//	float length, width;
//
//	printf("enter the length\n");
//	while (scanf_s("%f", &length) == 1)
//	{
//		printf("length is %.2f",length);
//		printf("enter the width:");
//		if (scanf_s("%f", &width) != 1)
//			break;
//		printf("width is %.2f", width);
//		printf("Area is %.2f", width * length);
//		printf("enter next lengrh");
//	}
//	printf("Done!");
//
//	return 0;
//}


















//#include<stdio.h>
//#include<ctype.h>
//int main(void)
//{
//	char ch;
//	
//	printf("Give me a letter:");
//
//	while ((ch = getchar()) != '#')
//	{
//		if (ch == '\n')
//			continue;
//		if (islower(ch))
//			switch (ch)
//			{
//			case 'a':
//				printf("argali, a wild sheep of Asia\n");
//				break;
//			default:
//				printf("That's a stumper\n");
//			}
//		else
//			printf("i recongnize only lowercase letters.\n");
//		while (getchar() != '\n')
//			continue;
//		printf("please type another letter or a #");
//	}
//	printf("bye");
//
//	return 0;
//}














