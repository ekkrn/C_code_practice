//#include"diceroll.h"
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int main(void) {
//	int dice, roll;
//	int sides;
//	int status;
//	int sets;
//	int* arr_answer;
//
//	srand((unsigned int)time(0));
//	printf("how many sets?\n");
//	scanf_s("%d", &sets);
//	arr_answer = (int*)malloc(sets * sizeof(int));
//	printf("enter the sides\n");
//	while (scanf_s("%d", &sides) == 1 && sides > 0) {
//		printf("enter the number of dice\n");
//		if (status = scanf_s("%d", &dice) != 1) {
//			if (status == EOF)
//				break;
//			else
//			{
//				printf("enter an integer!\n");
//				printf("how many sides?\n");
//				continue;
//			}
//		}
//		for (int i = 0;i < sets;i++) {
//			arr_answer[i] = roll_n_dice(dice, sides);
//		}
//		printf("here are %d sets of %d %d-sided throws\n",
//			sets, dice, sides);
//		for (int i = 0;i < sets;i++) {
//			printf("%2d ", arr_answer[i]);
//			if (i % 15 == 14)
//				putchar('\n');
//		}
//		putchar('\n');
//		printf("how many sides\n");
//	}
//	printf("the rollem was called %d times\n", roll_count);
//	return 0;
//}