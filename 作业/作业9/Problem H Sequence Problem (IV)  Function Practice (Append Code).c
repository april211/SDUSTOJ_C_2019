#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 1010
int max(int a, int b)
{
	if(a>=b)
	    return a;
    else 
        return b;
	
}
int init_seq(int seq[], int size)
{
	int i;

	for(i=0;i<size;i++)
	{
		seq[i]=0;
	}
	return size;
	
	
}
int get_seq(int seq[])
{
	int i,size;
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&seq[i]);
	}
	return size;
	
	
}
int put_seq(int seq[], int size)
{
	int i;
	static int c=0; 
	for(i=0;i<size;i++)
	{
		if(i==0)
		{
			 printf("%d",seq[i]);
		}
		else
		{
			 printf(" %d",seq[i]);
		}
	
		   
	}
	   printf("\n");       //size==0ʱҲҪ����������������� 
	return size;
	
	
}
int add_seq(int sum_seq[], int add_seq[], int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		sum_seq[i]=sum_seq[i]+add_seq[i];
	}
	return size;
	
	
}
int main()
{
    int  odd_seq[MAX_SIZE],  odd_size;
    int even_seq[MAX_SIZE], even_size;
    int m, i, put_size;
 
    scanf("%d", &m);
    init_seq(odd_seq, MAX_SIZE);
    odd_size = get_seq(odd_seq);
    for(i = 2; i <= m; i++)
    {
        if(i % 2 == 0)
        {
            init_seq(even_seq, MAX_SIZE);
            even_size = get_seq(even_seq);
            put_size = max(odd_size, even_size);
            add_seq(odd_seq, even_seq, put_size);
            put_seq(odd_seq, put_size);
        }
        else
        {
            init_seq(odd_seq, MAX_SIZE);
            odd_size = get_seq(odd_seq);
            put_size = max(odd_size, even_size);
            add_seq(even_seq, odd_seq, put_size);
            put_seq(even_seq, put_size);
        }
    }
    if(m % 2 == 0)
        put_seq(even_seq, even_size);
    else
        put_seq(odd_seq, odd_size);
    return 0;
}
