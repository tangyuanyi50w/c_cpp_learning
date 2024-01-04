#include <stdio.h>
int main()
{
    int age = 0;
    float score = 0.0;
    printf("请输入你的年龄和分数：\n");
    scanf("%d %f", &age, &score); //%d和%f必须严格对应读入的数据类型，基本的有%d/%f/%c三类
    if (age>=18 && score>=60)
    {
        printf("您已满足准入条件！\n");
    }
    else
    {
        printf("您未满足准入条件！\n");
    }
    return 0;
}