/*
 * if用法
 *  if...esle if...else
 *
 *  模拟 求一元二次方程根的个数的逻辑
 * */

# include <stdio.h>

int main(void)
{
    double delta = 0;

    if (delta > 0)
        printf("有两个解！\n");
    else if (delta == 0)
        printf("有一个解\n");
    else
        printf("无解！\n");

    // 控制范围
    // 如下每个选择分支内均有一个语句，因此省略了{}。另外，整个if逻辑会被当作一条语句处理，
    // 此时如果在添加额外语句，就会编译出错。例如

    // 编译错误
//    if (delta > 0)
//        printf("有两个解！\n");
//        printf("方程有解\n");
//    else if (delta == 0)
//        printf("有一个解\n");
//    else
//        printf("无解！\n");

    return 0;
}