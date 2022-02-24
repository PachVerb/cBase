/*
*
*
*/
# include <stdio.h>
# include <stdbool.h>

// 声明bool 类型变量
// 方法一 伪造bool类型
#define TRUE 1
#define FALSE 0

int main(void)
{
    // 根据头文件stdbool.h, 直接定义bool类型变量.
    bool i = true;
    bool j = false;

    printf("i=%d, j=%d\n", i, j);   // i->1 j->0

    printf("%d", TRUE);

    return 0;
}
