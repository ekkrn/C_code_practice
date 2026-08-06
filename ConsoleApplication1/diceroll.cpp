//#include<stdio.h>
//#include<stdlib.h>
//int roll_count = 0;
//
//static int rollem(int sides) {
//	int roll;
//	roll = rand() % sides + 1;
//	roll_count++;
//	return roll;
//}
//
//int roll_n_dice(int dice, int sides) {
//	int total=0;
//
//	if (sides < 2)
//	{
//		printf("need at least 2sides\n");
//		return -2;
//	}
//	if (dice < 1) {
//		printf("need at least 1 die\n");
//		return -1;
//	}
//	for (int i = 0;i < dice;i++) {
//		total += rollem(sides);
//	}
//	return total;
//
//}