#include <stdio.h>
#include "exc.h"
/*选择排序基于冒泡排序，冒泡排序每次比较都要交换比较双方的值，
选择排序只是记录下标，最后再将未排序队列的最小值/最大值放在
队头/队尾*/
int main()
{
    int array[10] = {3, 2, 6, 8, 4, 0, 5, 7, 10, 9};
    int LenArr = sizeof(array) / sizeof(int);

    for (int i = 0, tmp = 0, k = 0; i < LenArr; i++)
    {
        k = i;//和下边的int j=i类似，从i开始，这是内层循环的起点
        for (int j = i; j < LenArr; j++) // int j=i，内层循环j从外层循环i在之后开始，也就是只搜索未处理队列的意思
        {

            if (array[k] > array[j])//当然一直是拿最小的array[k]去比较
                k = j;
        }
        exc(array, i, k);
    }

    printf("the result is:\n");
    for (int i = 0; i < LenArr; i++)
        printf("%d ", array[i]);
    printf("\n");

    return 0;
}