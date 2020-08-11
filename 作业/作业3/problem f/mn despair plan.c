#include <stdio.h>
#include <stdlib.h>
int main()
{   int k,m,n,i,j=1;
    scanf("%d %d %d",&k,&m,&n);


     for(i=1;i<=k;i++)
  {
       if((i%m==0 && i%n!=0)||(i%n==0 && i%m!=0))
       {
           j++;
           if(j==2){printf("%d",i);}
           else{printf(" %d",i);}
       }


  }








     return 0;
 }
