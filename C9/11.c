//11.编写并测试Fibonacci()函数，该函数用循环代替递归计算斐波那契数。
#include<stdio.h>
int Fibonacci(int n)
{
    int f1 = 1,f2 = 1,fn;
    if(n==1)return f1;
    if(n==2)return f2;
    for(int i = 3;i<=n;i++)
    {
        fn = f1 + f2;
        f1 = f2,f2 = fn;
    }
    return fn;
}
int main()
{
    int n;
    scanf("%d",&n);
    int result = Fibonacci(n);
    printf("%d",result);

    return 0;
}