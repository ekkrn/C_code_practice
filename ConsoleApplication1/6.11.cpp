////使用循环处理数组
//#include<stdio.h>
//#define SIZE 10
//#define PAR 72
//int main(void)
//{
//	int index, score[SIZE];
//	int sum = 0;
//	float average;
//
//	//读取分数
//	printf("输入%d个高尔夫成绩\n", SIZE);
//	for (index = 0;index < SIZE;index++)
//		scanf_s("%d", & score[index]);
//	//验证输入
//	for (index = 0;index < SIZE;index++)
//		printf("%d ", score[index]);
//	printf("\n");
//
//	//求总分数
//	for (index = 0;index < SIZE;index++)
//		sum += score[index];
//	average = (float)sum / SIZE;
//	printf("sum is %d,ave is %.2f\n", sum,average);
//	printf("that's is a handicap of %.0f\n", average - PAR);
//
//	return 0;
//}
//
//

////使用循环处理数组,紧凑版
//#include<stdio.h>
//#define SIZE 10
//#define PAR 72
//int main(void)
//{
//	int index, score[SIZE];
//	int sum = 0;
//	float average;
//
//	//读取分数,验证输入,求总分数
//	printf("输入%d个高尔夫成绩\n", SIZE);
//	for (index = 0;index < SIZE;index++) {
//	scanf_s("%d", &score[index]);
//	printf("%d ", score[index]);
//}
//	printf("\n");
//
//	//
//	for (index = 0;index < SIZE;index++)
//		sum += score[index];
//	average = (float)sum / SIZE;
//	printf("sum is %d,ave is %.2f\n", sum, average);
//	printf("that's is a handicap of %.0f\n", average - PAR);
//
//	return 0;
//}