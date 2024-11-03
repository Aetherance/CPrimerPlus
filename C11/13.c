//13.编写一个程序，反序显示命令行参数的单词。
//例如，命令行参数是 see you later，该程序应打印later you see。
#include<stdio.h>
#include<string.h>
int main(int argc,char *argv[])
{
    char target[100][100];
    char * p = *(argv+1);
    int count = 0;
    while(*p!='\0')
    {
        if(*p == ' ')
            count++;
        p++;
    }
    count++;        //单词数 = 空格数 + 1
    p = *(argv+1);
    for(int i = 0;i<count;i++)
    {
        sscanf(p,"%s",target[i]);
        p+=strlen(target[i])+1;
    }
    for(int i = count - 1;i>=0;i--)
    {
        printf("%s ",target[i]);
        p+=strlen(target[i])+1;
    }
    return 0;
}