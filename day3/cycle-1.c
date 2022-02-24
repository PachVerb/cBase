/*
 * 循环
 * 求1-10所有奇数的和
 * */
#include <stdio.h>

int main(void)
{
    int sum = 0;
    // 1
//    for (int i = 1; i < 10; ++i){
//        if (i % 2 != 0)
//        {
//            sum += i; // 25
//        }
//    }

    // 2
    for (int i = 1; i < 10; i+=2)
    {
        sum += i;
    }

    printf("sum = %d\n", sum);

    return 0;
}
