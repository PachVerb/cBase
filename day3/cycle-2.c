/*
 * 循环：
 * 求1-100能被3整除的数
 * */
#include <stdio.h>

int main(void)
{
    int sum = 0;
    int count = 0;

    for (int i = 3; i <= 100; ++i)
    {
        if (i % 3 == 0)
        {
            sum += i;
        }
        count++;
    }
    printf("sum = %d, count = %d\n", sum, count);

    return 0;
}
