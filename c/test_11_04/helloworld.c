#include <stdio.h>
#include <windows.h>
#include "max.h"//引用自己的头文件使用双引号

int main()
{   int a=10;
    int b=20;
    int c=Max(a,b);
    int f=0, g=0;

    short int short_length = sizeof(short);
    int int_length = sizeof(int);
    long int long_length = sizeof(long);
    int char_length = sizeof(char);
    double d=12.34;

    char e='e';
    char web_url[] = "http://c.biancheng.net";
    char *web_name = "C语言中文网";

    //scanf("%d %d", &f, &g);  
    scanf("compare %d with %d", &f, &g);  

    printf("Hello World\n");
    printf("a=%d, b=%d, the maximum is %d\n", a,b,c);
    printf("short=%hd, int=%d, long=%ld, char=%d, char=%c\n", short_length, int_length, long_length, char_length, e);
    printf("%s\n%s\n", web_url, web_name);
    printf("f=%d, g=%d\n", f, g);

    return 0;
}