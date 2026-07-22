////1
//#include<stdio.h>
////倒序输出
//int main(void)
//{
//	//利用printf获取位数n
//	//利用n从后往前读取，循环输出
//	int n;long long num;
//	scanf_s("%lld", &num);
//	n = printf("%lld", num);
//	printf("倒过来是：");
//	while (n-- > 0)
//	{
//		printf("%lld", num % 10);
//		num = num / 10;
//	}
//
//	return 0;
//}


////2
//#include<stdio.h>
//#define KTOC 273.15
//int main(void)
//{
//	//开尔文，摄氏度，华氏度互转
//	//声明
//	float ktem, ctem, ftem;
//
//	printf("输入开氏温度：");
//	scanf_s("%f", &ktem);
//	//借用摄氏度转换
//	ctem = ktem - KTOC;
//	ftem = ctem * 1.8 + 32;
//	printf("相应的华氏度为：%f",ftem);
//}


////3
//#include<stdio.h>
//#include<math.h>
//int main(void)
//{
//	double delta, distance, mdistance;
//	int x1, x2, y1, y2;
//
//	printf("请输入第一个坐标：");
//	scanf_s("%d %d", &x1, &y1);
//	printf("请输入第二个坐标：");
//	scanf_s("%d %d", &x2, &y2);
//
//	distance = sqrt((x2 - x1)*(x2-x1) + (y2 - y1) *(y2-y1));
//	mdistance = sqrt((x2 - x1) * (x2 - x1)) + sqrt((y2 - y1) * (y2 - y1));
//	delta = sqrt((distance - mdistance) * (distance - mdistance));
//	printf("delta为%f", delta);
//
//	return 0;
//}