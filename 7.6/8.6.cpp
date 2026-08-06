//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//void factorial();
//void getTopStudents();
//void find();
//
//int main(void) {
//	//第一题，求阶乘
//	factorial();
//	//第二题，输出最高分学生的姓名
//	getTopStudents();
//	//第三题，开户一个数字
//	find();
//
//	return 0;
//}
//
//void factorial() {
//	int a,ans=1;
//	scanf_s("%d", &a);
//	int n = a;
//	for (int i = 0;i < a;i++)
//		ans *= n--;
//	printf("%d\n", ans);
//}
//void getTopStudents() {
//	int num;
//	printf("please enter the number of students\n");
//	scanf_s("%d", &num);
//	int max=-1,temp;
//	char name[21]="", tempn[21]="";
//	for (int i = 0;i < num;i++)
//	{
//		scanf_s("%d %s", &temp, tempn, 21);
//		if (temp > max)
//		{
//			max = temp;
//			strcpy_s(name, tempn);
//		}
//	}
//	printf("%s\n", name);
//}
//
//void find() {
//	int num,*arr;
//	scanf_s("%d", &num);
//	arr = (int*)malloc(num * sizeof(int));
//	for (int i = 0;i < num;i++) {
//		scanf_s("%d", &arr[i]);
//	}
//	int flag=0,object,loc=-1;
//	scanf_s("%d", &object);
//	for (int i = 0;i < num;i++) {
//		if (object == arr[i])
//		{
//			loc = i + 1;
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0)
//	{
//		printf("404 not found\n");
//		exit(0);
//	}
//	printf("%d", loc);
//}