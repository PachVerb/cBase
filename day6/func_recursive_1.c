/*
* 递归实现：
 * 求斐波拉契数列第n项
*
*/
# include <stdio.h>

int RecursiveVal(int n)
{
    if (n <= 2)
    {
        return 1;
    } else {
        return RecursiveVal(n - 1) + RecursiveVal(n - 2);
    }

}

int main(void)
{
    int n;

    printf("请输入n：");
    scanf("%d", &n);

    printf("%d", RecursiveVal(n));

    return 0;
}
