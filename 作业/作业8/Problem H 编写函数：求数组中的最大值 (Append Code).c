#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define  MAX_SIZE 3000
int get_array(int array[])
{
    int min,i,N;
    scanf("%d",&N);
    for(i=0;i<N;i++)
   {
       scanf("%d",&array[i]);

   }

    return N;
}
int put_array(int a[], int n)
{
    int i,flag=0;
     for(i=0;i<n;i++)
     {
         if(flag==0)
         {

             printf("%d",a[i]);
             flag++;
         }
         else
         {
             printf(",%d",a[i]);
         }

     }
     return 0;
}
int max_value(int a[], int n)
{
    int i,max=0;
    max=a[0];
    for(i=1;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    return max;
}
int max_index(int idx[], int a[], int n)
{
      int i,j=0,max;
      max=max_value(a, n);
      for(i=0;i<n;i++)
      {
          if(a[i]==max)
          {
              j++;
              idx[j-1]=i;
          }
      }
     // printf("=====%d %d",idx[0],idx[1]);
      return j;

}
int main()
{
    int array[MAX_SIZE], size;
    int index[MAX_SIZE], idx_size;

    size = get_array(array);
    idx_size = max_index(index, array, size);
    printf("maximum number is %d, ", max_value(array, size));
    printf("whose positions are:");
    put_array(index, idx_size);

    return 0;
}
