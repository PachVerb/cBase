/*
* while 循环
* while 于 for 比较：
 * 求 1+ 到100和
*/
#include <stdio.h>

int main(void)
{
    int i = 1;
    int sum = 0;  //
//
//    for (i; i <= 100; ++i)
//    {
//        sum = sum + i;
//    }
//    printf("sum = %d\n", sum);  // sum = 5150

    while (i <= 100)
    {
        sum = sum + i;
        i++;

    }
    printf("sum = %d\n", sum);

    return 0;
}
