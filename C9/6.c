//6.编写并测试一个函数，该函数以3个double变量的地址作为参数，把最小值放入第1个变量，中间值放入第2个变量，最大值放入第3个变量。
#include<stdio.h>
void Sort(double*min,double*mid,double*max)
{
    int MAX = *max,MIN = *min,MID = *mid;
    if(*min>MAX)MAX=*min;
    if(*mid>MAX)MAX=*mid;
    if(*max<MIN)MIN=*max;
    if(*mid<MIN)MIN=*mid;
    if(*min<MAX&&*min>MIN)MID=*min;
    if(*max<MAX&&*max>MIN)MID=*mid;
    *min = MIN,*max = MAX,*mid = MID;
}
int main()
{
    double min,mid,max;
    scanf("%lf%lf%lf",&min,&mid,&max);
    Sort(&min,&mid,&max);
    printf("%lf %lf %lf",min,mid,max);

    return 0;
}