//2.编写一个程序，在遇到 EOF 之前，把输入作为字符流读取。
//程序要打印每个输入的字符及其相应的ASCII十进制值。

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100] = {};
    scanf("%[^EOF]",str);
    int len = strlen(str);
    int c = 0;
    while((c++)!=len)
    {  
        int count_ = 0;

        printf("%c",str[c]);
        printf(" %d ",str[c]);

        count_++;
        if(count_==10)
        {
            printf("\n");
            count_ = 0;
        }
    }


    return 0;
}