#include <stdio.h>
#include <stdio.h>
#define MAX_SIZE 1000
int getkey(int key[])
{
	int size;
	int i;
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&key[i]);
	}
	return size;
	
	
}
void getarray(int array[])
{
    int i= 0;
    for(i = 0; i < MAX_SIZE; i++)
    {
        scanf("%d",&array[i]);
        if(array[i] == 0)
            break;
    }
}
int insert(int array[],int key,int vol)
{
    int i, j;
    for(i=0; i<vol; i++)
    {
    	if(!array[i])
            break;
        if(i == vol)
        return -1;
	}
        
    for(j=0; j<i; j++)
    {
    	if(array[j]==key)
            return -2;
        else if(array[j]>key)
            break;
	}
        
    return j;
}
int result(int flag)
{
    if(flag==-1)
        printf("The array if full!\n");
    else if(flag==-2)
        printf("The key is already in this array!\n");
    else
        printf("The key is inserted in position %d\n", flag);
    return 0;
}
int main()
{
    int array[MAX_SIZE], cases, ca, i, key[MAX_SIZE], size;
    scanf("%d", &cases);
    for(ca = 1; ca <= cases; ca++)
    {
        getarray(array);
        size = getkey(key);
        printf("Case %d:\n", ca);
        for(i = 0; i < size; i++)
            result(insert(array, key[i], MAX_SIZE - 1));
    }
    return 0;
}
