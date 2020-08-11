#include <stdio.h>
int main()
{
    int a,b,i,j,k,l,m,n,o,flag=0,z;
    scanf("%d",&a);
    printf("Sun Mon Tue Wen Thu Fri Sat\n");
    if(a>=1 && a<=6)
    {
        if(a>=1 && a<6)
      {
            for(i=1; i<=a; i++)
            {
                printf("    ");
            }
            printf("  1");
            for(j=2; j<=7-a; j++)
            {
                printf(" %3d",j);
            }
            printf("\n");
            printf("%3d",j);
            for(l=j+1; l<=j+6; l++)
            {
                printf(" %3d",l);
            }
            printf("\n");
            printf("%3d",l);
            for(m=l+1; m<=l+6; m++)
            {
                printf(" %3d",m);
            }
            printf("\n");
            printf("%3d",m);
            for(n=m+1; n<=m+6; n++)
            {
                printf(" %3d",n);
            }
            printf("\n");
            printf("%3d",n);
            for(o=n+1; o<=30; o++)
            {
                printf(" %3d",o);
            }

        }
        else
            {
                  for(i=1; i<=a; i++)
            {
                printf("    ");
            }
            printf("  1");
            for(j=2; j<=7-a; j++)
            {
                printf(" %3d",j);
            }
            printf("\n");
            printf("%3d",j);
            for(l=j+1; l<=j+6; l++)
            {
                printf(" %3d",l);
            }
            printf("\n");
            printf("%3d",l);
            for(m=l+1; m<=l+6; m++)
            {
                printf(" %3d",m);
            }
            printf("\n");
            printf("%3d",m);
            for(n=m+1; n<=m+6; n++)
            {
                printf(" %3d",n);
            }
            printf("\n");
            printf("%3d",n);
            for(o=n+1; o<=29; o++)
            {
                printf(" %3d",o);
            }
            printf("\n");
            printf(" 30");




            }


    }
    else
    {
        printf("  1");
        for(j=2;j<=7;j++)
       {
           printf(" %3d",j);
       }
         printf("\n");
         printf("%3d",j);
         for(l=j+1;l<=j+6;l++)
         {
             printf(" %3d",l);
         }
         printf("\n");
         printf("%3d",l);
         for(m=l+1;m<=l+6;m++)
         {
             printf(" %3d",m);
         }
         printf("\n");
         printf("%3d",m);
         for(n=m+1;n<=m+6;n++)
         {
             printf(" %3d",n);
         }
         printf("\n");
         printf("%3d",n);
         for(o=n+1;o<=30;o++)
         {
             printf(" %3d",o);
         }

    }

       return 0;
}
