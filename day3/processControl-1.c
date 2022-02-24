/*
 * if用法
 *  if范围说明，默认情况下，
 *    if(条件)
 *      语句
 *     的用法，只能控制单个语句
 * */

# include <stdio.h>

int main(void)
{
    // 默认if只能控制单个语句
    if (0)
        printf("此语句属于选择");
        printf("此语句属于选择");  // 此语句不属于选择

    // 花括号包含多条语句
    if(3 > 4)
    {
        // 如下两条语句都没有打印结果.
        printf("语句一");
        printf("语句二");
    }

    return 0;
}