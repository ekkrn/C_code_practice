//#include<stdio.h>
////初识for
//int main(void)
//{
//	const int NUMBER = 22;
//	int count;
//
//	for (count = 1;count <= NUMBER;count++)
//		printf("be my valentaine!\n");
//
//	return 0;
//}



////试试用字符比大小来循环
////a输出到z
//#include<stdio.h>
//int main(void)
//{
//	char ch;
//	for (ch = '\7';ch <= 'z';ch++)
//		printf("the ascii value for %c is %d\n", ch, ch);
//
//	return 0;
//}


////试试for测试条件更加灵活
////以立方表为例 
//#include<stdio.h>
//int main(void)
//{
//	int num;
//	printf("    n     n cubed\n");
//
//	for (num = 1;num * num * num <= 216;num++)
//		printf("%5d %5d\n", num, num * num * num);
//
//	return 0;
//}


////试试省略for的表达式（第三个）
//#include<stdio.h>
//int main(void)
//{
//	int ans, n;
//	ans = 2;
//	for (n = 3; ans < 25;)
//		ans = ans * n;
//	printf("n is %d,ans is %d ", n, ans);
//
//	return 0;
//}


//
////试试for的第一个表达式用来执行语句
//#include<stdio.h>
//int main(void)
//{
//	int num = 0;
//
//	for (printf("keep entering numbers\n");num != 6;)
//		scanf_s("%d", &num);
//	printf("that's what i want!");
//
//	return 0;
//}
//


