#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int N,i,flag=0;
    char ch[2000];
    scanf("%d",&N);
    getchar();
    for(i=1;i<=N;i++)
    {

        if(i!=N)
        {
            gets(ch);
            printf("case %d:length=%d.\n",i,strlen(ch));
        }
        else
        {
            gets(ch);
            printf("case %d:length=%d.",i,strlen(ch));
        }



    }





    return 0;
}
