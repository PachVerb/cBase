/*
*   自增
 *    前自增 -  ++i
 *    后自增 -  i++
 *
 *   区别：
 *   前自增整体表达式的值是i 加一后的值
 *   后自增整体表达式的值是i 加一前的值
 *   规范：
 *   程序中，尽量不要体现出自增的差别
 *   自增不要嵌合到复合语句中使用，应该单独体现。
 *   比如 int i = i++ + ++i + i++ ,不要这样来使用自增。
 *  自减
 *    同自增相同
 *  三目运算符
 *  A ? B : C
 *  逗号表达式
 *  A, B, C, D
 *   功能
 *
 *
*
*/
#include <stdio.h>

int main(void)
{
    int i, j;
    int k, m;

    i = j = 3;
    k = ++i;
    m = j++;
    printf("i=%d\nj=%d\nk=%d\nj=%d\n", i, j, k, m);

    return 0;
}