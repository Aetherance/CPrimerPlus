//2.编写一个函数，提示用户输入日、月和年。
//月份可以是月份号、月份名或月份名缩写。
//然后该程序应返回一年中到用户指定日子（包括这一天）的总天数。
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct month
{
    int num;
    char name[10];
    char short_name[5];
    int count;
}months[12] = {
    {1,"January","Jan",31},
    {2,"February","Feb",28},
    {3,"March","Mar",31},
    {4,"April","Apr",30},
    {5,"May","May",31},
    {6,"June","Jun",30},
    {7,"July","Jul",31},
    {8,"August","Aug",31},
    {9,"September","Sep",30},
    {10,"October","Oct",31},
    {11,"November","Nov",30},
    {12,"December","Dec",31}
};
int isLeap(int year)
{
    if(!(year%100))
        if(!(year%400))return 1;
    if(!(year%4&&(year%100)))return 1;
    return 0;
}
int func()
{
    int day, year;
    int m_num,day_sum = 0;
    char month[10];
    printf("Enter the date:");
    scanf("%d%s%d",&day,month,&year);
    if(day<1||day>31)return -1;
    m_num = atoi(month);
    months[1].count+=isLeap(year);
    day_sum+=day;
    int isError = 0;
    for(int i = 0;i<12;i++)
    {
        if(m_num == months[i].num||!strcmp(month,months[i].name)||!strcmp(month,months[i].short_name))
            break;
        day_sum += months[i].count,isError = 1;
    }
    if(isError)return day_sum;
    return -1;
}
int main()
{
    int day,year;
    char month[10];
    printf("%d\n",func());

    return 0;
}