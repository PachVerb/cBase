/*
 * scanf 用法
 *   scanf(输入控制符， 输入参数)
 *
 *  1. 使用scanf输入时，在前面printf 输入提示
 *  2. scanf中不使用非输入控制符，尤其是\n
 * */

#include <stdio.h>

int main(void)
{
    int i;

    scanf("%d", &i);
    printf("i=%d", i);
    return 0;
}