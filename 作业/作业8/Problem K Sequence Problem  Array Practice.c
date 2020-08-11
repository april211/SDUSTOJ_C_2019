#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 3000
#define MAX(a,b) ((a)>(b)?(a):(b))
int main()
{
    int N1,N2,i,max=0,flag=0,flag2=0,c1=0,c2=0;
    int num1[MAX_SIZE]= {0};
    int num2[MAX_SIZE]= {0};
    while(scanf("%d",&N1)!=EOF)
    {
        flag=0;
        c1=0;
        c2=0;//用来标记是否一次进行了两组输入，如果不是，最后特殊处理
        memset(num1, 0, sizeof(num1));
        memset(num2, 0, sizeof(num2));
        c1++;
        for(i=0; i<N1; i++)
        {

            scanf("%d",&num1[i]);

        }
        if(scanf("%d",&N2)==EOF) break;
        for(i=0; i<N2; i++)
        {
            scanf("%d",&num2[i]);
        }
        max=MAX(N1,N2);

        if(max==N1 && max!=N2)
        {
            for(i=0; i<max; i++)
            {
                num1[i]=num1[i]+num2[i];
                if(flag==0)
                {
                    printf("%d",num1[i]);
                    flag++;
                }
                else
                {
                    printf(" %d",num1[i]);
                }


            }
            printf("\n");
            c2++;


        }
        if(max==N2 && max!=N1)
        {
            for(i=0; i<max; i++)
            {
                num2[i]=num1[i]+num2[i];
                if(flag==0)
                {
                    printf("%d",num2[i]);
                    flag++;
                }
                else
                {
                    printf(" %d",num2[i]);
                }

            }
             printf("\n");
            c2++;
        }
             if(max==N1 && max==N2)
        {
            for(i=0; i<max; i++)
            {
                num1[i]=num1[i]+num2[i];
                if(flag==0)
                {
                    printf("%d",num1[i]);
                    flag++;
                }
                else
                {
                    printf(" %d",num1[i]);
                }
            }
             printf("\n");
            c2++;
        }



    }
    if(c1!=0 && c2==0 && N1!=0)//特殊处理,N1不为0并control+z
    {
        for(i=0; i<N1; i++)
        {
            if(flag==0)
            {
                printf("%d",num1[i]);
                flag++;
            }
            else
            {
                printf(" %d",num1[i]);
            }


        }
         printf("\n");


    }
    if(c1!=0 && c2==0 && N1==0)//N1为零并control+z
    {
        printf("\n\n");
    }




    return 0;
}
