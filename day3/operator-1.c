/*
 * 逻辑运算符：
 * 测试案例：
 * */

# include <stdio.h>

int main(void)
{
    int i = 10, k = 20, m;

    // 把K赋值为 真值8
    m = (3 > 2) && (k = 8);

    printf("m=%d, k=%d\n", m, k); // m->1, k->8

    // 把K 赋值为 假值 0
    m = (3 > 2) && (k = 0);

    printf("m=%d, k=%d\n", m, k); // m->0, k->0

    // 逻辑运算短路
    m = (1>2) && (k=10);
    printf("m=%d, k=%d", m, k); // m-> 0, k-> 0. K值没有被从新赋值

    return 0;
}