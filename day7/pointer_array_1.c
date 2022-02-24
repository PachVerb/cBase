/*
* 探究：数组下标和指针关系
*   一个数组date[5]：
 *   其下标和指针存在如下关系：
 *   date + 2 = &date[2]
 *   *(date + 2) = date[2]
 *
 *  为什么在声明指针时，需要指定类型？
 *  这是因为，一个内存地址代表一个内存单元，占一个字节大小。指针所指向的对象类型，其数据类型大小不同。
 *  为了告知计算机需要为对象分配多大内存空间，所以在声明指针变量时需要分配类型。
 *
 *
*/
# include <stdio.h>

// 定义宏 宏定义结束不需要加分号
# define SIZE 4 // error ;

int main(void)
{
   short dates[SIZE] = {1, 2, 3, 4};
   short * pti;
   short index; // size 2
   double bills[SIZE]; // size 8
   double * ptf;

   pti = dates; // &date[0]
   ptf = bills; // &bill[0]

   printf("*(dates+2) = %d dates[2] = %d\n", *(dates + 2), dates[2]);   // 3 3

   // 打印字符串 %s
   // 指针输出 %p
   printf("%23s  %15s\n", "short", "double");
   for (index = 0; index < SIZE; ++index)
   {
       printf("pointer + %d: %10p %p\n", index, pti + index, ptf + index);
   }

    return 0;
}
