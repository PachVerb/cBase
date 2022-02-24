/*
*
*
*/
#include <stdio.h>

int main(void)
{
    int * p;
    int i = 5;

    *p = i; // 强行改变不属于程序的内存空间。

    printf("%d\n", *p);

    return 0;
}
