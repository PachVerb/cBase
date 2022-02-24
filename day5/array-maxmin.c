/*
*
*
*/
#include <stdio.h>

int main(void)
{
    int a[5] = {1, 5, 6, 10, 100, 55};
    int i, j;
    int b = 55;
    int mid;

    i = 0;
    j = 4;

    while (i < j)
    {
        mid = (i + j) / 2;
        if (a[mid] == b){
            printf("%d", mid);
            break;
        }

        if (b > a[mid]) {
            i = mid;
        }

        if (b < a[mid])
        {
            j = mid;
        }
    }

    return 0;
}
/*
 * b = 100
 * mid = 2
 * a[mid] = 6
 *
 * b > a[mid]
 * i = mid = 2
 * j = 4
 *
 * mid = 3
 * a[mid] = 10
 * b > a[mid]
 * i = mid = 3
 * j = 4
 *
 * mid = 3
 *
 *
 *
 * */
