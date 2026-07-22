////筛选最大值与最小值
//#include<stdio.h>
//int main(void)
//{
//	int i,n, max, min;
//	int arr[100];
//
//	scanf_s("%d", &n);
//
//	for (i = 0;i < n;i++)
//		scanf_s("%d", &arr[i]);
//
//	max = arr[0];min = arr[0];
//	for (i = 0;i < n;i++)
//	{
//		if (arr[i] > max) max = arr[i];
//		if (arr[i] < min) min = arr[i];
//	}
//	printf("%d", max - min);
//
//	return 0;
//}




////第n个质数
//// 遍历1-n，检测质数，检测出后，加入数组,得到质数表
//#include<stdio.h>
//int main(void)
//{
//	int n,i,j,k=0;
//	int arr[100000];
//	scanf_s("%d", &n);
//
//	for (i = 2;i <= 100;i++)//建立素数表
//	{
//		int status = 1;
//		for (j = 2;j < i;j++)
//		{
//			if (i % j == 0) status = 0;//合数为假
//		}
//		if (status == 1)//素数加入arr
//		{
//			arr[k] = i;
//			k++;
//		}
//	}
//
//	printf("%d", arr[n-1]);
//
//	return 0;
//}



//获取整体数组
//分奇偶数组
//分别排序
//输出
#include<stdio.h>
void bubblesort(int* arr, int size);//排序
void devidearr(int* arr, int size);//分数组,输出
int main(void)
{
	int arr[100000];
	int i, j, k;
	//获取数组
	for (i = 0;i < 10;i++)
		scanf_s("%d", &arr[i]);

	devidearr(arr, 10);

	return 0;
}

void bubblesort(int* arr, int size)
{
	for (int i=0;i<size-1;i++)
		for (int j=0;j<size-1-i;j++)
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}

}

void devidearr(int* arr, int size)
{
	int odd[20], even[20];
	int j = 0,k=0;
	//遍历元素,分数组
	for (int i = 0;i < size;i++)
	{
		if (arr[i] % 2) odd[j++] = arr[i];
		else even[k++] = arr[i];
	}
	//排序
	bubblesort(odd, j);
	bubblesort(even, k);
	for (int i = j-1;i >=0;i--)
		printf("%d ", odd[i]);
	for (int i = 0;i<k;i++)
		printf("%d ", even[i]);
}