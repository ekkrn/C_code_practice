//#include<stdio.h>
//#include<string.h>
//#include<ctype.h>
////获取加比较大小
//void jungle(void);
////动物转换数值
//int attack1(char* animal);
////插入逗号
//void insertcomma(void);
////输出简写
//void abbreviation(void);
//
//int main(void) {
//	//斗兽棋
//	jungle();
//	//插入逗号
//	insertcomma();
//	putchar('\n');
//	//输出简写
//	abbreviation();
//
//	return 0;
//}
//
//void abbreviation(void) {
//	char temp[50],ch;
//
//	do{
//		scanf_s("%s", temp, 50);
//		ch = toupper(temp[0]);
//		putchar(ch);
//		ch = getchar();
//	} while (ch != '\n');
//}
//
//void insertcomma(void) {
//	char input[100];
//	scanf_s("%s", input,100);
//	int len = strlen(input);
//	int flag = 1;
//	int count;
//	count = 3-len % 3;
//	for (int i=0;i<len;i++,count++)
//	{
//		if (count % 3 == 0 && flag == 0)
//		{
//			flag = 0;
//			putchar(',');
//			putchar(input[i]);
//
//		}
//		else if (i == len - 2)
//		{
//			flag = 1;
//			putchar(input[i]);
//		}
//		else
//		{
//			flag = 0;
//			putchar(input[i]);
//		}
//		
//	}
//}
//
//
//void jungle(void) {
//	char oxb[10];
//	char oxs[10];
//	int state;
//	int oxbi, oxsi;
//	scanf_s("%s %s", oxb,10, oxs, 10);
//	oxbi = attack1(oxb);
//	oxsi = attack1(oxs);
//	if (oxbi == 0 && oxsi == 3)
//		state = 1;
//	else if (oxbi == 3 && oxsi == 0)
//		state = 0;
//	else
//	{
//		if (oxbi > oxsi)
//			state = 1;
//		else
//			state = 0;
//	}
//	if (state == 1)
//		puts("win");
//	else
//		puts("lose");
//}
//
//int attack1(char* animal) {
//	if (strcmp(animal, "mouse")==0)
//		return 0;
//	else if (strcmp(animal, "cat")==0)
//		return 1;
//	else if (strcmp(animal, "tiger")==0)
//		return 2;
//	else if (strcmp(animal, "elephant")==0)
//		return 3;
//	return -1;
//}