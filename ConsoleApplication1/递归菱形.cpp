//利用递归打印菱形
//打印星号设计函数
//打印每行设计函数
#include<stdio.h>
void lingxing(int n);
void lxprint (int n,int max);
void manyprint(int i,char ch);
int mainhahahahaha(void)
{
	int n;
	printf("几阶菱形：\n");
	scanf_s("%d", &n);//稍后设计输入验证

	lingxing(n);
	return 0;
}

void lingxing(int n)//打印菱形整体函数，让用户不用输入两遍n
{
	int max = n;
	lxprint(n,max);//打印菱形的递归函数
}
void lxprint(int n, int max)
{
	manyprint(n - 1, ' ');
	manyprint(2 * (max + 1 - n) - 1, '*');//上半
	printf("\n");
	if (n > 2)
		lxprint(n - 1, max);
	else
	{
		manyprint(2 *max - 1, '*');//最长
		printf("\n");
	}
	manyprint(n - 1, ' ');
	manyprint(2 * (max + 1 - n) - 1, '*');//下半
	printf("\n");
}

void manyprint(int n, char ch)//重复打印字符
{
	for (int i = 1;i <= n;i++)
		printf("%c", ch);
}