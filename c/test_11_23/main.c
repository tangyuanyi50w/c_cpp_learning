#include <stdio.h>

void swap(int *num1,int *num2);  //函数声明

int main()
{
    //函数指针传递
    int a=3,b=6;
    swap(&a,&b);
    printf("a and b is %d and %d\n",a,b);

    //二级指针
    int *pa1=&a;
    int **pa2=&pa1; //实际使用时，**pa2=*(*pa2)=*pa1
    printf("pa1=%#X, *pa2=%#X\n",pa1,*pa2);

    return 0;
}

void swap(int *num1,int *num2)   //指针传递，函数参数传递就是赋值的过程，因此，就按照指针定义赋值的格式写
{
    int temp=0;
    temp=*num1;
    *num1=*num2;
    *num2=temp;
}