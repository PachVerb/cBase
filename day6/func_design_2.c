/*
*  判断1到某书之间所有素数
*
 *  函数设计总结：
*   一个函数的功能尽量独立，单一。
*/
# include <stdio.h>
# include <stdbool.h>
bool IsPrime (int val)
{
    int i;
    for (i = 2; i < val; ++i)
    {
        if (val%i == 0)
            break;
    }
    if (i == val)
        return true;
    else
        return false;
}

int TreverseVal (int n)
{
    int i;
    for (i = 2; i < n; ++i)
    {
        if(IsPrime(i))
            printf("%d\n", i);
    }
}


int main(void)
{
    int val;

    printf("输入边界：");
    scanf("%d", &val);

    TreverseVal(val);

    return 0;
}
