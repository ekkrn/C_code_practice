//#include<stdio.h>
//int set_mode(int mode_input) {
//	int mode;
//	if (mode_input != 1 && mode_input != 0)
//	{
//		printf("invalid mode specified.mode 1 used.\n");
//		mode = 1;
//	}
//	else{
//		mode = mode_input;
//	}
//	return mode;
//}
//void get_info(int mode,double* distance,double* fuel) {
//	if(mode==0)
//	{
//		printf("enter distance traveled in km\n");
//		scanf_s("%lf", distance);
//		printf("enter fuel consemed in liters\n");
//		scanf_s("%lf", fuel);
//	}
//	else
//	{
//		printf("enter distance traveled in miles\n");
//		scanf_s("%lf", distance);
//		printf("enter fuel consemed in gallons\n");
//		scanf_s("%lf", fuel);
//	}
//}
//
//void show_info(int mode,double distance,double fuel) {
//	if (mode == 0) {
//		printf("fuel consumption is %.0lf liters per 100km\n", fuel / distance * 100);
//	}
//	else{
//		printf("fuel consumption is %.0lf distance per gallons\n", distance/fuel);
//	}
//}