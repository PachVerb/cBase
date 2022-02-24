/*
* 数组排序
*
*/
#include <stdio.h>

int main(void)
{
    int a[8] = {5, 2, 4, 12, 100, 45, 30, 76};
    int i, j;
    int t;

    for (i = 0; i < 8; ++i)
    {
        for (j = (i + 1); j < 8; ++j)
            if (a[i] < a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
    }

    printf("a[0]=%d\na[1]=%d\na[2]=%d\na[3]=%d\na[4]=%d\na[5]=%d\na[6]=%d\na[7]=%d\n", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7]);

    return 0;
}

/*
 * i 0  j 1
 * i 1 j 2
 *
 * */

