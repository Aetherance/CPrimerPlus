//9.编写一个程序，只接受正整数输入，然后显示所有小于或等于该数的素数。
#include<stdio.h>
#include<math.h>
int isPrime(int num)
{
    int flag = 1;
    for(int i = 2;i<=sqrt(num);i++)
        if(!(num%i))flag = 0;
    return flag;
}
int main()
{
    int num;
    scanf("%d",&num);
    for(int i = 2;i<=num;i++)
        if(isPrime(i))printf("%d",i);

    return 0;
}