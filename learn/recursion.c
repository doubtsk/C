//递归 先调用函数，再进行结算
#include <stdio.h>
#include <string.h>

// void print(int n)
// {
//     if (n > 9)
//     {
//         print(n / 10);//此时“n/10”就相当于n，所以能再次调用print函数.
//     }
//     printf("%d ", n % 10);
// }
// int main()
// {
//     unsigned int num = 0;
//     scanf("%d", &num);
//     print(num);
//     system("pause");
//     return 0;
// }

//这是函数的方法
// int my_strlen(char *str)
// {
//     int count = 0;
//     while (*str != '\0')
//     {
//         count++;
//         str++;
//     }
//     return count;
// }

//递归的方法

// int my_strlen(char *str)
// {
//     if (*str != '\0') //如果*str的地址并不等于"\0"
//     {
//         return 1 + my_strlen(str + 1); //就认为至少有1长度，再进行下一次递归
//     }
//     else
//     {
//         return 0; //否则就是0
//     }
// }

// int main()
// {
//     char arr[] = "bit"; //首先要明白的事是：数组储存的是第一个字符的地址
//     // int len = strlen(arr);
//     // printf("%d\n", len);
//     int len = my_strlen(arr);
//     printf("%d\n", len);
//     system("pause");
//     return 0;
// }

//练习1
//阶乘（使用递归)

// int factorial(int n)
// {
//     if (n <= 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return n * factorial(n - 1);
//     }
// }

// int main()
// {
//     int num = 0;
//     long long n = 0;
//     scanf("%d", &num);
//     n = factorial(num);
//     printf("%ld", n);
//     system("pause");
//     return 0;
// }

//练习2 斐波那契数列(递归+函数)
// int count = 0;
// int Fib(int n)
// {
//     if (n == 3)
//     {
//         count++;
//     }
//     if (n <= 2)
//     {
//         return 1;
//     }
//     if (n > 2)
//     {
//         return Fib(n - 2) + Fib(n - 1);
//     }
// }

// int main()
// {
//     int n = 0;
//     int ret = 0;
//     scanf("%d", &n);
//     ret = Fib(n);
//     printf("第%d个斐波那契数是%d\n", n, ret);
//     printf("count = %d\n", count);
//     system("pause");
//     return 0;
// }

// int Fib(int n)
// {
//     int a = 1;
//     int b = 1;
//     int c = 1;
//     while (n > 2)
//     {
//         c = a + b;
//         a = b;
//         b = c;
//         n--;
//     }
//     return c;
// }

// int main()
// {
//     int num = 0;
//     scanf("%d", &num);
//     int num_1 = 0;
//     num_1 = Fib(num);
//     printf("%d", num_1);
//     system("pause");
//     return 0;
// }

//如果说递归的限制条件过大，那么也会栈溢出
void test(int n)
{
    if (n < 100000)
    {
        test(n + 1);
    }
}
int main()
{
    test(1);
    system("pause");
    return 0;
}