/*
 * if 用法：
 *  对任意三个数字排序
 * */
#include <stdio.h>

int main(void) {

    int a, b, c, t;

    printf("请输入三个数，中间以空格分开：");
    scanf("%d%d%d", &a, &b, &c);

    // 降序
//    if (a > b && a > c)
//    {
//        if(!(b > c))
//        {
//            t = c;
//            b = c;
//            c = t;
//        }
//    }
//    else if (b > a && b > c)
//    {
//        t = a;
//        a = b;
//        b = t;
//        if (!(b > c))
//        {
//            t = b;
//            b = c;
//            c = t;
//        }
//    }
//    else if (c > b && c > a)
//    {
//        t = a;
//        a = c;
//        c = t;
//        if (!(b > c))
//        {
//            t = b;
//            b = c;
//            c = t;
//        }
//    }

    // 方法二，冒泡排序
    if (a < b)
    {
        t = a;
        a = b;
        b = t;
    }
    if(a < c)
    {
        t = a;
        a = c;
        c = t;
    }
    if (b < c)
    {
        t = b;
        b = c;
        c = t;
    }

    printf("%d %d %d\n", a, b, c);

    return 0;
}
