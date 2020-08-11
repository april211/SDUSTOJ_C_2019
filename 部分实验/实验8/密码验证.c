#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[24];
    char right[24];
    int i,n,len1,len2,flag=0;
    scanf("%s",right);
    len1=strlen(right);
    while(scanf("%s",a)!=EOF)
    {
        if(flag==5)
        {
            printf("Out of limited!\n");
        }
        else
        {
            if(strcmp(a,right)==0)
            {
                printf("Welcome!\n");
                break;
            }
            if(strcmp(a,right)!=0)
            {
                printf("Wrong!\n");
                flag++;
            }
        }



    }





}
