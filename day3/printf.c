/*
 * printf 用法：
 *   printf("字符串")
 *   printf(输出控制符，输出参数)
 *   printf(输出控制符1输出控制符2， 输出参数1，输出参数2)
 *   printf(输出控制符 非输控制符，输出参数)
 *
 *   输出控制符：
 *     %d
 *     %ld
 *     %f
 *     %lf
 *     %c
 *     %x(%X大写格式输出，%#X，其中#表示带十六进制起始符)
 * */
#include <stdio.h>

int main(void)
{
    int i = 10;
    int j, k;
        j = 1;
        k = 2;
    int z = 46;

    printf("print result:\n");
    printf("i=%d\n", i);  // 指定输出控制符 %，并以十进制 d 输出
    printf("j=%d k=%d\n", j, k);    // j=1, k=2
    printf("z=%x\n", z);    // z=2e
    printf("z=%X\n", z);    // z=2E
    printf("z=%#X\n", z);   // z=0X2E

    return 0;
}