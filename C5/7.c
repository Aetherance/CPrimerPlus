//7.编写一个程序，提示用户输入一个double类型的数，并打印该数的立方值。
//自己设计一个函数计算并打印立方值。main()函数要把用户输入的值传递给该函数。
#include<stdio.h>
void print(double num)
{
    printf("%lf",num * num * num);
}
int main()
{
    double num;
    scanf("%lf",&num);
    print(num);
    
    return 0;
}