/*
 * 循环：
 * 求1 + 1/2 + 1/3 + ... + 1/100
 *
 *  强制类型
 *  (数据类型)(表达式)
 * */
#include <stdio.h>

int main(void)
{
    int i = 1;
    float sum = 0;  //

    for (i; i <= 100; ++i)
    {
        sum = sum + 1 / (float)(i); // （float）(i) 强制类型转换
        // 或者
        // sum = sum + 1.0 / i;
    }
    printf("sum = %f\n", sum);  // sum = 5.187378

    return 0;
}
