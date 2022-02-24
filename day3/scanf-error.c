/*
 * scanf 用法:
 *   非输入控制符的处理
 *
 *  对于读取多个用户输入时，处理用户的非法数据
 * */

# include <stdio.h>

int main(void)
{
    int i;
    char ch;


    //单个输入，遗留垃圾输入,此时默认会读取初始输入的合法数据. 如果输入不合法，直接赋值错误
    /*
     * 输出结果： 1
     * 请输入一个数字:
        1m
        i=1
       输入结果二

       请输入一个数字:
        m1
        i=398762021

     * */
    printf("请输入一个数字:\n");
    scanf("%d", &i);
    printf("i=%d\n", i);  //

    // 多个输入，垃圾数据清理
    while ( (ch = getchar()) !='\n')    // 清空之前输入
        continue;
    int j;

    scanf("%d", &j);
    printf("j=%d\n", j);

    return 0;
}