#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char ch1[107];
    int size,i,j,len1,flag,k,len2,len3,m;
    while(1)
    {
        while(1)
        {
            len1=strlen(ch1);
            if(isspace(ch1[0])==0)
            {
                for(k=1; k<=len1-1; k++)
                {
                    ch1[k-1]=ch1[k];
                }
            }
            if(isspace(ch1[0])!=0)
                break;

        }
        len2=strlen(ch1);
        while(1)
        {

            if(isspace(ch1[len2-1])==0)
            {
                for(k=len2-2; k>=0; k--)
                {
                    ch1[k+1]=ch1[k];
                }
            }
            if(isspace(ch1[len2-1])!=0)
                break;

        }
        len3=strlen(ch1);
        for(m=len2-1; m>=len2-len3; m--)
        {
            printf("%c",ch1[m]);
        }

    }










    return 0;
}
