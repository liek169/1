#define  _CRT_SECURE_NO_WARNINGS


#include<stdio.h>

#include<string.h>
#include<windows.h>
#include<iostream>
int main() {
	long start = gettickcount();
	{
		 int a = 88;
		int i = 1;
		while (i <= 50000) {
			printf("%d 第%d次\n", a,i);

			i++;

		}





	}
	long finish = gettickcount();
	long time = finish - start;
	printf("程序运行时间为%d\n", time);


	return 0;

}
int main() {
	extern float multipy(float a, float b);
	float a, b;
	char i='y',s='c';
	
	while (i == 'y') {
		printf("计算两数乘积\n");
		scanf("%f%f", &a, &b);
		printf("%f*%f=%f\n", a, b, multipy(a, b));//未声明函数
		printf("键入y以继续，否则退出\n");
		scanf("%c", &s);
		scanf("%c", &i);
		

		if (i != 'y') {
			printf("谢谢使用");
		}
		else
			printf("输入两个数据");
		

		

	}
	return 0;

}
#define max(a,b) (a>b?a:b)
int main() {
	int a = 10, b = 20;
	printf("%d", max(b, a));
	return 0;

}
int main() {
	float a = 5;
	float* p = &a;
	printf("%d", sizeof(p));
	return 0;


}
struct member {
	int numb;
	char name[];
	int age;
	float weight;
};
struct member a = { 1,"付赐尚",19,56.5 };
struct member b = { 2,"马一狄",20,60.7 };
char v[];
printf("你想要查找谁的信息\n");
scanf("%s\n", &v);
if (v == "jack")
printf("名字:%s/n年龄:%d", a.name, a.age);
return 0;