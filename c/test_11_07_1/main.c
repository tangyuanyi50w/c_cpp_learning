#include <stdio.h>
int main()
{
    int a, b=0;
    printf("input a and b:");
    scanf("%d %d",&a,&b);//scanf的字符串里边的最后不能像printf那样加\n，否则程序会卡在这里。
    printf("the maximum is: %d\n", a>b?a:b);
    return 0;
}
