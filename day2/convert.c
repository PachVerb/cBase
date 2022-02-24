/*
 * 不同数据类型相互赋值
 *
 * PRINTF()
 *  %d 输出整型
 *  %ld 输出长整型
 *  %f 输出单精度浮点型
 *  %lf 输出双精度浮点型
 * */
#include <stdio.h>

// 补码： 溢出原因

int main()
{
    int i = 21474836478;
    printf("output i=%d", i); // -2, 数值过大，导致溢出
    return 0;
}