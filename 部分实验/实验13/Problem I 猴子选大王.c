#include <stdio.h>
#include <string.h>
#define MAX_SIZE 10000
int fate[MAX_SIZE]= {}; //出局的不报数
int main()
{
    int i,j,k;
    int m,n;
    int count;
    int count2;
    int flag=0;

    while(scanf("%d %d",&m,&n)!=EOF)
    {
        i=0;
        fate[0]=-1;
        count2=n;
        count=0;
        flag=0;
        while(count<m-1)
        {
            if(i+n>m)
            {
                while(i+n>m)
                {
                    i=i+n-m;
                    //printf("###%d###",i);
                    if(fate[i]==0)
                    {
                        fate[i]=-1;
                        count++;
                        printf("===%d===\n",count);
                    }
                }

            }
            else
            {
                i=i+n;
                if(fate[i]==0)
                {

                    fate[i]=-1;
                    count++;
                    printf(">>>%d<<<\n",count);
                }
            }
        }
        for(i=1; i<=m; i++)
        {
            if(fate[i]==0)
            {
                printf("%d\n",i);
            }
        }


    }




    return 0;
}
