/*
 * 求一元二次方程的根:
 * 思路:
 *  根据一元二次方程是否存在根的判定公式，判断。
 *
 * */
// 头文件
# include <stdio.h>
# include <math.h>

// 开方根函数: sqrt()

int main(void)
{
    // 定义方程3个系数
    int a = 1;
    int b = 4;
    int c = 4;
    float x1, x2; // 定义方程根
    float delta;  // 定义判断值

    delta = b*b - 4*a*c;

    if (delta > 0){
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        printf("TWO RESULT, x1 = %f, x2 = %f\n", x1, x2);
    } else if (delta == 0){
        x1 = (-b) / (2*a);
        x2 = x1;
        printf('one Result, x1 = x2 = %f\n', x1);
    } else{
        printf("no Result\n");
    }
}


