#include <stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d*%d=%-4d",i,j,i*j);
        }
        j=1;         //内层结束到外层时，重新复初始值很关键。这也是写多层程序时很重要的一点，先搞个简单的程序
        printf("\n");//测试整体框架，框架正确了，再去写主体。不然很容易在这些细节的地方出错。
    }
    return 0;
}