#include<stdio.h>
#include<string.h>
int main()
{
    char fname[20],lname[20];
    printf("Please enter your firstname\n");
    scanf("%s",fname);
    printf("Please enter your lastname\n");
    scanf("%s",lname);
    int len1 = strlen(fname),len2 = strlen(lname);
    printf("%s %s\n",fname,lname);
    printf("%*d %*d\n",len1,len2,len1,len2);
    printf("%s %s\n",fname,lname);
    printf("%-*d %-*d\n",len1,len2,len1,len2);

    return 0;
}