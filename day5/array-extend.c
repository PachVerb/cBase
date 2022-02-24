/*
* 数组操作
* 插入
 * 赋值
 * 求最大\最小
 * 倒置
 * 查找
 * 排序
 * 删除
*/
#include <stdio.h>

int main(void)
{
    // 数组倒序
    int a[5] = {1, 2, 3, 4, 5};
    int i, j;
    int t;

    i = 0;
    j = 4;

    // 数组倒序
    while (i < j)
    {
        t = a[i];
        a[i] = a[j];
        a[j] = t;

        i++;
        --j;
    }


    return 0;
}
