/*
* 判断1到某个数之间所有素数（包括该数字），并将其输出。
* 函数设计：
 * 下面是最初始写法，不实用函数封装设计。
 * 1. 只用MAIN函数实现, 不容易理解。代码重用性不高。
 *
*
*/
#include <stdio.h>

// 原始写法
int main(void)
{
    int val;
    int i, j;

    printf("输入界限：");
    scanf("%d", &val);

    for (i = 2; i <= val; ++i)
    {
        for (j = 2; j < i; ++j)
        {
            if (0 == i%j)
                break;
        }
        if (i == j)
            printf("%d\n", i);
    }

    return 0;
}
