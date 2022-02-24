/*
 * 浮点数存储
 *  例子：这里仍然用 1 + 1/2+ 1/3+ .... + 1/100 举例
 *  程序一使用正确类型求值
 *  程序二使用强制类型转换
 *
 *  C语言中实数是按照IEEE754标准，进行转换为二进制代码存储在计算机
 *
 *  float and double都不能精确存储一个实数
 * */
#include <stdio.h>

int main(void)
{
    float i = 1;
    float sum = 0;

    // 1
    for (i; i<=100; ++i)
    {
        sum = sum + 1/i;    // float of i, float of sum
    }
    printf("sum=%f\n", sum);

    // 2
    /*
     * 程序二输出结果仍然是正确的，我想仅仅是结果被正确输出了，
     * 但是SUMO在内存中的数值仍然是整型1。
     * */
     int j = 1;
//    float j; previous
    // int  sumo = 0; PREVIOUS
    float sumo = 0;

    for (j = 1.0; j<=100; ++j)
    {
        sumo = sumo + 1/j;  //
    }
    printf("sumo=%f\n", sumo);  // sumo=5.187378

    return 0;
}
