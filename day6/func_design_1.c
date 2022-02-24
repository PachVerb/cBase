/*
* 函数设计：
 * 函数封装实现。
 * 求1到某个数之间所有的素数。
*
 *
 *  只用一个函数（IsPrime）实现素数判断:
 *   将原始写法中，内层循环部分逻辑进行了抽离。
 *   .....
 *    for (j = 2; j < i; ++j)
        {
            if (0 == i%j)
                break;
        }
        if (i == j)
            printf("%d\n", i);
    ......
*
 *   总结上面：如果要判断1 到1000范围内1 到该数本身所有素数，上面的逻辑就会使用1000次
 *   仍然不够简洁。
 *
 *   改进：对边界也使用函数控制。参见 func_design_2
*/
# include <stdio.h>
# include <stdbool.h>

bool IsPrime (int m);

int main(void)
{
    int val;
    int i;

    printf("输入边界：");
    scanf("%d", &val);

    for (i = 2; i <= val; ++i)
    {
        if(IsPrime(i))
            printf("%d\n", i);
    }

    return 0;
}

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
