/*
* while :
 * 从键盘获取一个数字，判断是否是回文数
*
*/

# include <stdio.h>

int main(void)
{
    int val;
    int m;
    int sum = 0;

    printf("请输入需要判断的数字：");
    scanf("%d", &val);

    m = val;
    while (m)
    {
        sum = sum * 10 + m%10;
        m /= 10;
    }

    if (sum == val)
        printf(("Yes!\n"));
    else
        printf("No!\n");

    return 0;
}
/*
 * 试数
 * M = 1234 成立
 * SUM = 0*10 + 1234%10 = 4
 * M = 123 成立
 * SUM = 4*10 + 123%10 = 43
 * M = 12 成立
 * SUM = 43*10 + 12%10 = 432
 * M = 1 成立
 * SUM = 432*10 + 1%10 = 4321
 * M = 0 不成立
 *
 * */
