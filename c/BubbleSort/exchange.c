#include <stdio.h>

void exch(int *arr,int *pj)//下标j也必须通过指针的形式传进来
{
    int temp;
    temp=arr[*pj];//大者后移，也就是相邻元素进行交换
    arr[*pj]=arr[*pj+1];
    arr[*pj+1]=temp;
}
