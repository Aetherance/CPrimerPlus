//3.编写一个程序，在遇到 EOF 之前，把输入作为字符流读取。
//该程序要报告输入中的大写字母和小写字母的个数。假设大小写字母数值是连续的。或者使用ctype.h库中合适的分类函数更方便。
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[100];
    scanf("%[^EOF]",str);
    int len = strlen(str),count_A = 0,count_a = 0;
    for(int i = 0;i<len;i++)
    {
        if(isupper(str[i]))count_A++;
        if(islower(str[i]))count_a++;
    }
    printf("upper:%d lower:%d",count_A,count_a);

    return 0;
}