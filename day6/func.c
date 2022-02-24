/*
* 函数：
 * 能够完成特定功能的独立的代码单元（逻辑上）
 * 能够接受数据，对接收的数据进行处理，返回处理结果（物理上）
 *
 * 总结： 函数是一个工具， 它是为了解决大量类似问题而设计的
 *       函数可以当作一个黑匣子(提供功能，无需展现逻辑
 *
 * 例子：
*   求两个数字，最大数
 *
 *  函数功能：
 *      逻辑复用
 *      程序模块化
 *
 *  c语言基本单位： 函数
 *
 *
 *  函数分类：
 *  1. 有参/无参函数
 *  2. 有返回值/无返回值函数
 *  3. 库函数 和用户自定义函数
 *  4. 普通函数 和主函数
 *  5. 值传递函数 和 地址传递函数(严格来说不存在）
 *
 * 一个程序必须有且仅有一个主函数
 * 普通函数不可以调用主函数 主函数可以调用普通函数
 * 普通函数可以相互调用
 * 主函数是程序的入口，也是程序的出口。
 *
 *
*/
#include <stdio.h>

// 声明函数max, void 表示函数无返回值。 i， j 函数形式参数
// 实现比较
void max(int i , int j)
{
    if (i > j)
        printf("%d\n", i);
    else
        printf("%d\n", j);
}

int main(void)  // 括号中的void表示函数不接收参数, int 表示函数返回数据类型。
{
    int a, b, c, d, e, f;

    a = 1, b = 2, c = 3, d = 9, e = -5, f = 100;

    max(a, b);
    max(c, d);
    max(e, f);

    return 0;
}