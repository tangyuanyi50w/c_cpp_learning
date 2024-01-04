#include <stdio.h>
#include <string.h>   //字符串虽然用数组来定义，但是仍然有专门的头文件来操作

int main()
{
    char str[]="tangyuanyi";
    char str1[30]={0};//将字符串每个字符全部初始化为结束控制符‘\0’，这样后边赋初值时
    char str2[30]={0};
    char str3[30]={0};
    char *pstr=str;   //字符串指针
    int i=2;

    //字符串输入函数
    printf("input str1:");
    gets(str1);       //专门用于字符输入的函数
    printf("input str2 and str3:");
    scanf("%s %s",str2,str3);

    //字符串输出函数
    puts(str);        //专门用于字符串输出的函数
    printf("%s %s %s\n",str1, str2, str3);

    strcat(str2,str3); //用于拼接字符串的函数，“串猫”，此外还有strcpy, strcmp等函数
    printf("the combined string is %s\n",str2);

    //利用字符串指针输出函数
    printf("字符串指针输出函数：");
    for(int i=0;i<strlen(str);i++)  //此处i的作用域仅局限于for结构内部，外部无效
    {
        printf("%c",*(pstr+i));//注意，这里的控制符是%c，而非%s
    }
    printf("\n");

    //检验for的小括号里边定义的作用域
    printf("i is %d\n",i);

    printf("the length of the string str is %d\n",strlen(str));//得到实际长度，并不包含控制符'\0'
    return 0;
}