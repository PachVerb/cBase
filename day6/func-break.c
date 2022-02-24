/*
*  函数内
 *  return: 终止整个函数, 且可以向主调函数传递值。
*   break 不用于函数
*/

#include <stdio.h>
void f(void)
{
    printf("AAAA");
    return;
    printf("BBBB");
}

int main(void) {
    f();    // AAAA

    return 0;
}
