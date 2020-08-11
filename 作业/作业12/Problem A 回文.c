#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define max(a,b) ((a)>(b)?(a):(b))
#define MAX_SIZE 2000
char s1[MAX_SIZE];
char s2[MAX_SIZE];
int upr(char array[])
{
    int i,j;
    int len1=0;
    while(1)
    {
        //	printf("==========");
        if(array[len1]==0)
            break;
        len1++;
    }
    for(i=0; i<len1; i++)
    {
        if(array[i]=='a' || array[i]=='b'|| array[i]=='c' ||array[i]=='d'||array[i]=='e'||array[i]=='f'||array[i]=='g'||array[i]=='h'||array[i]=='i'||array[i]=='j'||array[i]=='k'||array[i]=='l'||array[i]=='m'||array[i]=='n'||array[i]=='o'||array[i]=='p'||array[i]=='q'||array[i]=='r'||array[i]=='s'||array[i]=='t'||array[i]=='u'||array[i]=='v'||array[i]=='w'||array[i]=='x'||array[i]=='y'||array[i]=='z')
        {
            array[i]=array[i]-32;
        }
    }
    return 0;

}
int main()
{
    int i,j,k;
    int len1,len2;
    while(gets(s1)!=NULL)
    {
        len1=strlen(s1);
        j=0;
        int flag=0;
         upr(s1);
        for(i=0; i<len1; i++)
        {
            if((s1[i]>='A' && s1[i]<='Z') || (s1[i]>='0' && s1[i]<='9'))
            {
                s2[j]=s1[i];
                j++;
            }
        }
        len2=j;
       // printf("%s\n",s2);
        if(j==0)
        {
            printf("No.\n");
        }
        else
        {
              for(i=0; i<len2/2; i++)
            {
                if(s2[i]!=s2[len2-i-1])
                    flag++;

            }
            if(flag!=0)
                printf("No.\n");
            else
                printf("Yes.\n");
        }

        memset(s2,0,sizeof(s2));
        memset(s1,0,sizeof(s1));




    }



    return 0;
}
