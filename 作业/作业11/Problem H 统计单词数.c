#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include <ctype.h>
char* ch;
int main()
{
    int count=0,count1=0,count2=0,count3=0,count4;
    int i,j,k,len;
    while(1)
    {
        ch=(char*)malloc(1009*sizeof(char));
        if(gets(ch)==NULL)
            break;
        count=0;
        count1=0;
        count2=0;count3=0;count4=0;
        int lve[1009]= {0};
        len=strlen(ch);
        for(i=0; i<len; i++)
        {
            if(ch[i]=='.')
            {
                count1++;
                lve[i]=lve[i]+1;
            }
        }
        if(count1<=1)
        {
            for(i=0; i<len; i++)
            {
                if(ch[i]=='.' )
                {
                    count++;
                }
                if(ch[i]==',' || ch[i]==';' || ch[i]==':' ||(ch[i]==' '&& ch[i-1]!=',')||(ch[i]==' '&& ch[i-1]!=';')||(ch[i]==' '&& ch[i-1]!=':') )
                {
                    count++;
                }
                if(ch[i]=='!' && count3==0)
                {
                    count3++;
                    count++;
                }
                if(ch[i]=='?' && count3==0)
                {
                    count3++;
                    count++;
                }
            }
            printf("%d\n",count);

        }
        else
        {
            for(j=0;j<len;j++)
            {
                if(lve[j]==1 && count2==0)
                {
                    count++;
                    count2++;

                }
                if(lve[j]==0)
                {
                    count2=0;
                }

            }

               for(i=0; i<len; i++)
            {
                if(ch[i]==',' || ch[i]==';' || ch[i]==':' || ch[i]==' ')
                {
                    count++;
                }
                if(ch[i]=='!' && count3==0)
                {
                    count3++;
                    count++;
                }
                if(ch[i]=='?' && count3==0)
                {
                    count3++;
                    count++;
                }
            }
            printf("%d\n",count);

        }




        free(ch);
    }






    return 0;
}
