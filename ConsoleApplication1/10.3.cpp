#include<stdio.h>
#define MONTHS 12
int sum(int* arr);

int main(void)
{
	int days[MONTHS] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int index;

	for (index = 0;index < MONTHS;index++)
		printf("month %2d has %d days.\n", index + 1, *(days + index));

	int answer;
	answer = sum(days);
	printf("%d", answer);
	return 0;
}

int sum(int* arr)
{
	int sum = 0;
	while (arr < arr + MONTHS)
	{
		sum += *(arr++);
		printf("%d", sum);
	}

	return sum;
}





////不用数组的声明，创造一个数组failed
//#include<stdio.h>
//int main(void)
//{
//	int arr = 1;
//	*(&arr + 1) = 2;
//	*(&arr + 2) = 3;
//	for (int i=0;i < 3;i++)
//		printf("%d", *(&arr + i));
//	return 0;
//}

