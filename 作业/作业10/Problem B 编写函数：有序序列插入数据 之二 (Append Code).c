#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 1001
#define max(a,b) ((a)>(b)?(a):(b))
int ip=0;
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
int getarray(int array[])
{
	int num;
	ip=0;
	while(1)
	{
		scanf("%d",&num);
		if(num==0) break;
		array[ip]=num;
		ip++;
	}
	  return ip;//元素个数为ip 
	 
}
int insert(int array[], int key, int vol)
{
	int i,j,k,f;
	if(ip==0)    return 0;
	if(ip>=vol)  return -1;
	if(ip<vol) 
	{
		for(i=0;i<ip;i++)
		{
			if(array[i]==key) 
			{
				return -2;
			}
			
		}
			
			for(k=0;k<ip;k++)
			{
				
				if(key<array[0]) //小于第一个数 
					{
						for(f=ip-1;f>=0;f--)
						{
							array[f+1]=array[f];
							//printf("++++\n");
						}
						  array[0]=key;
						  ip++;
						return 0;
					}
				 if(k<=ip-2)
				{
				    //printf("==============================\n");
					
					if(array[k]<key && key<array[k+1])
					{
						for(f=ip-1;f>=k+1;f--)
						{
							array[f+1]=array[f];
						}
						    array[k+1]=key;
						  ip++;
						return k+1;
					}
				}
				else//(k==ip-1)
				{
				//	printf("==============================\n");
					
					    array[k+1]=key;
					    ip++;
						return k+1;
					
				}
			}
	}
		
	
	
	
}
int result(int flag)
{
	if(flag>=0)
	{
		printf("The key is inserted in position %d.\n",flag);
	}
	if(flag==-1)
	{
		printf("The array if full!\n");
	}
	if(flag==-2)
	{
		printf("The key is already in this array!\n");
	}
	return 1;
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
