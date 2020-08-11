#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 3000
#define max(a,b) ((a)>(b)?(a):(b))
int main() {
	int N1,N2,i=0,max=0,flag=0,flag2=0,c1=0,c2=0;
	int M,a,b,j=0,k=0;
	int count=0,c=0;
	int num1[MAX_SIZE]= {0};
	int num2[MAX_SIZE]= {0};
	scanf("%d",&M);
	if(M%2==0) { //如果是 偶数组 数

		while(M/2!=0) {
			count=0;
			i=0;
			j=0;
			max=0;
			memset(num1, 0, sizeof(num1));
			memset(num2, 0, sizeof(num2));
			while(1) {
				scanf("%d",&a);
				if(a==0)
					break;
				num1[i]=a;
				i++;//num1中元素个数
			}
			while(1) {
				scanf("%d",&b);
				if(b==0)
					break;
				num2[j]=b;
				j++;//num2中元素个数
			}
			max=max(i,j);
			for(k=0; k<max; k++) {
				count++;
				num1[k]=num1[k]+num2[k];
				if(k==0) {
					printf("%d",num1[k]);
				} else {
					printf(" %d",num1[k]);
				}

			}

			M=M/2;

			printf("\n");


		}


	} else { //奇数

		while(M/2!=0) {
			c++;
			count=0;
			i=0;
			j=0;
			max=0;
			memset(num1, 0, sizeof(num1));
			memset(num2, 0, sizeof(num2));
			while(1) {
				scanf("%d",&a);
				if(a==0)
					break;
				num1[i]=a;
				i++;//num1中元素个数
			}
			while(1) {
				scanf("%d",&b);
				if(b==0)
					break;
				num2[j]=b;
				j++;//num2中元素个数
			}
			max=max(i,j);
			for(k=0; k<max; k++) {
				count++;
				num1[k]=num1[k]+num2[k];
				if(k==0) {
					printf("%d",num1[k]);
				} else {
					printf(" %d",num1[k]);
				}

			}

			M=M/2;

			printf("\n");


		}


		memset(num1, 0, sizeof(num1));
		i=0;
		while(1) {
			scanf("%d",&a);
			if(a==0)
				break;
			num1[i]=a;
			i++;//num1中元素个数
		}

		for(k=0; k<i; k++) {

			if(k==0) {
				printf("%d",num1[k]);
			} else {
				printf(" %d",num1[k]);
			}

		}
		printf("\n");




	}


	return 0;
}
