#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define  MAX_SIZE 3000
int get_array(int array[], int size)
{
   int min,i,n;
   for(i=0;i<size;i++)
   {
       scanf("%d",&array[i]);
   }
    return size;
}
int min_index(int array[], int size)
{
    int min,i,n;
    n=size-1;
    min=array[n];
    while(n>=0)
    {
        n--;
        if(array[n]<min)
        {
            min=array[n];
        }
    }
    for(i=0;i<size;i++)
    {
        if(array[i]==min) return i;
    }
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
