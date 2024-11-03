//2.编写一个程序，通过命令行参数读取两个二进制字符串，对这两个二进制数使用～运算符、&运算符、|运算符和^运算符，
//并以二进制字符串形式打印结果（如果无法使用命令行环境，可以通过交互式让程序读取字符串）。
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int transf(int num)
{
    int result = 0,sign = 0;
    if(num/pow(10,sizeof(int)*__CHAR_BIT__)==1)sign = 1;
    for(int i = 0;i<sizeof(int)*__CHAR_BIT__-1;i++)
    {
        result += (num%10) * pow(2,i);
        num /= 10;
    }
    return result*(sign==0?1:-1);
}
int main(int argc,char **argv)
{
    int num1 = atoi(argv[1]),num2 = atoi(argv[2]);
    printf("%d %d\n",transf(num1),transf(num2));
    printf("%d\n",transf(num1)&transf(num2));
    printf("%d\n",transf(num1)|transf(num2));
    printf("%d\n",transf(num1)^transf(num2));
    printf("%d\n",~transf(num1));
    printf("%d\n",~transf(num2));


    return 0;
}