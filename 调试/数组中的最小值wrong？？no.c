#include <stdio.h>
#define MAX_SIZE 3000
int get_array(int a[], int n)
{
   int i;
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }

}
int min_index(int a[], int n)
{
     int i,min=0;

     for(i=0;i<n;i++)
     {
         if(a[min]>a[i])
             min=i;
     }
     return min;

}


int main()
{
    int array[MAX_SIZE], size, index;

    scanf("%d", &size);
    get_array(array, size);
    index = min_index(array, size);
    printf("minimum number is %d, whose position is %d.", array[index], index);

    return 0;
}


