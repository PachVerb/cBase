/*
 * 运算符
 *  算数
 *  - +
 *  - -
 *  - X
 *  - /
 *  - %
 *  关系
 *  - >
 *  - <
 *  - >=
 *  - <=
 *  - ==
 *  - !=
 *
 *  逻辑
 *  - !
 *  - ||
 *  - &&
 *  赋值
 *  - =
 *  - +=
 *  - -=
 *  - /=
 *  - *=
 *
 *  优先级
 *  算数 》关系 》逻辑 》赋值
 * */
#include <stdio.h>

int main(void)
{
    // 整数
    int i = 4, j= 3;

    printf("s=%d\n", i/j);  // 1

    // 浮点数
    float a = 2.2, b= 1.2;
    printf("s=%f\n", a/b);
    printf("s=%f\n", j/a);
    return 0;
}

/*
 * 输出结果：
 *  s=1
    s=1.833333
    s=1.363636

 *
 *
 * */