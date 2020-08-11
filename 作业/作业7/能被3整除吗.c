#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
   int M,N,i,len,j,sum;
   scanf("%d",&M);
   getchar();
   for(i=M;i>=1;i--)
   {
       sum=0;
       char array[200];
       gets(array);
       len=strlen(array);
       for(j=0;j<len;j++)
       {
           sum=sum+(array[j]-'0');
       }
       if(i!=1)
       {
           if(sum%3==0)
         {
           printf("Yes\n");
         }
         else
         {
             printf("No\n");
         }

       }
       else
       {
            if(sum%3==0)
         {
           printf("Yes");
         }
         else
         {
             printf("No");
         }

       }


   }





    return 0;
}
