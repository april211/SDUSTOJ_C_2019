#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define max(a,b) ((a)>(b)?(a):(b))
#define MAX_SIZE 15000
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
    int N;
    int m,p;
    int i,j,k,q,len1,len2;
    scanf("%d",&N);

    for(i=1; i<=N; i++)
    {

        scanf("%d %d",&m,&p);
        getchar();
        for(j=1; j<=m; j++)
        {
            memset(s2,0,sizeof(s2));
            memset(s1,0,sizeof(s1));
            q=0;
            gets(s1);
            upr(s1);
            len1=strlen(s1);
            for(k=0; k<len1; k++)
            {
                if(s1[k]>='A' && s1[k]<='Z')
                {
                    s2[q]=s1[k];
                    q++;
                }
            }
            len2=strlen(s2);
            //printf("%s\n\n",s2);
            if(p<=0)//right--->,fact<----
            {
                for(k=0; k<len2; k++)
                {
                    if(s2[k]+p<'A')
                    {
                         s2[k]=s2[k]+26+p;
                    }
                    else
                    {
                        s2[k]=s2[k]+p;
                    }

                }
            }
            else//left <-----,p>0,fact---->
            {
                for(k=0; k<len2; k++)
                {
                    if(s2[k]+p>'Z')
                    {
                        s2[k]=s2[k]-26+p;
                    }
                    else
                    {
                        s2[k]=s2[k]+p;
                    }
                }

            }


            printf("%d %s",len2,s2);
            if(j!=m)
            {
                printf("\n");
            }

        }
            if(i!=N)
            {
                getchar();
                printf("\n\n");

            }


    }
    return 0;
}

