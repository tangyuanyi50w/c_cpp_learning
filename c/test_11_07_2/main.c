#include <stdio.h>
#include <stdlib.h>
int main()
{
    #ifdef _DEBUG
        printf("正在使用 Debug 模式编译程序...\n");
    #else
        printf("正在使用 Release 模式编译程序...\n");
    #endif

    int i,j,n;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            n=j*i;
            printf("%-4d", n);
            /*这两句可以合成一句，省掉n这个变量的定义，省空间，以后就这么写：
              printf("%-4d", j*i);
            */
        }
        printf("\n");
    }
    return 0;
}