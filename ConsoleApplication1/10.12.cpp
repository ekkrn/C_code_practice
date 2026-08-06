//#include<stdio.h>
//void copy_arr(double target[], double source[], int n);
//void copy_ptr(double* target, double* source, int n);
//void copy_ptrs(double target[], double source[], double* source_end);
//int main(void)
//{
//
//	double source[] = { 1.1,2.2,3.3,4.4,5.5 };
//	double target1[5];
//	double target2[5];
//	double target3[5];
//	double arr[2][4] = { {1,2,3,4},{5,6,7,8} };
//	double arr2[2][4];
//	double arr3[7] = {1,2,3,4,5,6,7};
//	double arr4[3];
//
//
//	for (int i = 0;i < 2;i++)
//		copy_arr(arr2[i], arr[i], 4);
//
//	copy_ptr(arr4, arr3 + 2, 3);
//
//	copy_arr(target1, source, 5);
//	copy_ptr(target2, source, 5);
//
//	copy_ptrs(target3, source, source + 5);
//	return 0;
//}
//
//void copy_arr(double target[], double source[], int n)
//{
//	int index;
//	for (index = 0;index < n;index++)
//		target[index] = source[index];
//}
//void copy_ptr(double* target, double* source, int n)
//{
//	for (int i = 0;i < n;i++)
//		*(target + i) = *(source + i);
//}
//void copy_ptrs(double target[], double source[], double* source_end)
//{
//	for (int i = 0;i < (source_end - source);i++)
//		*(target + i) = *(source + i);
//}