//#include <stdio.h>
//int main(void)
//{
//	printf("hello world");
//}






#include<stdio.h>
int main2(void)//把二音讯转化为英尺
{
	int feet, fathoms;

	fathoms = 2;
	feet = 6 * fathoms;
	printf("there are %d feet in %d fathoms\n", feet, fathoms);
	printf("Yes,i said %d feet.\n", 6 * fathoms);

	return 0;
}