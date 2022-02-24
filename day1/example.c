#include <stdio.h>
#include <math.h>

void main()
{
    double x, s;

    printf("input number:\n");
    scanf("%lf", &x);
    s=sin(x);
    printf("sine of %lf\n",x, s);
}
