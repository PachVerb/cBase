/*
 *  变量初始化，未被初始化的变量，在调用期间会被内存分配指定的垃圾数据
 *
 * */

#include <stdio.h>

int main(void){
    int i;  //i=339914789
    printf("output i variable, i=%d\n", i);
    return i;
}