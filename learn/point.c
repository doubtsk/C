#include <stdio.h>
int main()
{
    // const char arr1[] = "abcdef";
    // const char arr2[] = "abcdef";
    // const char *p1 = "abcdef";
    // const char *p2 = "abcdef";

    // if (p1 == p2)
    // {
    //     printf("hehe\n");
    // }
    // else
    // {
    //     printf("haha\n");
    // }
    // if (arr1 == arr2)
    // {
    //     printf("hehe\n");
    // }
    // else
    // {
    //     printf("haha\n");
    // }
    // // 最后输出的是haha
    // // arr1和arr2的起始首地址不一样导致的
    // int *ptr[4]; // 整形指针数组

    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {2, 3, 4, 5, 6};
    int arr3[] = {3, 4, 5, 6, 7};
    int *parr[] = {arr1, arr2, arr3};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d", *(parr[i] + j));
        }
        printf("\n");
    }
    getchar();
    return 0;
}