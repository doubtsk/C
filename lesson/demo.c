#include <stdio.h>
#include <stdlib.h>

void func1()
{
    printf("******************************");
    printf("Welcome to C program");
    printf("******************************");
}

void func2()
{ // 2.
    int a, b, c, d;
    printf("输入四科成绩:");
    scanf("%d,%d,%d,%d", &a, &b, &c, &d);
    int sum = a + b + c + d;
    printf("总分是:%d", sum);
    float avg = sum / 4.0;
    printf("平均分是:%a", avg);
}

void func3()
{
    // 3.
    char ch;
    printf("请输入一个字符");
    scanf("%c", &ch);
    getchar();
    printf("你输入的字符是%c\n", ch);
    int ch1 = ch - 1;
    printf("上一个字符是:%c\n", ch1);
    int ch2 = ch + 1;
    printf("下一个字符是:%c\n", ch2);
}

void func4()
{
    int a = 0;
    printf("请输入整数");
    scanf("%d", &a);
    int b = a / 10;
    printf("整数的十位数是:%d", b);
    int c = a % 10;
    printf("整数的个位数是:%d", c);
}
void func5()
{
    int a = 0;
    int b = 0;
    int sum = 0;
    scanf("%d,%d", &a, &b);
    sum = b < 0 ? (a - b) : (a + b);
    printf("合:%d", sum);
}

void func6()
{
    int a, b, c;
    scanf("%d,%d,%d", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a)
    {
        printf("三角形存在");
    }
    else
    {
        printf("三角形不存在");
    }
}

void func7()
{
    int x = 0;
    while (1)
    {
        printf("输入1结束循环");
        scanf("%d", &x);
        if (x != 1)
        {
            int BJH = 0;
            int BJ = 0;
            printf("你的本金多少？");
            scanf("%d", &BJ);
            system("cls");
            int LX = 0;
            printf("你的月利息多少？");
            scanf("%d", &LX);
            system("cls");
            printf("0.315%% 第一年\n 0.330%% 第二年\n 0.345%% 第三年\n 0.375%% 第五年\n and 0.420%% 第八年");
            printf("选择对应的数字");
            int choose = 0;
            scanf("%d", &choose);
            system("cls");
            switch (choose)
            {
            case 1:
                LX = BJ * 0.00315;
                BJH = LX + BJ;
                printf("利息是:%d,本金是:%d", LX, BJH);
                break;
            case 2:
                LX = BJ * 0.00330;
                BJH = LX + BJ;
                printf("利息是:%d,本金是:%d", LX, BJH);
                break;
            case 3:
                LX = BJ * 0.00345;
                BJH = LX + BJ;
                printf("利息是:%d,本金是:%d", LX, BJH);
                break;
            case 5:
                LX = BJ * 0.00375;
                BJH = LX + BJ;
                printf("利息是:%d,本金是:%d", LX, BJH);
                break;
            case 8:
                LX = BJ * 0.00420;
                BJH = LX + BJ;
                printf("利息是:%d,本金是:%d", LX, BJH);
                break;
            }
        }
        else
        {
            break;
        }
    }
}

void func8()
{
    int sum = 0;
    for (int i = 0; i < 100; i++)
    {
        sum += i;
    }
    printf("%d\n", sum);
}

void func9()
{
    int i = 7;
    while (i)
    {
        if (1 % 2 == 1 && i % 3 == 2 && i % 5 == 4 && i % 6 == 5)
        {
            printf("这总共有%d阶梯\n", i);
            break;
        }
        i += 7;
    }
}

void func10()
{
    int x, y, z;
    for (x = 0; x < 100; x++)
    {
        for (y = 0; y < 100; y++)
        {
            for (z = 0; z < 100; z++)
            {
                if (x + y + z == 100 && 15 * x + 9 * y + z == 100)
                {
                    printf("%d,%d,%d", x, y, z);
                }
            }
        }
    }
}

void func11()
{
    int i, n;
    double sum = 1, t = 1;
    printf("输入n:\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        t = t * i;
        sum = sum + 1 / t;
    }
    printf("e=%lf", sum);
}

void func12()
{

    float a = 0, b = 0, c = 0;
    char d;
    printf("输入两个数:\n");
    scanf("%f%f", &a, &b);
    getchar();
    printf("选择算法:+,-,*,/\n");
    scanf("%c", &d);
    switch (d)
    {
    case '+':
        c = a + b;
        break;
    case '-':
        c = a - b;
        break;
    case '*':
        c = a * b;
        break;
    case '/':
        if (b > 0)
            c = a / b;
        break;
    }
    printf("%g%c%g=%g\n", a, d, b, c);
}

int main()
{
    // func1();
    // func2();
    // func3();
    // func4();
    // func5();
    // func6();
    // func7();
    // func8();
    // func9();
    // func10();
    // func11();
    // func12();
    system("pause");
    return 0;
}