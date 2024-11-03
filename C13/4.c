//4.编写一个程序，按顺序在屏幕上显示命令行中列出的所有文件。使用argc控制循环。
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char **argv)
{
    for(int i = 1;i<argc;i++)
        printf("%s\n",argv[i]);

    return 0;
}