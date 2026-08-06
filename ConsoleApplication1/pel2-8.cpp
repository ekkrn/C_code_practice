//#include<stdio.h>
//#include<stdlib.h>
//
//int* make_array(int elem, int val);
//void show_array(const int arr[], int n);
//int main(void) {
//	int* pa;
//	int size;
//	int value;
//
//	printf("enter the number of elements:\n");
//	while (scanf_s("%d",&size) == 1 && size > 0) {
//		printf("enter the initialization values:\n");
//		scanf_s("%d", &value);
//		pa = make_array(size, value);
//		if (pa) {
//			show_array(pa,size);
//			free(pa);
//		}
//		printf("enter the number of elements\n");
//	}
//	printf("Done\n");
//	return 0;
//}
//
//int* make_array(int elem, int val) {
//	int* pti;
//	pti = (int*)malloc(elem * sizeof(int));
//	for (int i = 0;i < elem;i++)
//		pti[i] = val;
//	return pti;
//}
//void show_array(const int arr[], int n) {
//	for (int i = 0;i < n;i++) {
//		printf("%d ", arr[i]);
//		if (i % 8 == 7)
//			putchar('\n');
//	}
//	putchar('\n');
//}