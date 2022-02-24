/*
 * 循环：
 * 求1-100之间
 * 奇数和
 * 奇数个数
 * 平均值
 * */
#include <stdio.h>

int main(void)
{
    int i = 1;
    int count = 0;
    float average;
    int evenSum, oddSum;

    // 求和
    for (i; i <= 100; ++i)
    {
        if (i % 2 != 0){
           oddSum += i;
           count++; // 统计奇数个数
        }
        else    // 偶数和
        {
            evenSum += i;
        }

    }

    // 求平均值
    average = 1.0*oddSum / count;

    printf("奇数之和-oddsum = %d, 偶数之和-evensum = %d, 奇数平均值-average = %f, 奇数个数-count = %d", oddSum, evenSum, average, count);

    return 0;
}
