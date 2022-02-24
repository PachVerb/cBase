/*
* 逗号运算符
*
*/
#include <stdio.h>

int main(void) {
    int i ;
    int j = 2;

    i = (2, 3, 4, 5);
    i = (j++, ++j, j+2, j-3);   // (3, 4, j=4[6], 1)  1

    printf("i = %d", i);    // i = 5

    return 0;
}
