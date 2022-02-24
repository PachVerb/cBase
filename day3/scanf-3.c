/*
 * scanf 用法三
 *  scanf(输入控制符 输入控制符，输入参数，输入参数)
 *
 * */

#include <stdio.h>

int main(void)
{
    int i, j;

    scanf("%d%d", &i, &j);
    printf("i=%d, j=%d", i, j);

    return 0;
}