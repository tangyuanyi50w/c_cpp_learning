#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main()
{
    double *prt;
    int max;
    int i = 0, number = 0;

    puts("what is the maximum of type double entries?");
    if (!(scanf("%d", &max))) // 对scanf语句多写了一段自检程序
    {
        puts("number not correctly entered!");
        exit(EXIT_FAILURE);
    }
    assert(max > 0);

    prt = (double *)malloc(max * sizeof(double));
    if (prt == NULL) // 内存动态分配自检程序
    {
        puts("Memory allocation failed!");
        exit(EXIT_FAILURE);
    }

    puts("please enter the values of array:");
    while (i < max && scanf("%lf", &prt[i]))
        i++;

    printf("here are your %d entries:\n", number = i);
    for (i = 0; i < number; i++)
    {
        printf("%7.2f", prt[i]); // malloc分配内存是使用prt[i]的合适地方，因为没有数组名
        if (i % 7 == 6)          // 每6个数换行输出
            putchar('\n');
    }

    if (i % 7 != 0)
        putchar('\n'); // 最后一行无论个数要换行输出

    puts("Done.");
    free(prt); // 在创建malloc的同时立马写上free
    return 0;
}