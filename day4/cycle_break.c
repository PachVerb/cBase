/*
* break 用于多层循环
*
*/
#include <stdio.h>

int main(void)
{
    int i, j;

    for (i = 1; i < 3; ++i)
    {
        for(j = 1; j < 3; ++j)
        {
            break;
        }
        printf("AAAAA\n");  // AAAAA AAAAA 输出两次
    }
    return 0;
}

/*
 * 结果答应两次， 说明在多层嵌套的循环中，break只会终止最近的循环。
 *
 * */
