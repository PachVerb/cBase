/*
*   函数声明:
 *   1. 告知编译器即将可能出现的若干个字母代表的是一个函数。
 *   2. 告知编译器可能出现的若干个字母所代表的函数的形参和返回值的具体情况。
*    3. 函数声明是一个语句，末尾 ；结束
 *   4. 库函数声明通过# include <库函数所在的头文件名字.h> 实现
 *
 *   形参和实参
 *   个数相同
 *   位置一一对应
 *   数据类型必须兼容：能够进行转换，如 浮点型 2.2 能够转换存储为整型 2；
 *
 *   函数设计: 软件开发中如何对函数进行代码单元划分。参见 func_design
 *
*/

#include <stdio.h>
# include <stdbool.h>

// 函数声明
void f(void);
bool f2(int i, int j);
int main(void)
{
    f();

    if (f2(1, 2))
        printf("a>b\n");
    else
        printf("a<b");

    return 0;
}

void f()
{
    printf("AAAA\n");
}
bool f2(int a, int b)
{
    if(a > b)
        return true;
    else
        return false;
}



