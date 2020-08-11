#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#define MAX_SIZE 100000
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
char th[MAX_SIZE];
int main()
{
    int N,len;
    int i,j,k;
    char** arr;
    char* temp=NULL;
    scanf("%d",&N);
    getchar();
    arr=(char**)malloc((N+2)*sizeof(char*));
    for(i=0;i<N;i++)
    {
       // printf("======");

        gets(th);
        len=strlen(th);
        //printf("%d\n",len);
        arr[i]=(char*)malloc((len+2)*sizeof(char));
        memset(arr[i],0,sizeof(arr[i]));
        strcpy(arr[i],th);
        memset(th,0,sizeof(th));

    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<N-i-1;j++)
        {
            if(strcmp(arr[j],arr[j+1])>0)
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(k=0;k<N;k++)
    {
        printf("%s",arr[k]);
        if(k!=N-1)
            printf("\n");
    }






    return 0;
}
