//9.编写一个符合以下描述的函数。
//首先，询问用户需要输入多少个单词。
//然后，接收用户输入的单词，并显示出来，
//使用malloc()并回答第1个问题（即要输入多少个单词），
//创建一个动态数组，该数组内含相应的指向char的指针
//（注意，由于数组的每个元素都是指向char的指针，
//所以用于储存malloc()返回值的指针应该是一个指向指针的指针，且它所指向的指针指向char）。
//在读取字符串时，该程序应该把单词读入一个临时的char数组，
//使用malloc()分配足够的存储空间来储存单词，并把地址存入该指针数组（该数组中每个元素都是指向 char 的指针）。
//然后，从临时数组中把单词拷贝到动态分配的存储空间中。
//因此，有一个字符指针数组，每个指针都指向一个对象，该对象的大小正好能容纳被储存的特定单词。
//下面是该程序的一个运行示例：
//How　many　words　do　you　wish　to　enter?　5
//Enter　5　words　now:
//I enjoyed doing this exerise
//Here　are　your　words:
//I
//enjoyed
//doing
//this
//exercise
//* * *
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("How many words do you wish to enter?\n");
    scanf("%d",&n);
    printf("Enter %d words now:",n);
    char str[100],**target = (char**)malloc(sizeof(char*));
    setbuf(stdin,NULL);//清除缓冲区!!!!!!!!!!!
    scanf("%[^\n]",str);
    
    char * p = str;
    int size = 1;
    for(int i = 0;i<n;i++)
    {
        
        target[i] = (char*)malloc(100);
        sscanf(p,"%s",target[i]);
        int per_size = strlen(target[i]) *sizeof(char);
        size += sizeof(char*);
        target = realloc(target,size);
        p+=strlen(target[i])+1;
    }

    for(int i = 0;i<n;i++)
        printf("%s\n",target[i]);
    return 0;
}