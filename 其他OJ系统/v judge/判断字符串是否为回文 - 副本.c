#include <stdio.h>
#include <string.h>
#define maxsize 300
int main()
{
    char haha[maxsize];
    int i,j=-1,temp=0,len=0,c=0,flag=0;
    gets(haha);
    len=strlen(haha);

    for(i=0; i<len; i++)
    {

             len--;
           if(haha[i]!=haha[len])
           {
                flag++;

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
