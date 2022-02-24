/*
 * 输入数，根据数判断成绩
 *  if else if else
 *
 *  if else if else 可以省略 else
 * */

# include <stdio.h>

int main(void)
{
    float score;

    printf("请输入你的成绩：");
    scanf("%f", &score);

    if (score > 100)
        printf("不存在！\n");
    else if (score >= 90 && score < 100)
        printf("优秀!\n");
    else if (score >= 80 && score < 90)
        printf("良好!\n");
    else if (score >= 60 && score < 80)
        printf("及格!\n");
    else if (score >= 0 && score < 60)
        printf("不及格, 继续努力！\n");
    else
        printf("输入的分数过低，请大胆输入你的成绩！");

    return 0;
}