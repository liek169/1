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
			printf("%d ��%d��\n", a,i);

			i++;

		}





	}
	long finish = gettickcount();
	long time = finish - start;
	printf("��������ʱ��Ϊ%d\n", time);


	return 0;

}
int main() {
	extern float multipy(float a, float b);
	float a, b;
	char i='y',s='c';
	
	while (i == 'y') {
		printf("���������˻�\n");
		scanf("%f%f", &a, &b);
		printf("%f*%f=%f\n", a, b, multipy(a, b));//δ��������
		printf("����y�Լ����������˳�\n");
		scanf("%c", &s);
		scanf("%c", &i);
		

		if (i != 'y') {
			printf("ллʹ��");
		}
		else
			printf("������������");
		

		

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
struct member a = { 1,"������",19,56.5 };
struct member b = { 2,"��һ��",20,60.7 };
char v[];
printf("����Ҫ����˭����Ϣ\n");
scanf("%s\n", &v);
if (v == "jack")
printf("����:%s/n����:%d", a.name, a.age);
return 0;