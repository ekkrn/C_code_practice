//fuxi 6
//#include<stdio.h>
//void alter(int* a, int* b);
//int main(void)
//{
//	int x, y;
//	scanf_s("%d %d",&x,&y);
//	alter(&x, &y);
//	printf("%d %d", x, y);
//}
//
//void alter(int* a, int* b)
//{
//	int temp = *a;
//	*a = (*a + *b);
//	*b = temp - *b;
//}

////fuxi8
//int max(int a, int b, int c)
//{
//	int max=a;
//	if (b > max) max = b; //(b>max) ? max=b;
//	if (c > max) max = c;
//	return max;
//}

////fuxi9
//#include<stdio.h>
//void menu(void);
//int get_choice(int low,int high);
//
//int main(void)
//{
//	int choice;
//	do{
//		menu();
//		choice = get_choice(1, 4);
//		switch (choice)
//		{
//		case 1:printf("\007");
//			break;
//		case 2:printf("\007");
//			break;
//		case 3:printf("\007");
//			break;
//		default:
//			break;
//		}
//	}while (choice != 4);
//	printf("bb\n");
//}
//
//
//
//
//void menu(void)
//{
//	int input;
//	printf("please choose:\n");
//	printf("1. copy files       2. move files\n"
//	       "3. remove files     4. quit\n");
//}
//
//int get_choice(int low,int high)
//{
//	int input,status;
//	while ((status = scanf_s("%d", &input)) != 1 ||
//		(input < low || input > high))
//	{
//		if (status != 1)
//		{
//			input = 4;break;
//		}
//		else
//		{
//			printf("please enter correcr integer!\n");
//			menu();
//			continue;
//		}
//	}
//	return input;
//}