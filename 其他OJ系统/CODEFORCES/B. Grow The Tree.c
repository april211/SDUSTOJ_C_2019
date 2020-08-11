#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define MAX_SIZE 300000
int main()
{
    int array[MAX_SIZE];
    int size,i,j,k,l,temp,s1=0,s2=0,answer;
    scanf("%d",&size);
    for(i=0;i<size;i++)//put these integers into the array;
    {
        scanf("%d",&array[i]);
    }
    for(j=1;j<=size-1;j++)//sort method:bubble;
    {
        for(k=0;k<=size-j-1;k++)
        {
            if(array[k]>array[k+1])
            {
                temp=array[k+1];
                array[k+1]=array[k];
                array[k]=temp;
            }
        }
    }


        for(l=0;l<size;l++)
        {
            if(l<(size/2))
            {
                s1=s1+array[l];
            }
            else
            {
                s2=s2+array[l];
            }
        }

          answer=s1*s1+s2*s2;
          printf("%d",answer);








   return 0;
}
