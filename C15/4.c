//4.编写一个程序，接受两个int类型的参数：一个是值；一个是位的位置。如果指定位的位置为1，该函数返回1；否则返回0。在一个程序中测试该函数。
#include<stdio.h>
int isopen(int val,int bit)
{
    val>>=(bit-1);
    return val&1;
}
int main()
{
    int num,bit;
    scanf("%d%d",&num,&bit);
    printf("%d",isopen(num,bit));

    return 0;
}