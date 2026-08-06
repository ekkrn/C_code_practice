//#include<stdio.h>
//void get_arr(int arr[][5], int n);
//float ave_row(int arr[], int n);
//float ave_all(int arr[][5], int n);
//int find_max(int arr[][5], int n);
//void show(int arr[][5], int n);
//
//int main(void)
//{
//	int arr[3][5];
//	float avera[3],avera_all;
//	int max;
//	get_arr(arr, 3);
//	//获取每行的平均值
//	for (int i = 0;i < 3;i++)
//		avera[i]=ave_row(arr[i], 5);
//	//获取整体平均值
//	avera_all = ave_all(arr, 3);
//	printf("%f\n", avera_all);
//	//获取最大值
//	max = find_max(arr, 3);
//	printf("%d\n", max);
//	//展示arr
//	show(arr, 3);
//
//}
//void get_arr(int arr[][5], int n)
//{
//	printf("please enter 5 numbers 3 times\n");
//	for (int i = 0;i < n;i++)
//		for (int j = 0;j < 5;j++)
//			scanf_s(" %d", &arr[i][j]);
//}
//float ave_row(int arr[], int n)
//{
//	int sum=0;
//	for (int i = 0;i < n;i++)
//		sum += arr[i];
//	return ((float)sum/n);
//}
//float ave_all(int arr[][5], int n)
//{
//	int sum = 0;
//	for (int i = 0;i < n;i++)
//		for (int j = 0;j < 5;j++)
//			sum += arr[i][j];
//	return ((float)sum/(n*5));
//}
//int find_max(int arr[][5], int n)
//{
//	int max = arr[0][0];
//	for (int i = 0;i < n;i++)
//		for (int j = 0;j < 5;j++)
//			(arr[i][j] > max) ? max = arr[i][j] : 0;
//	return max;
//}
//void show(int arr[][5], int n)
//{
//	for (int i = 0;i < n;i++)
//	{
//		for (int j = 0;j < 5;j++)
//			printf("%2d ", arr[i][j]);
//		printf("\n");
//	}
//}
