//#include<stdio.h>
//#include<string.h>
//#include<ctype.h>
//void instead();
//void getnbchar(char* ch);
//void plus();
//void delta();
//void getword(char* st,int n);
//
//int main() {
//	//第一题，根据指令替换字母
//	instead();
//	//第二题，加法显示
//	plus();
//	//第三题，判断一元二次方程是否有实数解
//	delta();
//}
//
//void getword(char* st, int n) {
//	char ch;
//	ch = getchar();
//	while (isspace(ch))
//		ch=getchar();
//	int i;
//	for (i = 0;i<n;i++) {
//		st[i] = ch;
//		ch = getchar();
//	}
//	st[i] = '\0';
//}
//
//void instead() {
//	int strlength, times;
//	scanf_s("%d %d", &strlength, &times);
//	char str1[50];
//	getword(str1, strlength);
//	for (int i = 0;i < times;i++) {
//		int begin, end;
//		char old, new1;
//		scanf_s("%d %d", &begin, &end);
//		getnbchar(&old);
//		getnbchar(&new1);
//		for (int j = begin - 1;j < end;j++)
//		{
//			if (str1[j] == old)
//				str1[j] = new1;
//		}	
//	}
//	puts(str1);
//}
//
//void getnbchar(char* obch) {
//	while (char ch = getchar()) {
//		if (isblank(ch))
//			continue;
//		else
//		{
//			*obch = ch;
//			break;
//		}
//	}
//}
//
//void plus() {
//	double a, b;
//	scanf_s("%lf %lf", &a, &b);
//	printf("%.0lf\n", a + b);
//}
//
//void delta() {
//	int a, b, c;
//	scanf_s("%d %d %d", &a, &b, &c);
//	double delta;
//	delta = (double)b * b - 4 * a * c;
//	if (delta >= 0)
//		puts("true");
//	else
//		puts("false");
//}