/*
* 二维数组
*
 *
 * 多维数组：
 * 不存在，因为内存是线性一位的。不存在行列。
 * 即使在声明时，可以写成多维的。可以理解为，n维数组每个元素是(n-1)维数组的一维数组。
*
*/
#include <stdio.h>

int main(void) {

    // 初始化
    int a[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int b[3][4] = {
            {1, 2, 4, 5},
            {5, 6, 7, 9},
            {8, 10, 23, 12},
            {1, 2, 4, 5}
    };

    return 0;
}