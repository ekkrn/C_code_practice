//#include<stdio.h>
//int main(void)
//{
//	printf("\7");
//}


//#include<stdio.h>
//#define BOOK "war and peace"
//int main(void)
//{
//	float cost = 12.99;
//	float percent = 80.0;
//
//	//打印两句话
//	printf("the price of \"%s\" sells for $%.2f\n", BOOK, cost);
//	printf("that is %.f%% of list\n",percent);
//
//	return 0;
//}

//
//
////输入名姓，输出名，姓
//#include<stdio.h>
//int main(void)
//{
//	char name[40], xing[40];
//	printf("请输入名,姓:");
//	scanf_s("%s%s", name,40, xing,40);
//
//	printf("%s,%s", name, xing);
//
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	char name[40];
//	
//	printf("please input your name:");
//	scanf_s("%s", name,40);
//	
//	int width = strlen(name) + 3;
//	printf("\"%s\"\n", name);
//	printf("\"%20s\"\n", name);
//	printf("\"%-20s\"\n", name);
//	//比姓名宽3个字符
//	printf("'%*s'", width, name);
//}


//
//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	//float pi = 31.415;
//	//printf("float is %.1f,and e-method is %.1e",pi,pi);
//
//
//	char name[40], xing[40];
//	scanf_s("%s%s", name, 40, xing, 40);
//
//	printf("%s %s\n", name, xing);
//	printf("%-*d %-*d", strlen(name), strlen(name), strlen(xing), strlen(xing));
//
//}


////将一个值以满足多种要求的方式显示
//
//#include<stdio.h>
//#include<float.h>
//int main(void)
//{
//	float fpointnum = 1.0 / 3.0;
//	double dpointnum = 1.0 / 3.0;
//
//	printf("**%.6f**%.12f**%.16f**\n", fpointnum, fpointnum, fpointnum);
//	printf("**%.6f**%.12f**%.16f**\n", dpointnum, dpointnum, dpointnum);
//	printf("%d  %d", FLT_DIG, DBL_DIG);
//
//	return 0;
//}

//#include<stdio.h>
//#define GALTOL 3.785
//#define MILEKM 1.609
//int main(void)
//{
//	float mile, gal,km,l;
//	printf("input your mile and gal:");
//	scanf_s("%f %f",&mile,&gal);
//	//ecar_ability是英式mile/gal
//	//acar_ability美式
//	km = 100*mile * MILEKM; l = gal * GALTOL;
//
//	printf("your car's ability is %.1f", l /km);
//
//	return 0;
//}

