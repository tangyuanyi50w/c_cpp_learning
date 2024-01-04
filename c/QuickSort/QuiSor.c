#include <stdio.h>
#include "exc.h"

QuiSor(int *p, int begin, int end)//对于使用指针传递数组，首先第一个当然是构造一个指向数组的指针
{
    while (begin < end)
    {
        if (p[k + 1] <= p[k]) // k是pivot，把小于pivot的换到左边
        {
            exc(&p[k + 1], &p[k]);
            k++; // 作为pivot的k和位于k右边的i，必须同时向右移动
            begin++;
        }
        else // 大于pivot的不能不换，放到未操作序列的最后，两点注意，一，不是指数组最后；二、所谓“放”，在数组里只能是交换，否则就溢出了
        {
            exc(&p[k + 1], &p[end]);
            end--;
        }
    }

    QuiSor(p, 0, k - 1);
    QuiSor(p, k + 1, end);
}