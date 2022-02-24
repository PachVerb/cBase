/*
 * 选择--空语句
 * */
#include <stdio.h>

int main(void) {

    if (1 > 2); // ；表空语句
    printf("语句一\n");
    printf("语句二\n");

    // IF-ELSE
    // 编译错误
    //    if(1 > 2);
    //        printf("语句一\n");
    //        printf("语句二");
    //    else
    //        printf("语句一\n");
    //        printf("语句二");

    // if-else if -else
    // 多个分支条件有相同时，获取分支走向
    if (3 > 1)
        printf("AAA\n");    // 输出
    else if(3 > 2)
        printf("BBB");  // 不输出

    // 无意义语句
    if (3 > 1)
        printf("aaaa");
    else (1 > 2);   // 无意义语句
    printf("bbbb");

    return 0;
}

/*
 * 输出结果：
 *  语句一
    语句二
 *
 * */