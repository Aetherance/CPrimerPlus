#include<stdio.h>
int main()
{
    float v,size,t;
    printf("enter v and size:\n");
    scanf("%f %f",&v,&size);    //输入兆位每秒为单位的v  兆字节的size
    v /= 8;//位转化为为字节
    t = size / v;
    printf("%0.2f Mb/s\t%0.2f MB\t%0.2f s",v,size,t);

    return 0;
}