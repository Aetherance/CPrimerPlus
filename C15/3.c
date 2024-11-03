//3.编写一个函数，接受一个 int 类型的参数，并返回该参数中打开位的数量。在一个程序中测试该函数。
#include<stdio.h>
int bits_open(int num)
{
    int count = 0;
    int len = sizeof(int) * __CHAR_BIT__;
    for(int i = 0;i<len;i++)
    {
        if(num&1)count++;
        num>>=1;
    }
    return count;
}
int main()
{
    int num;
    scanf("%d",&num);
    printf("%d",bits_open(num));

    return 0;
}