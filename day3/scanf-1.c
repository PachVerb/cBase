/*
 * scanf 用法二
 *  scanf(非输入控制符 输入控制符，输入参数)
 * */
#include <stdio.h>

int main(void)
{
    int i;

    scanf("m%d", &i);   // scanf中包含非输入控制符m, 因此在输入时需要原样输入m
    printf("i=%d", i);
    return 0;
}