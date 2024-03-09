#include <stdio.h>
#include <stdlib.h>
#include <cstring>
void func1()
{
	int a[10];
	for (int i = 0; i < 10; i++)
	{
		printf("输入十个数字%d:", i);
		scanf("%d", &a[i]);
	}
	int max = 0;
	int min = 0;
	max = min = a[0];
	for (int i = 0; i < 10; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
		if (a[i] < min)
		{
			min = a[i];
		}
	}
	printf("最大值%d", max);
	printf("最小值%d", min);
}

void func2()
{
	int temp = 0;
	int c[10] = {1, 3, 5, 4, 8, 6, 9, 7, 2, 10};
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10 - i; j++)
		{
			if (c[j - 1] > c[j])
			{
				temp = c[j - 1];
				c[j - 1] = c[j];
				c[j] = temp;
			}
		}
		printf("%d\n", c[i]);
	}
}

void func3()
{
	int a[2][3] = {{1, 2, 3},
				   {4, 5, 6}};
	int b[3][2] = {};
	// int len =sizeof(a)/sizeof(a[0][0]);
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			b[j][i] = a[i][j];
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%d", b[i][j]);
		}
		printf("\n");
	}
}

void func4()
{
	char a[] = "i love china";
	char *len = a;
	int num = 0;
	while (*len != '\0')
	{
		len++;
	}
	printf("%d", len - a);
}

void func5()
{
	printf("输入两个数");
	int min = 0;
	int max = 0;
	scanf("%d,%d", &min, &max);
	if (max > min)
	{
		printf("最大值是:%d", max);
	}
	else
	{
		printf("最小值:%d", min);
	}
}

void func6()
{
	int num = 0;
	printf("输入数字");
	scanf("%d", &num);
	int squa = num * num;
	printf("这个数字的平方是:%d", squa);
}

void func7()
{
	int a = 0;
	int b = 0;
	int temp = 0;
	printf("请依次输入a,b的值");
	scanf("%d,%d", &a, &b);
	temp = a;
	a = b;
	b = temp;
	printf("交换后的a:%d,交换后的b:%d", a, b);
}

void func8()
{
	int a = 1, b = 2, c = 3;
	int d = 4, e = 5, f = 6;
	int x = 7, y = 8, z = 9;

	int *p, *q, *r;

	p = &a;
	q = &b;
	r = &c;

	printf("一开始:\n");
	printf("p = %p, *p = %d\n", (void *)p, *p);
	printf("q = %p, *q = %d\n", (void *)q, *q);
	printf("r = %p, *r = %d\n", (void *)r, *r);

	p = &d;
	q = &e;
	r = &f;

	// 输出p、q、r与*p、*q、*r
	printf("\n第二次:\n");
	printf("p = %p, *p = %d\n", (void *)p, *p);
	printf("q = %p, *q = %d\n", (void *)q, *q);
	printf("r = %p, *r = %d\n", (void *)r, *r);

	// 让指针指向变量x、y、z
	p = &x;
	q = &y;
	r = &z;

	// 输出p、q、r与*p、*q、*r
	printf("\n第三次:\n");
	printf("p = %p, *p = %d\n", (void *)p, *p);
	printf("q = %p, *q = %d\n", (void *)q, *q);
	printf("r = %p, *r = %d\n", (void *)r, *r);
}

void func9(char str1[], char str2[])
{
	int i = 0;
	while (str1[i] != '\0')
	{
		str2[i] = str1[i];
		i++;
	}
	// str1[i] = '\0';
	printf("str2的复制结果是:%s", str2);
}
char str1[] = "yangxiao";
char str2[] = "";
void func10()
{
	struct student
	{
		int num = 1001;
		char sex[5];
		char name[50];
		int age = 21;
		char addr[100];
	};
	student sushan;
	strcpy(sushan.name, "Sushan");
	strcpy(sushan.sex, "M");
	strcpy(sushan.addr, "326 Shanxi Road");
	if (sushan.name != nullptr && sushan.sex != nullptr && sushan.addr != nullptr)
	{
		printf("名字:%s,\n年龄:%d,\n性别:%s,\n地址:%s,\n学号:%d\n", sushan.name, sushan.age, sushan.sex, sushan.addr, sushan.num);
	}
	else
	{
		printf("Error: Null pointer detected.\n");
	}
}

int main()
{
	func10();
	//func9(str1, str2);
	// func8();
	// func7();
	// func6();
	// func5();
	// func4();
	// func3();
	// func2();
	// func1();
	system("pause");
	return 0;
}