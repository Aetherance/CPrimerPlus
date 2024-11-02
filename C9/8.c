//8.第6章的程序清单6.20中，power()函数返回一个double类型数的正整数次幂。
//改进该函数，使其能正确计算负幂。
//另外，函数要处理0的任何次幂都为0，任何数的0次幂都为1（函数应报告0的0次幂未定义，因此把该值处理为1）。
//要使用一个循环，并在程序中测试该函数。
#include<stdio.h>
double power(double num,int x)
{
    if (!num)return 0;
    double result = 1;
    if(x>0)
    {
        for(int i = 0;i<x;i++)
            result *= num;
        return result;
    }
    if(!x)return 1;
    if(x<0)
    {
        for(int i = 0;i<(-x);i++)
            result *= 1.0/num;
        return result;
    }
}

int main()
{
    printf("%lf\n",power(2,0));
    printf("%lf\n",power(1,2));
    printf("%lf\n",power(3,3));
    printf("%lf\n",power(2,-1));
    printf("%lf\n",power(3,-3));
    printf("%lf\n",power(0,-1));

    return 0;
}