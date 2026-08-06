//#include<stdio.h>
//#include<ctype.h>
//#include<string.h>
//void converter(char* st, int n);
//char* s_gets(char* st, int n);
//bool islong(char* st, int n);
//bool firup(char* st, int n);
//bool ctain(char* st, int n);
//bool test(char* key, int n);
//void encrypt(char* key, int n);
//
//int main(void)
//{
//	//大小写转换
//	char input[100];
//	s_gets(input, 100);
//	int n = strlen(input);
//	converter(input, n);
//	printf("\n");
//
//	//测试密码是否安全
//	char key[17];
//	s_gets(key, 17);
//	bool state;
//	state = test(key, 17);
//	printf("%s\n", (state) ? "True" : "False");
//
//	//加密
//	char key2[17];
//	s_gets(key, 17);
//	encrypt(key, 17);
//	putchar('\n');
//
//
//	return 0;
//}
//
//void converter(char* st, int n)
//{
//	for (int i = 0;i < n;i++)
//	{
//		if (isupper(st[i]))
//			st[i] = tolower(st[i]);
//		else
//			st[i] = toupper(st[i]);
//		putchar(st[i]);
//	}
//}
//char* s_gets(char* st, int n)
//{
//	char* ret_val;
//	int i = 0;
//	ret_val = fgets(st, n, stdin);
//	if (ret_val)
//	{
//		while (st[i] != '\n' && st[i] != '\0')
//			i++;
//		if (st[i] == '\n')
//			st[i] = '\0';
//		else
//			while (getchar() != '\n')
//				continue;
//	}
//	return ret_val;
//}
//
//bool islong(char* st, int n) 
//{
//	int len = strlen(st);
//	if (len >= 8 && len <= 16)
//		return true;
//	else
//		return false;
//}
//bool firup(char* st, int n)
//{
//	if (isupper(st[0]))
//		return true;
//	else
//		return false;
//}
//bool ctain(char* st, int n)
//{
//	bool flag=true;
//	bool lowerflag = false;
//	bool numflag = false;
//	for (char ch = 97;ch <= 122;ch++)
//		if (strchr(st, ch))
//			lowerflag = true;
//	flag = lowerflag;
//	for (char ch = 48;ch <= 57;ch++)
//		if (strchr(st, ch))
//			numflag = true;
//	flag = numflag;
//	if (!strpbrk(st,"~!@#￥%*"))
//			flag = false;
//	return flag;
//}
//bool test(char* key, int n)
//{
//	bool flag = true;
//	char state[6];
//	flag = islong(key, n);
//	flag = firup(key, n);
//	flag = ctain(key, n);
//	return flag;
//}
//
//void encrypt(char* key, int n)
//{
//	for (int i = 0;i < n;i++)
//	{
//		if (key[i] >= 97 && key[i] <= 122)
//			key[i] = ((key[i] - 96 + 5) % 26 + 96);
//		else if ((key[i] >= 65 && key[i] <= 90))
//			key[i] = ((key[i] - 64 + 5) % 26 + 64);
//		else if ((key[i] >= 48 && key[i] <= 57))
//			key[i] = ((key[i] - 47 + 5) % 10 + 47);
//	}
//	puts(key);
//}