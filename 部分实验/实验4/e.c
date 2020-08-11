#include <stdio.h>
#include <stdlib.h>
int main()
{
    int start,step,end,i,a,j=0,k=0;
    scanf("start = %d, step = %d, end = %d",&start,&step,&end);
       a=start;
    for(i=0;;i++)

    {
        if(step>0)
      {

        if((start+i*step)>(end))break;
        j++;
        if(j==1)
        {
            start=a;
            printf("%d",start+i*step);

        }
        else
            {
              start=a;
              printf(" %d",start+i*step);
              }
      }
       if(step<0)
       {
           if((start+i*step)<(end))break;
        k++;
        if(k==1)
        {
            start=a;
            printf("%d",start+i*step);

        }
        else
            {
              start=a;
              printf(" %d",start+i*step);
              }
       }



    }





    return 0;
}
