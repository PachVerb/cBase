/*
* 函数返回值
 * type label([parm] | void)
 * {
 *      // do something
 *      return  【表达式】
 * }
*
*/
#include <stdio.h>

int f (void)
{
    return 10;
}
void f2(void){
    return;
}

int main(void)
{
    int i = f();
//    int j = f2(); build failed


    printf("%d\n", i);
//    printf("%d\n", j);

    return 0;
}
