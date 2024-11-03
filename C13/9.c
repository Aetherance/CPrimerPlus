//9.编写一个程序打开两个文件。可以使用命令行参数或提示用户输入文件名。// 9_file1.txt 9_file2.txt
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char **argv)
{
    FILE * f1,*f2;
    if(argc<3)exit(EXIT_FAILURE);
    f1 = fopen(argv[1],"w");
    f2 = fopen(argv[2],"w");
    fprintf(f1,"hello world!");
    fprintf(f2,"hello linux!");
    fclose(f1),fclose(f2);
    return 0;
}