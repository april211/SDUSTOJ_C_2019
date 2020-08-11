#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 1001
#define max(a,b) ((a)>(b)?(a):(b))
int ip=0;
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
int insert(int array[], int key, int vol)//传入的vol==MAX_SIZE-1 
{
	int len1;
	int i,j=0,k;
	len1=ip;
	if(ip==0) return 0;
	if(len1>=vol)  return -1;
	if(len1<vol) 
	{
		for(i=0;i<len1;i++)
		{
			if(array[i]==key) 
			{
				j++;
				return -2;
			}
			
		}
		if(j==0)//可以插入 
		{
			for(k=0;k<len1;k++)
			{
				 if(k>=0 && k<=len1-2)
				{
					if(key<array[0]) return 0;
					if(array[k]<key && key<array[k+1])
					{
						return k+1;
					}
				}
				else//(k==len1-1)
				{
					
						return k+1;
					
				}
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
	return 0;
}
int main()
{
    int array[MAX_SIZE], cases, i, key;
    scanf("%d", &cases);
    for(i = 1; i <= cases; i++)
    {
        getarray(array);
        scanf("%d", &key);
        result(insert(array, key, MAX_SIZE - 1));
    }
    return 0;
}

