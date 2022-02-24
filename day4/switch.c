/*
* switch用法：switch 在流程控制分类中，作为选择存在
*  模拟电梯效果
*
*  流程分析：
 *  switch 程序开始，使用switch后表达式的值，并于case 标签对比。以此来查找程序入口。
 *  当程序进入的 case 1，执行case 1下面的语句。同时，执行 case 2 ，case 3, default.
 *  类推。
 * 一旦找到程序入口，紧接者 该入口下的所有语句都会执行。
 *
 * 多层嵌套的switch中，break，只会终止最近的switch。
*/
#include <stdio.h>

int main(void)
{
    int val;

    printf("请输入您要进入的楼层：");
    scanf("%d", &val);

    switch (val)
    {
        case 1:
            printf("1层开！\n");
            break;
        case 2:
            printf("2层开！\n");
            break;
        case 3:
            printf("1层开！\n");
            break;
        default:
            printf("还没这一层！\n");
            break;
    }

    return 0;
}
