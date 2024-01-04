#include <stdio.h>
#include "exchange.h"

int main()
{
    int array[10]={4, 5, 2, 10, 7, 1, 8, 3, 6, 9};
    int i,j,k=0,temp;
    for(i=0;i<9-i;i++)//冒泡排序，数组左右相邻元素相互比较，大者后移，这是内层循环；这样的遍历执行10遍，这是外层循环。
    {
        for(j=0;j<9;j++)
            {
                if(array[j+1]<array[j]) 
                {
                    exch(array,&j);
                    k++;
                }
            }
            if (!k) break;//当比较到第 i 轮的时候，如果剩下的元素已经排序好了，那么就不用再继续比较了，跳出循环即可
    }
    for(i=0;i<10;i++)
        {
            printf("%d ",array[i]);
        }
    printf("\n");
    return 0;
}