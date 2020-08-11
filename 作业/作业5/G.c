#include <stdio.h>
int main()
{
    int a,i,j,k,flag=0;
    while(1)
    {
        scanf("%d",&a);
        flag++;
        if(a==0) break;
        if(a%2==0)
      {
          if(flag==1)
          {
              for(i=1;i<=a;i++)
            {
             for(k=a-i;k>=1;k--)
             {
                 printf(" ");
             }
             for(j=1;j<=(2*i-1);j++)
             {
                 printf("+");
             }
                printf("\n");
            }

          }
          else
            {
                printf("\n");
               for(i=1;i<=a;i++)
             {
               for(k=a-i;k>=1;k--)
               {
                   printf(" ");
               }
               for(j=1;j<=(2*i-1);j++)
               {
                   printf("+");
               }
                 printf("\n");
              }

            }


      }
        else
        {
            if(flag==1)
             {
                for(i=1;i<=a;i++)
               {
                   for(k=0;k<i-1;k++)
                  {
                     printf(" ");
                  }
                   for(j=(2*a+1-2*i);j>=1;j--)
                  {
                     printf("+");
                  }
                   printf("\n");
               }
             }
             else
                {
                    printf("\n");
                    for(i=1;i<=a;i++)
                  {
                       for(k=0;k<i-1;k++)
                   {
                     printf(" ");
                   }
                    for(j=(2*a+1-2*i);j>=1;j--)
                   {
                     printf("+");
                   }
                   printf("\n");
                  }

                }
        }


    }




     return 0;
}
