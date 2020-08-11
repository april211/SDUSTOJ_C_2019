#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define  MAX_SIZE 1000010
int pro2[MAX_SIZE];

int main()
{
    long long int num1,num2,i=-1,j=0,temp=0,max=0,temp2=0;
    long long int k=0,m=0;
    long long int c=0;
    memset(pro2,-1,sizeof(pro2));
    while(scanf("%lld %lld",&num1,&num2)!=EOF)
    {
        c=0;
        k=0;
        m=0;
        max=-1;
        if(num1>num2)
        {
            temp2=num1;
            num1=num2;
            num2=temp2;
            c++;
        }

        for(j=num1; j<=num2; j++)
        {
            i=1;
            temp=j;
            if(pro2[j]==-1)
            {
                while(temp!=1)
                {
                    if(temp%2!=0)
                    {
                        temp=temp*3+1;
                    }
                    else
                    {
                        temp=temp/2;
                    }
                    i++;
                }
                    pro2[j]=i;

            }




            if(pro2[j]>max)
                max=pro2[j];


        }

        if(c==0)
        {
            printf("%lld %lld %d\n",num1,num2,max);
        }
        else
        {
            printf("%lld %lld %d\n",num2,num1,max);
        }


    }






    return 0;
}
