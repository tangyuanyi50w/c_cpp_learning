#include <stdio.h>

void exc(int *pi,int *pj)  
{
    int tmp=*pi;
    *pi=*pj;
    *pj=tmp;

    return;
}