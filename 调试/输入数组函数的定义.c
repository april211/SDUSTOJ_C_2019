#include <stdio.h>
#define maxsize 1000
int get_array(int array[],int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        scanf("%d",&array[i]);

    }
    return 0;
}
int main()
{
    int j;
    int array[maxsize];
    int size;
    scanf("%d",&size);
    get_array(array,size);
    for(j=0; j<size; j++)
    {
        printf("%d\n",array[j]);
    }


    return 0;
}
