#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
char name[300];
 int n,num,j,i;
int main()
{


       scanf("%d",&n);
       for(i=1;i<=n;i++)
       {
           scanf("%s %d",&name,&num);
          // getchar();
           printf("%8s |",name);
           for(j=1;j<=num;j++)
           printf("=");
           printf("\n");

       }
       return 0;
}
