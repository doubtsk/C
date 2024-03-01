#include <stdio.h>
#include <string.h>
/*一维数组*/
// int main()
// {
//     int arr[10] = {2, 3, 1};    //不完全初始化，剩下的元素默认为零
//     char arr1[10] = {'a', 'b'}; //不完全初始化
//     char arr2[5] = "ab";        //不完全初始化，前三个位置分别存放"a","b","\0",虽然"\0"但是显示“0”，这样子写后面都会自动带一个“\0”
//     char arr3[] = "abcdef";
//     printf("%d\n", sizeof(arr3)); // sizeof是计算字符所占空间大小，上面会输出7，因为会把“\0”算进去
//     printf("%d\n", strlen(arr3)); // strlen是只针对计算字符串的长度，这边会输出6，并不会把“\0”算进去，单位是字节。

//     system("pause");
//     return 0;
// }

// int main()
// {
//     char arr[] = "abc";
//     char arr1[] = {'a', 'b', 'c'};
//     printf("%d\n", sizeof(arr));  // 4
//     printf("%d\n", sizeof(arr1)); // 3
//     printf("%d\n", strlen(arr));  // 3
//     printf("%d\n", strlen(arr1)); // 6，有警告，因为strlen只能去计算字符串长度
//     system("pause");
//     return 0;
// }

// int main()
// {
//     char arr[] = "abcdef";
//     // printf("%c\n", arr[3]);
//     for (int i = 0; i < (int)strlen(arr); i++)
//     {
//         printf("%c ", arr[i]);
//     }
//     printf("\n");
//     int ret = sizeof(arr) / sizeof(arr[0]);
//     for (int j = 0; j < ret; j++)
//     {
//         printf("%c ", arr[j]);
//     }
//     printf("\n");
//     system("pause");
//     return 0;
// }

//打印一维数组地址
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int temp = sizeof(arr) / sizeof(arr[0]);
//     for (int i = 0; i < temp; i++)
//     {
//         printf("arr[%d]=%p\n", i, &arr[i]);
//     }
//     system("pause");
//     return 0;
// }

//二维数组
// int main()
// {
//     int arr[3][5] = {
//         1,
//         2,
//         3,
//         4,
//         5,
//         6,
//         7,
//         8,
//         9,
//         10,
//         11,
//         12,
//         13,
//         15,
//         16,
//     };
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//         printf("\n");
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             printf("%p\n", &arr[i][j]);
//         }
//         printf("\n");
//     }
//     system("pause");
//     return 0;
// }