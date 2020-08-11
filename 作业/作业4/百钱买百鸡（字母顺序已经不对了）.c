#include<stdio.h>
int main()
{
  long int m,n;
  int x,y,z,a,b,c,d,num_x,mon,count,flag;
  scanf("COCK,HEN,CHICK,MONEY,CHICKS");
  while(scanf("%d,%d,%d/%d,%ld,%ld",&a,&b,&c,&d,&m,&n)!=EOF)
  {
     flag = 0;
     count = 0;
     num_x = m / a;
     for(x = 0;x <= num_x;x++)
      {
         y = (m*d+c*x-c*n-a*d*x)/(b*d-c);
         z = n-x-y;
         mon = a*x+b*y+c*z/d;
         if(mon==m&&(c*z)%d==0&&y>=0&&z>=0)
          {
             count++;
             if(count==1)
               printf("COCKS,HENS,CHICKS\n");
             printf("%d,%d,%d\n",x,y,z);
              flag=1;
              }
            }
            if(flag==0)
             {
               printf("Cannot buy!\n");
              }
              printf("\n");
            }
            return 0;
        }
