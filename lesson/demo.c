#include <stdio.h> // �����׼�������ͷ�ļ�

void func1()
{                                             // 1.
    printf("******************************"); // ��ӡ�Ǻŷָ���
    printf("Welcome to C program");           // ��ӡ��ӭ��
    printf("******************************"); // ��ӡ�Ǻŷָ���
}

void func2()
{ // 2.
    int a, b, c, d;
    printf("分别输入四科成绩");
    scanf("%d,%d,%d,%d", &a, &b, &c, &d);
    int sum = a + b + c + d;
    printf("总成绩是:%d", sum);
    float avg = sum / 4.0;
    printf("平均分是:%a", avg);
}

void func3()
{
    // 3.
    //char ch;
    printf("请输入一个字符");
    getchar();
}

int main() // ������
{
    // func1();
    // func2();
    func3();
    getchar();
    return 0;
}