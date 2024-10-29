//9.编写一个程序，要求用户输入一个华氏温度。
//程序应读取double类型的值作为温度值，并把该值作为参数传递给一个用户自定义的函数Temperatures()。
//该函数计算摄氏温度和开氏温度，并以小数点后面两位数字的精度显示3种温度。
//要使用不同的温标来表示这3个温度值。下面是华氏温度转摄氏温度的公式：
//摄氏温度 = 5.0 / 9.0 * (华氏温度 - 32.0)
//开氏温度 = 摄氏温度 + 273.16
//Temperatures()函数中用const创建温度转换中使用的变量。
//在main()函数中使用一个循环让用户重复输入温度，当用户输入 q 或其他非数字时，循环结束。
//scanf()函数返回读取数据的数量，所以如果读取数字则返回1，如果读取q则不返回1。
//可以使用==运算符将scanf()的返回值和1作比较，测试两值是否相等。
#include<stdio.h>
double f_t,c_t,k_t;
void Temperatures(double f_t)
{
    const double k = 273.16;
    c_t = 5.0 / 9.0 * (f_t - 32.0);
    k_t = c_t + k;
    printf("F:%lf C:%lf K:%lf",f_t,c_t,k_t);
}

int main()
{
    
    while(1)
    {
        if(!scanf("%lf",&f_t))break;
        Temperatures(f_t);

    }
    return 0;
}