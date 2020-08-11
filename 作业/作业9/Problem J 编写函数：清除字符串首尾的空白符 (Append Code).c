#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX_STR_LEN 200
char * trim(char *ch1)
{

    int i=0,j,len1,k;


            //printf("===========");
            len1=strlen(ch1);
            for(k=len1-1; k>=0; k--)
            {
                if(isspace(ch1[k])!=0)
                {
                    ch1[k]=0;
                }
                else
                {
                    break;
                }

            }


        while(1)
        {

            if(isspace(ch1[i])!=0)
            {
               i++;
            }
            else
            {
                  break;
            }


        }


    return (ch1+i);

}
int main()
{
    char str[MAX_STR_LEN], *p;
    do
    {
        gets(str);
        p = trim(str);
        puts(p);
    }
    while(strcmp(p, "END"));
    return 0;
}
