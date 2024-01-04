#include <stdio.h>

int main()
{
    // 结构体数组，数组每个元素都是结构体
    struct stu
    {
        char *name;
        int num;
        int age;
        char gruop;
        float score;
    } *ps, stu1 = {"Li ping", 5, 18, 'C', 145.0}, *pstu1 = &stu1, class[5] = {{"Li ping", 5, 18, 'C', 145.0}, {"Zhang ping", 4, 19, 'A', 130.5}, {"He fang", 1, 18, 'A', 148.5}, {"Cheng ling", 2, 17, 'F', 139.0}, {"Wang ming", 3, 17, 'B', 144.5}};

    // 结构体指针，再次强调，struct stu是完整的结构体数据类型关键字，后边跟的东西的格式都是之前一样的
    struct stu stu2 = {"Zhang ping", 4, 19, 'A', 130.5};
    struct stu *pstu2 = &stu2;

    // 计算全班学生的总成绩、平均成绩和以及 140 分以下的人数。
    float sum = 0.0, sum_140 = 0.0;
    for (int i = 0; i < 5; i++)
    {
        sum += class[i].score;
        if (class[i].score < 140.0)
            sum_140++;
    }
    printf("全班学生总成绩为: %f,\n平均成绩为: %f,\n140分以下的人数: %d\n", sum, sum / 5, sum_140);
    printf("张平%d岁, 他的分数为：%f\n", pstu2->age, pstu2->score);

    // 结构体数组指针，及使用指针遍历数组的操作
    int len = sizeof(class) / sizeof(struct stu);
    printf("Name\t\tNumber\tAge\tGroup\tScore\n");
    for (ps = class; ps < class + len; ps++)
    {
        printf("%s\t%d\t%d\t%c\t%.1f\n", ps->name, ps->num, ps->age, ps->gruop, ps->score);
        // printf("%s\t%d\t%d\t%c\t%f\n", (*ps).name,(*ps).num, (*ps).age, (*ps).gruop, (*ps).score);
    }

    // 结构体指针函数传参
    // void average(struct stu * ps, int len)
    // {
    //     int i, num_140 = 0;
    //     float average, sum = 0;
    //     for (i = 0; i < len; i++)
    //     {
    //         sum += (ps + i)->score;
    //         if ((ps + i)->score < 140)
    //             num_140++;
    //     }
    // }

        return 0;
    }
