//15.使用字符分类函数实现atoi()函数。如果输入的字符串不是纯数字，该函数返回0。
#include<stdio.h>
#include<stdlib.h>
int my_atoi(char * str)
{
    int count = 0,result = 0;
    while('0'<=str[count]&&str[count]<='9')
        count++;
    if(!count)return 0;
    for(int i = 0;i<count;i++)
    {
        result *= 10;
        result += str[i] - '0';
    }
    return result;
}
int main()
{
    char str[100] = "0303helloworld111";
    int val = my_atoi(str);
    printf("%d",val);

    return 0;
}