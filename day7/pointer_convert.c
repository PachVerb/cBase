/*
 * 指针:
* 互换两个数字
*
 *   程序一旦为变量分配内存地址，程序就不能改变变量本身的内存地址。
 *
*/
#include <stdio.h>

// 函数声明
// 函数声明可以改写形参变量为 *， 并且函数定义时候，形参参数名也可以不同于
// 函数声明时的形参数变量名。
void swap(int *, int *);

int main(void)
{
    int a = 3;
    int b = 5;

    swap(&a, &b);
    printf("a = %d, b = %d", a, b);

    return 0;
}

void swap(int * a, int * b)
{
    // 变量和指针是否存在直接关系。
    // 改变指针所指向空间的值，会直接覆盖原内存空间的值，
    int t;

    t = *a;
    *a = *b;
    *b = t;

}
