//5.编写一个程序，生成100个1～10范围内的随机数，并以降序排列
//（可以把第11章的排序算法稍加改动，便可用于整数排序，这里仅对整数排序）。
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void Bubble_Sort(int arr[],int len)
{
    for(int i = 0;i<len;i++)
    {
        for(int j = 0;j<len;j++)
        {
            if(arr[j+1]>arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main()
{
    int arr[100];
    srand((unsigned)time(NULL));
    for(int i = 0;i<100;i++)
        arr[i] = rand()%10+1;
    Bubble_Sort(arr,100);
    for(int i = 0;i<100;i++)
        printf("%d -> %d\n",i,arr[i]);
    return 0;
}