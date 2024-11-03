// 10.编写一个程序，通过一个函数指针数组实现菜单。例如，选择菜单中的 a，将激活由该数组第 1个元素指向的函数。
#include<stdio.h>
typedef int (*fp) (int,int);
int ADD(int a,int b)
{return a+b;}
int SUB(int a,int b)
{return a-b;}
int MUL(int a,int b)
{return a*b;}
int DEV(int a,int b)
{return a/b;}
void print_MENU()
{
    printf(">>>>>MENU<<<<<\n");
    printf(">>>>ADD[1]<<<<\n");
    printf(">>>>SUB[2]<<<<\n");
    printf(">>>>MUL[3]<<<<\n");
    printf(">>>>DEV[4]<<<<\n");
    printf(">>>>#enter<<<<\n");
}
int main()
{   int mode,a,b;
    fp arr[4] = {ADD,SUB,MUL,DEV};
    print_MENU();
    scanf("%d",&mode);
    printf("enter a b:");
    scanf("%d %d",&a,&b);
    printf("a=%d b=%d\n",a,b);
    printf("%d\n",arr[mode-1](a,b));

    return 0;
}