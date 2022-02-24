/*
 * if 用法举例
 *  互换两个数字
 * */
# include <stdio.h>

int main(void)
{

    int i = 3, j = 5, a;

    a = i;
    i = j;
    j = a;

    printf("i=%d, j=%d", i, j);

    return 0;
}