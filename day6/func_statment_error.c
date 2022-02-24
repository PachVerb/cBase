/*
* 函数声明：错误演示
 * 函数调用放置函数定义前面
*
*/
#include <stdio.h>
void f3(void);  // 加入前置声明正确

void f(void)
{
    f3();
}

void f3(void){} // 未加入f3前置声明，编译错误.

int main(void)
{
    return 0;
}
