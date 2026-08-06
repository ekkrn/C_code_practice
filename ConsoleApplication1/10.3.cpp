//#include<stdio.h>
//#define MONTHS 12
//int sum(int* arr,int* end);
//
//int main(void)
//{
//	int days[MONTHS] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	int index;
//
//	for (index = 0;index < MONTHS;index++)
//		printf("month %2d has %d days.\n", index + 1, *(days + index));
//
//	int answer;
//	answer = sum(days, days+MONTHS);
//	printf("%d", answer);
//	return 0;
//}
//
//int sum(int* arr,int *end)
//{
//	int sum = 0;
//	while (arr < end)
//	{
//		sum += *arr++;
//	}
//
//	return sum;
//}



//#include<stdio.h>
//int sum(const int ar[], int n);
//int main(void)
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int answer;
//	answer = sum(arr, 5);
//	printf("%d", answer);
//	return 0;
//}
//
//int sum(const int ar[], int n)
//{
//	int i;
//	int total = 0;
//	for (i = 0;i < n;i++)
//		total += ar[i];
//	return total;
//}


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

