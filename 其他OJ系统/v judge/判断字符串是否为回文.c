#include <stdio.h>
#include <string.h>
#define maxsize 300
int main()
{
    char haha[maxsize];
    int i,j,temp=0,len=0,c=0,flag=0;
    gets(haha);
    len=strlen(haha);
    temp=len-1;
    for(i=0; i<len; i++)
    {

        for(j=temp; j>=0;)
        {

           if(haha[i]!=haha[j])
           {
                flag++;

           }
                temp=j-1;
                 break;

        }

    }
    if(flag==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }






    return 0;
}
