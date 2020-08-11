#include <stdio.h>
#define MAX_SIZE 1000
void get_array(int array[], int size)
{
    int i;
    for(i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }
}
int min_index(int array[], int size)
{
    int i,min,index;
    min = array[0];
    for(i = 0; i < size; i++)
    {
        if(min > array[i]);
        {
            min = array[i];
            index = i;
        }
    }
    return index;
}
int main()
{
    int array[MAX_SIZE], size, index,j;
    printf("Sample Input\n");
    scanf("%d", &size);
    get_array(array, size);
    index = min_index(array, size);
    printf("minimum number is %d, whose position is %d.\n", array[index], index);
    for(j=0; j<size; j++)
    {
        printf("%d\n",array[j]);
    }

    return 0;


}

