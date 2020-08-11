#include <stdio.h>
#include<string.h>
#define MAX_SIZE 1000010
int a[MAX_SIZE];
int main()
{
    memset(a,-1,sizeof(a));
    unsigned b,c;
    while(scanf("%u %u",&b,&c)!=EOF)
    {
        int max=-1;
        int j;
        printf("%u %u ",b,c);
        if(b>c)
        {
            j=b;
            b=c;
            c=j;

        }
        unsigned i;
        for(i=b; i<=c; i++)
        {
            int t=0,k=i;
            if(a[i]==-1)
            {
                while(k!=1)
                {
                    t++;
                    if(k%2!=0)
                        k=k*3+1;
                    else
                        k=k/2;
                }
                a[i]=t+1;
            }
            if(a[i]>max)
                max=a[i];


        }
        printf("%d\n",max);
    }
    return 0;

}
