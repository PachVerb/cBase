/*
* 递归: 斐波拉契数列
 * 1.求斐波拉契数列第n项目
 * 2. 求斐波拉契数列前n项
*
*/
#include <stdio.h>



int main(void)
{

    int n;
    int i, j;
    int val;

    printf("请输入第n项：");
    scanf("%d", &n);

    i = j = 1;

    if(1 == n || 2 ==n)
        val = i;

    printf("%d\n%d\n", i, j);

    // for 循环实现
    //    for (int z = 3; z <= n; ++z)
    //    {
    //        val = i + j;
    //        i = j;
    //        j = val;
    //
    //        printf("%d\n%", val);
    //    }

    // while 循环实现
    int a = 3;
    while (a <= n)
    {
        val = i + j;
        i = j;
        j = val;

        printf("%d\n", val);

        a++;
    }

    return 0;
}
/*
 * 思路错误：
 *   错把 斐波拉契数列 1， 2 项也作为循环开始。
 *
 *
 * */
