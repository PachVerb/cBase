/*
*
*
*/
#include <stdio.h>

int main(void)
{
    int i = 5;
    int * p;
    int * q;

    p = &i;
//    *q = p; // 错误，类型不匹配 *p int   *q int *
//    p = q;    // p, q 内部值都会成垃圾值。
    printf("%d", *q);   // 错误，*q 非法访问程序外部内存空间。

    return 0;
}
