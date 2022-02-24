/*
* 判断是否是素数
*
*/
# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h> // stdbool 提供对bool类型支持

bool IsPrime(int val)
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

int main(void)
{

    int m;

    printf("输入一个数字：");
    scanf("%d", &m);

    if ( IsPrime(m) )
        printf("Yes!\n");
    else
        printf("No!\n");

    system("exit");

    return 0;
}
