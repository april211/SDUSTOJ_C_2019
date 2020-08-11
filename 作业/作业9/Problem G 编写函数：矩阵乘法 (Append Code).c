#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 104
int get_matrix(int ma[][MAX_SIZE], int m, int n)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&ma[i][j]);
		}
	}
	return m;
}
int put_matrix(int ma[][MAX_SIZE], int m, int n)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		printf("%d",ma[i][0]);
		for(j=1;j<n;j++)
		{
			printf(" %d",ma[i][j]);
		}
		printf("\n");
	}
	return m;
}
int mul_matrix(int pr[][MAX_SIZE], int m1[][MAX_SIZE], int m2[][MAX_SIZE], int m, int n, int q)
{
	int i,j,k;
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			for(k=0;k<n;k++)
			{
				pr[i][j]=pr[i][j]+m1[i][k]*m2[k][j];
			}
		}
	}
	return m;
}

int main()
{
    int m, n, q;
    int product[MAX_SIZE][MAX_SIZE];
    int matrix1[MAX_SIZE][MAX_SIZE];
    int matrix2[MAX_SIZE][MAX_SIZE];

    scanf("%d%d%d", &m, &n, &q);
    get_matrix(matrix1, m, n);
    get_matrix(matrix2, n, q);
    mul_matrix(product, matrix1, matrix2, m, n, q);
    put_matrix(product, m, q);

    return 0;
}
