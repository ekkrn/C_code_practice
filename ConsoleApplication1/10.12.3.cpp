//#include<stdio.h>
//int max(int arr[], int n);
//int main(void)
//{
//	int arr[] = { 1,10,0,8,6 };
//	printf("%d", max(arr, 5));
//}
//int max(int arr[], int n)
//{
//	int max = arr[0],target=0;
//	for (int i = 1;i < n;i++)
//		if (arr[i] > max)
//		{
//			max = arr[i];
//			target = i;
//		}
//	return target;
//}

//#include<stdio.h>
//void daoxu(double arr[], int n);
//int main(void)
//{
//	double arr1[] = { 1.1,2.2,3.3,4.4,5.5 };
//	daoxu(arr1, 5);
//	return 0;
//}
//
//void daoxu(double arr[], int n)
//{
//	double temp[5];
//	for (int i = 0;i < n;i++)
//	{
//		temp[i] = arr[n - 1 - i];
//	}
//	for (int i = 0;i < n;i++)
//	{
//		arr[i] = temp[i];
//	}
//}