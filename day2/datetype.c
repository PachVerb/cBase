/*
 * 数据类型
 *  int (memery length) 4 byte
 *  sort int 2 byte
 *  long int 8 byte
 * */

#include <stdio.h>

int main(void){
    int a = 15;
    long int b = 2;
    short int c = 1000000;
    float z = 2.333333;
    double x = 2.23808934234234;
    char i = 'A';
    printf("output int type, a=%d, b=%d, c=%d\n", a, b, c);
    printf("output float type, z=%f, x=%f\n", z, x);
    printf("output char type, i=%c\n", i);
    return 0;
}