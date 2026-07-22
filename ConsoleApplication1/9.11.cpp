#include<stdio.h>
void chline(char ch, int i, int j);
double harmean(double a, double b);
void alter(double* a, double* b);
void changethree(double* a, double* b, double* c);

int main(void)
{
	//chline('#', 3, 5);
	//printf("%lf", harmean(3, 4));

	//double x = 4.3, y = 5.5;
	//alter(&x, &y);
	//printf("%lf %lf", x, y);

	

	return 0;
}


//读取字符函数
//根据字母返回位置函数


void alter(double* a, double* b)
{
	(*a > *b) ? *b = *a : *a = *b;
}

void chline(char ch, int i, int j)//字符方阵
{
	for (int a = 1;a <= j;a++)
	{
		for (int b = 1;b <= i;b++)
			printf("%c", ch);
		printf("\n");
	}
}

double harmean(double a, double b)//调和平均数
{
	return 2 / (1 / a + 1 / b);
}

void changethree(double* a, double* b, double* c)//三数排大小
{
	int temp;
	if (*a > *b)
	{
		temp = *a;
		*a = *b;
		*b = temp;
	}
	if (*a > *c)
	{
		temp = *a;
		*a = *c;
		*c = temp;
	}
	if (*b > *c)
	{
		temp = *b;
		*b = *c;
		*c = temp;
	}

}