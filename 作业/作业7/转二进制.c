#include <stdio.h>
int main()
{
    int num,i,j,zheng,yu;
      while(scanf("%d",&num)!=EOF)
    {
        i=-1;
        int a[1000];
       while(1)
        {;
            num=zheng;
            i++;
           zheng=num/2;
            yu=num%2
            a[i]=yu;
          if(num==0) break;
        }


        for(j=i; j>=0; j--)
            {
                printf("%d",a[j]);
            }
            printf("\n");



    }







    return 0;
}
