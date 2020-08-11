#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define  MAX_SIZE 3000
int get_array(int array[])
{
    int min,i,N;
    scanf("%d",&N);
    if(N==0) return 0;
    for(i=0;i<N;i++)
   {
       scanf("%d",&array[i]);

   }

    return N;
}
int reverse_array(int a[], int size)
{
     int j=-1,i,temp=0;
     if(size==0) return 0;
     for(i=size-1;i>=0;i--)
     {
         j++;
         if(size%2==0)
         {
              temp=a[j];
              a[j]=a[i];
              a[i]=temp;
              if(abs(i-j)==1)break;
         }
         else
         {
              temp=a[j];
              a[j]=a[i];
              a[i]=temp;
              if(abs(i-j)==2)break;
         }


     }
     return 0;
}
int put_array(int a[], int size)
{
   int i,flag=0;
   for(i=0;i<size;i++)
   {
       if(flag==0)
       {
           printf("%d",a[i]);
           flag++;
       }
       else
       {
           printf(" %d",a[i]);
       }

   }
   printf("\n");
}
int main()
{
    int cases, i;
    int array[MAX_SIZE], size;
    scanf("%d", &cases);
    for(i = 1; i <= cases; i++)
    {
        size = get_array(array);
        reverse_array(array, size);
        printf("case %d:", i);
        put_array(array, size);
    }
    return 0;
}

