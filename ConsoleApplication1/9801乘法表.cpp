//印度人的99乘法表，两个while循环
#include<stdio.h>
int main9801(void)
{
	int output, shulie = 1;
	while (shulie < 100)
	{
		int heng = 1;
		while (heng < 100)
		{
			output = shulie * heng;
			printf("%2d*%-2d=%-4d\n", shulie, heng, output);
			heng = heng + 1;
		}
		shulie = shulie + 1;
	}
	return 0;
}