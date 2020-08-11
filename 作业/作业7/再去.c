#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int flag1,flag2,i,j,len1,flag,k,len2,len3,countleft,countright;
    while(1)
    {
        char ch1[107];
        gets(ch1);
        len1=strlen(ch1);
        countleft=0;
        countright=1;
        flag1=0;
        flag2=0;
        for(i=0; i<=len1-2; i++)
        {
            if(isspace(ch1[i])==0) break;
            if(isspace(ch1[i])!=0&&isspace(ch1[i+1])==0&&flag1==0)
            {
                flag1++;
                countleft++;

            }
            if(isspace(ch1[i])!=0&&isspace(ch1[i+1])!=0&&flag1==0)
            {
                countleft++;
            }


        }
        for(j=len1-1;j>=1;j--)
        {
            if(isspace(ch1[j])==0) break;
            if(isspace(ch1[j])!=0&&isspace(ch1[j-1])==0&&flag2==0)
            {
                 flag2++;
                 countright++;
            }
            if(isspace(ch1[j])!=0&&isspace(ch1[j-1])==0&&flag2==0)
            {
                countright++;
            }
        }
        for(k=countleft;k<=len1-countright;k++)
        {
             printf("%c",ch1[k]);

        }


        if(ch1[countleft]=='E'&&ch1[countleft+1]=='N'&&ch1[countleft+2]=='D') break;
        printf("\n");


    }





    return 0;
}
