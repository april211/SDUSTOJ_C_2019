#include <stdio.h>
#include <string.h>
#define OVERFLOW -1
#define MAX_SIZE 10000000
long long array[MAX_SIZE];
long long fibonacci(int n)
{
   int i,j,k;
   array[0]=array[1]=1;
   for(i=2;i<=n;i++)
   {
       array[i]=array[i-1]+array[i-2];
   }
   if(array[n]<0)//判断溢出的条件
       return -1;
   else
       return array[n];




}

int main()
{
    int n;
    long long fib;
    while(scanf("%d", &n) != EOF)
    {
        fib = fibonacci(n);
        if(fib == OVERFLOW)
            puts("overflow");
        else
            printf("%lld\n", fib);
    }
    return 0;
}
