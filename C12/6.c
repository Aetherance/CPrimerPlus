//6.编写一个程序，生成1000个1～10范围内的随机数。
//不用保存或打印这些数字，仅打印每个数出现的次数。
//用 10 个不同的种子值运行，生成的数字出现的次数是否相同？
//可以使用本章自定义的函数或ANSI C的rand()和srand()函数，它们的格式相同。
//这是一个测试特定随机数生成器随机性的方法。
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int count[10] = {};
    srand((unsigned)time(NULL));
    for(int i = 0;i<1000;i++)
        count[rand()%10]++;

    printf("num\tcount\n");
    for(int i = 0;i<10;i++)
        printf("%d\t%d\n",i,count[i]);

    return 0;
}