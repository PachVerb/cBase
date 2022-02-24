/*
* 函数返回值，以返回类型为准
*
*/
#include <stdio.h>

int f (void)
{
    return 10.5;
}

int main(void)
{
    double x = 6.6;

    x = f();

    printf("%lf", x);   // 10.000 说明函数返回值是10， 而不是10.5

    return 0;
}
