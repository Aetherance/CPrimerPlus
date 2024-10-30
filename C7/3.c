//3.编写一个程序，读取整数直到用户输入 0。
//输入结束后，程序应报告用户输入的偶数（不包括 0）个数、这些偶数的平均值、输入的奇数个数及其奇数的平均值。
#include<stdio.h>
int main()
{
    int count_1 = 0,count_2 = 0,sum_1 = 0,sum_2 = 0,jug = 0;
    while(1)
    {
        scanf("%d",&jug);
        if(jug == 0)break;
        if(jug%2==1)count_1++,sum_1+=jug;
        if(jug%2==0&&jug!=0)count_2++,sum_2+=jug;
    }

    if(count_2!=0)printf("%d %lf\n",count_2,sum_2/((count_2)*1.0));
    if(count_2==0)printf("0 0\n");
    if(count_1!=0)printf("%d %lf\n",count_1,sum_1/((count_1)*1.0));
    if(count_1==0)printf("0 0\n");
    return 0;
}