#include <stdio.h>

void exc(int *arr, int i,int j)  //i和j并不是连续的下标，所以不用指针，而是分开，指针用于处理如数组这样连续排列的数据组
{
    int tmp=arr[i];
    arr[i]=arr[j];
    arr[j]=tmp;

    return;
}