// //4.使用if else语句编写一个程序读取输入，读到#停止。用感叹号替换句号，用两个感叹号替换原来的感叹号，最后报告进行了多少次替换。
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str[100] = {};
//     scanf("%[^#]",str);
//     int len = strlen(str),count = 0;
//     for(int i = 0;i<len;i++)
//     {
//         if(str[i]=='.')str[i]='!',count++;
//         else if(str[i]=='!')
//         {
//             if(str[i]!='!')for(int j = i+1;j<=len;j++)
//             {
//                 str[j] = str[j-1];
//             }
            
//             i++,count++;
//         }
//     }
//     printf("%d\n",count);
//     printf(str);
//     return 0;
// }