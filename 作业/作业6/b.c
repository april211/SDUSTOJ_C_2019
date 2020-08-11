#include <stdio.h>
int main()
{
    int num,i,k=0,sum;
    while(scanf("%d",&num)!=EOF)
    {
        sum=0;
        k++;
        for(i=100;i<=999;i++)   //101,110,111-119,121,122,133,144,155,166,177,188,199,
        {                       //取个位数：num%10；取十位数：（num/10）%10；取百位数：num/100.
            if(((i%10)!=((i/10)%10)) && ((i%10)!=(i/100)) && (((i/10)%10)!=(i/100)) && (i%num==0))
           {
               sum=sum+i;
           }



        }
        printf("case %d:%d\n",k,sum);
    }


     return 0;
}
