//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void sort(int* ptr[10]);
//
//int main(void) {
//	int arr[10];
//	int* ptr[10];
//	srand((unsigned int)time(0));
//	for (int i = 0;i < 10;i++) {
//		arr[i] = (rand()%10+1);
//		ptr[i] = arr + i;
//	}
//	sort(ptr);
//	for (int i = 0;i < 10;i++) {
//		printf("%d\n", *ptr[i]);
//	}
//	return 0;
//}
//void sort(int* ptr[10]) {
//	int* temp;
//	for(int i=0;i<9;i++)
//		for (int j = i + 1;j < 10;j++)
//		{
//			if (*ptr[i] < *ptr[j])
//			{
//				temp = ptr[i];
//				ptr[i] = ptr[j];
//				ptr[j] = temp;
//			}
//		}
//}