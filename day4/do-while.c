/*
* do-while用法：
*  do-while至少执行一次，因此不能和while， for 互换
*
 *   do-while 求一元二次方程
*/

# include <stdio.h>
# include <math.h>

int main(void)
{
    double a, b, c;
    double x1, x2;
    double delta;
    char ch;

    do{
        printf("a= ");
        scanf("%lf", &a);

        printf("b= ");
        scanf("%lf", &b);

        printf("c= ");
        scanf("%lf", &c);

        delta = b*b - 4*a*c;

        if (delta > 0)
        {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b + sqrt(delta)) / (2 * a);
            printf("方程有两个解，x1 = %lf, x2 = %lf", x1, x2);
        }
        else if ( delta == 0)
        {
            x1 = x2 = (-b) / (2 * a);
            printf("方程有唯一解，x1 = x2 = %lf", x1, x2);
        }
        else
        {
            printf("无解！");
        }

        printf("您想继续吗，输入(Y/N): ");
        scanf(" %c", &ch);  // 这里必须控制符前必须有空格， 这里涉及到空白符（c primer plus)
    }while ('y' == ch || 'Y' == ch);

    return 0;
}
