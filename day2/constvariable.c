/*
 * 　　常量表示
 *    整数进制表示
 *    浮点数
 *    字符
 * */
#include <stdio.h>

int main(void)
{
    int a = 015;
    printf("%d\n", a); // 十进制 13

    // float

    float b = 3.2222,  c = 3235.2e-3F;  // 常量C被当作单精度处理，末尾加F
    printf("b=%f\n", b);
    printf("c=%f\n", c);

    // char
    char i = 'h';
    // C语言中无专门的字符串声明方式
    printf("%c\n", i);
    return 0;
}