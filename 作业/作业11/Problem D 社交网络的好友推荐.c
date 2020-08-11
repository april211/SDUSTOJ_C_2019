#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#define MAX_SIZE 200
int main()
{
    int N,M;
    int i,j,k,m;
    int same=0,maxlen;
    int flag=0,count=0;
    scanf("%d %d",&N,&M);
    char* name[N+2];
    char* chose[N+2];
    for(i=0; i<N; i++)
    {
        if(i==0)
        {
            name[0] = (char*)malloc(30*sizeof(char));
            scanf("%s",name[0]);
            maxlen=strlen(name[0]);

        }
        else
        {
            name[i] = (char*)malloc(30*sizeof(char));
            scanf("%s",name[i]);
            if(strlen(name[i])>maxlen)
            {

                maxlen=strlen(name[i]);
            }
        }
        chose[i] = (char*)malloc((2*M+10)*sizeof(char));
        gets(chose[i]);

    }

    if(N>1)
    {
        for(j=0; j<N; j++)
        {
            flag=0;
            count=0;
            printf("%*s:",-maxlen,name[j]);

            for(m=0; m<N; m++)
            {
                same=0;
                if(m==j)
                    continue;
                for(k=0; k<M*2; k++)
                {
                    if(chose[m][k]==' ')
                        continue;
                    else
                    {
                        if(chose[m][k]==chose[j][k])
                        {
                            same++;
                        }
                    }
                }
                if(same>=(chose[j][2*M+1]-'0'))
                {
                    count++;
                    if(flag==0)
                    {
                        printf("%s",name[m]);
                        flag++;

                    }
                    else
                    {
                        printf(",%s",name[m]);
                    }
                }



            }
            if(count==0)
            {
                printf("NONE!");
            }
            if(j!=N-1)
            {
                printf("\n");
            }

        }


    }
    if(N==1)
    {
        printf("%s:",name[0]);
        printf("NONE!");

    }

    return 0;
}
