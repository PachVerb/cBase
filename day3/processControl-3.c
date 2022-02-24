/*
 *  从键盘获取连个数比较大小，并输出结果
 *
 *  if用法
 *  if else
 * */

# include <stdio.h>

int main(void)
{
    int i, j;

    printf("输入两个数，并以空格分开:");
    scanf("%d %d", &i, &j);

//    if(i > j)
//    {
//        printf("i 大于 j");
//    } else
//    {
//        printf("i 小于 j");
//    }

    // 等价
    // 单个语句省略括号
    if(i > j)
        printf("i 大于 j");
    else
        printf("i 小于 j\n");

    // 控制范围
    if(i > j)
        printf("i 大于 j");
    else
        printf("i 小于 j\n");
        printf("j 大于 i");   // 输出

    return 0;
}