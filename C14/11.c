//11.编写一个名为transform()的函数，接受4个参数：内含double类型数据的源数组名、内含double类型数据的目标数组名、一个表示数组元素个数的int类型参数、函数名（或等价的函数指针）。
//transform()函数应把指定函数应用于源数组中的每个元素，并把返回值储存在目标数组中。例如：
//transform(source, target, 100, sin);
//该声明会把target[0]设置为sin(source[0])，等等，共有100个元素。在一个程序中调用transform()4次，以测试该函数。分别使用math.h函数库中的两个函数以及自定义的两个函数作为参数。
#include<stdio.h>
#include<math.h>
double ADD(double a)
{return a+a;}
double MUL(double a)
{return a*a;}
void transform(double source[],double target[],int len,double (*p)(double))
{
    for(int i = 0;i<len;i++)
       target[i] = p(source[i]); 
}
int main()
{
    double source1[100],target1[100];
    double source2[100],target2[100];
    double source3[100],target3[100];
    double source4[100],target4[100];
    
    for(int i = 0;i<100;i++)
    {
        source1[i] = (i+1)*(i+1);
        source2[i] = 10*(i+1);
        source3[i] = i+1;
        source4[i] = i+1;
    }
    transform(source1,target1,100,sqrt);
    transform(source2,target2,100,log10);
    transform(source3,target3,100,ADD);
    transform(source4,target4,100,MUL);

    for(int i = 0;i<100;i++)
    {
        printf("%4.2lf %4.2lf\n",source1[i],target1[i]);
        printf("%4.2lf %4.2lf\n",source2[i],target2[i]);
        printf("%4.2lf %4.2lf\n",source3[i],target3[i]);
        printf("%4.2lf %4.2lf\n",source4[i],target4[i]);
        printf("\n");
    }


    return 0;
}