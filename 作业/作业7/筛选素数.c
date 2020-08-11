#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int is_primer(int num)
{
    int j,flag=0;
    if(num==1)
        return 0;
    else
    {
        for(j=2; j<=sqrt(num); j++)
        {
            if(num%j==0)
                flag++;
            if(num%j==0)
                break;

        }
        if(flag==1)
            return 0;
        else
            return 1;
    }

}
int main()
{
    int a,b,temp,i,j,k,flag;
    while(scanf("%d %d",&a,&b)!=EOF)//a is min,b is bigger.
    {
        flag=0;
        if(a>b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        int num[500088]= {0};
        for(i=a; i<=b; i++)
        {

            if(num[i]==0)//如果这个数是素数，把对应下标变成1
            {

                if(is_primer(i)==0)
                {

                    num[i]=-1;

                }

                else
                {
                    num[i]=1;
                    k=1;
                    while(1)    //然后把它的倍数对应的下标记为-1
                    {


                        k++;
                        if(k*i>b)
                            break;
                        num[k*i]=-1;
                    }
                }


            }

        }


        for(j=a; j<=b; j++)
        {

            if(num[j]==1)
            {
                flag++;
                printf("%d\n",j);
            }



        }
        if(flag==0)
        {
            printf("\n");
        }
        printf("\n");



    }



    return 0;
}
