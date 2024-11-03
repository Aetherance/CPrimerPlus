//14.编写一个通过命令行运行的程序计算幂。
//第1个命令行参数是double类型的数，作为幂的底数，第2个参数是整数，作为幂的指数。
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    char * p1,*p2;
    double a = strtod(argv[1],&p1);
    long n = strtol(argv[2],&p2,10);
    printf("%s ",p2);
    double result = 1;
    for(int i = 0;i<n;i++)
        result *= a;
    printf("%0.2lf",result);

    return 0;
}



 //============>  strtod  <==============//
//============>  strtol  <==============//