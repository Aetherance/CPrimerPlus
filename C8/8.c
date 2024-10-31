//8.编写一个程序，显示一个提供加法、减法、乘法、除法的菜单。获得用户选择的选项后，程序提示用户输入两个数字，然后执行用户刚才选择的操作。
//该程序只接受菜单提供的选项。程序使用float类型的变量储存用户输入的数字，如果用户输入失败，则允许再次输入。
// 进行除法运算时，如果用户输入0作为第2个数（除数），程序应提示用户重新输入一个新值。该程序的一个运行示例如下：

#include<stdio.h>
void menu()
{
    printf(">>>>>MENU<<<<\n");
    printf("1.ADD\t2.SUB\n3.MUL\t4.DIV\n");
    printf(">>>>ENTER<<<<\n");
}
int main()
{
    float a,b,re;
    int mode;
    menu();
    scanf("%d",&mode);
    scanf("%f",&a);
    FLAG:
    scanf("%f",&b);
    switch (mode)
    {
    case 1:
        re=a+b;
        printf("%f",re);
        break;
    case 2:
        re=a-b;
        printf("%f",re);
        break;
    case 3:
        re=a*b;
        printf("%f",re);
        break;
    case 4:
        if(!b)
        {
            printf("error\n");
            goto  FLAG;
        }
        re=a/b;
        printf("%f",re);
        break;
    default:
    printf("error:");
        break;
    }

}





















// Enter　the　operation　of　your　choice:
// a.　add　　　　　　　　s.　subtract
// m.　multiply　　　　 d.　divide
// q.　quit
// a
// Enter　first　number:　22　.4
// Enter　second　number:　one
// one　is　not　an　number.
// Please　enter　a　number,　such　as　2.5,　-1.78E8,　or　3:　1
// 22.4　+　1　=　23.4
// Enter　the　operation
// of　your　choice:
// a.　add　　　　　　　　s.　subtract
// m.　multiply　　　　 d.　divide
// q.　quit
// d
// Enter　first　number:　18.4
// Enter　second　number:　
// 0
// Enter　a　number　other　than　0:　0.2
// 18.4　/　0.2　=　92
// Enter　the　operation　of　your　choice:
// a.　add　　　　　　　　s.　subtract
// m.　multiply　　　　 d.　divide
// q.　quit
// q
// Bye.