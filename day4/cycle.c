/*
* 求斐波拉契数列指定某项值
*
*/
#include <stdio.h>

int main(void)
{
    int f1, f2, f3;
    int n;  // 指定某项
    int i;

    f1 = 1;
    f2 = 2;

    printf("请输入需要获取的某一项: ");
    scanf("%d", &n);

    if (n == 1)
    {
        f3 = 1;
    } else if (n == 2)
    {
        f3 = 2;
    } else
    {
        for (i = 3; i <= n; ++i)
        {
            f3 = f2 + f1;
            f1 = f2;
            f2 = f3;
        }
    }
    printf("f3 = %d", f3);

    return 0;
}
